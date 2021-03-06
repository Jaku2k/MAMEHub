#pragma once

#ifndef __MSM5205_H__
#define __MSM5205_H__

/* an interface for the MSM5205 and similar chips */

/* prescaler selector defines   */
/* MSM5205 default master clock is 384KHz */
#define MSM5205_S96_3B 0     /* prescaler 1/96(4KHz) , data 3bit */
#define MSM5205_S48_3B 1     /* prescaler 1/48(8KHz) , data 3bit */
#define MSM5205_S64_3B 2     /* prescaler 1/64(6KHz) , data 3bit */
#define MSM5205_SEX_3B 3     /* VCLK slave mode      , data 3bit */
#define MSM5205_S96_4B 4     /* prescaler 1/96(4KHz) , data 4bit */
#define MSM5205_S48_4B 5     /* prescaler 1/48(8KHz) , data 4bit */
#define MSM5205_S64_4B 6     /* prescaler 1/64(6KHz) , data 4bit */
#define MSM5205_SEX_4B 7     /* VCLK slave mode      , data 4bit */

/* MSM6585 default master clock is 640KHz */
#define MSM6585_S160  (4+8)  /* prescaler 1/160(4KHz), data 4bit */
#define MSM6585_S40   (5+8)  /* prescaler 1/40(16KHz), data 4bit */
#define MSM6585_S80   (6+8)  /* prescaler 1/80 (8KHz), data 4bit */
#define MSM6585_S20   (7+8)  /* prescaler 1/20(32KHz), data 4bit */


struct msm5205_interface
{
	devcb_write_line m_vclk_cb;   /* VCLK callback              */
	int m_select;       /* prescaler / bit width selector        */
};


class msm5205_device : public device_t,
							public device_sound_interface,
							public msm5205_interface
{
public:
	msm5205_device(const machine_config &mconfig, const char *tag, device_t *owner, UINT32 clock);
	msm5205_device(const machine_config &mconfig, device_type type, const char *name, const char *tag, device_t *owner, UINT32 clock);
	~msm5205_device() {}

	// reset signal should keep for 2cycle of VCLK
	void reset_w(int reset);
	// adpcmata is latched after vclk_interrupt callback
	void data_w(int data);
	// VCLK slave mode option
	// if VCLK and reset or data is changed at the same time,
	// call vclk_w after data_w and reset_w.
	void vclk_w(int vclk);
	// option , selected pin seletor
	void playmode_w(int select);

	void set_volume(int volume);
	void change_clock_w(INT32 clock);

protected:
	// device-level overrides
	virtual void device_config_complete();
	virtual void device_start();
	virtual void device_reset();

	TIMER_CALLBACK_MEMBER(vclk_callback);

	// sound stream update overrides
	virtual void sound_stream_update(sound_stream &stream, stream_sample_t **inputs, stream_sample_t **outputs, int samples);

	void compute_tables();

	// internal state
	sound_stream * m_stream;    /* number of stream system      */
	INT32 m_mod_clock;          /* clock rate                   */
	emu_timer *m_timer;         /* VCLK callback timer          */
	INT32 m_data;               /* next adpcm data              */
	INT32 m_vclk;               /* vclk signal (external mode)  */
	INT32 m_reset;              /* reset pin signal             */
	INT32 m_prescaler;          /* prescaler selector S1 and S2 */
	INT32 m_bitwidth;           /* bit width selector -3B/4B    */
	INT32 m_signal;             /* current ADPCM signal         */
	INT32 m_step;               /* current ADPCM step           */
	int m_diff_lookup[49*16];
	devcb_resolved_write_line m_vclk_callback;
};

extern const device_type MSM5205;

class msm6585_device : public msm5205_device
{
public:
	msm6585_device(const machine_config &mconfig, const char *tag, device_t *owner, UINT32 clock);

	// sound stream update overrides
	virtual void sound_stream_update(sound_stream &stream, stream_sample_t **inputs, stream_sample_t **outputs, int samples);
};

extern const device_type MSM6585;


#endif /* __MSM5205_H__ */
