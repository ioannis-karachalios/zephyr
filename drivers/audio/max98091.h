/*
 * SPDX-License-Identifier: Apache-2.0
 *
 * Copyright (c) 2025 Silicon Signals Pvt. Ltd.
 * Author: Rutvij Trivedi <rutvij.trivedi@siliconsignals.io>
 * Author: Tarang Raval <tarang.raval@siliconsignals.io>
 */

#ifndef ZEPHYR_INCLUDE_CODEC_MAX98091_H_
#define ZEPHYR_INCLUDE_CODEC_MAX98091_H_

/*
 * MAX98091 Register Definitions
 */

#define M98091_REG_SOFTWARE_RESET		0x00
#define M98091_REG_DEVICE_STATUS		0x01
#define M98091_REG_JACK_STATUS			0x02
#define M98091_REG_INTERRUPT_S			0x03
#define M98091_REG_MASTER_CLOCK			0x04
#define M98091_REG_QUICK_SAMPLE_RATE		0x05
#define M98091_REG_DAI_INTERFACE		0x06
#define M98091_REG_DAC_PATH			0x07
#define M98091_REG_MIC_DIRECT_TO_ADC		0x08
#define M98091_REG_LINE_TO_ADC			0x09
#define M98091_REG_ANALOG_MIC_LOOP		0x0A
#define M98091_REG_ANALOG_LINE_LOOP		0x0B
#define M98091_REG_RESERVED			0x0C
#define M98091_REG_LINE_INPUT_CONFIG		0x0D
#define M98091_REG_LINE_INPUT_LEVEL		0x0E
#define M98091_REG_INPUT_MODE			0x0F
#define M98091_REG_MIC1_INPUT_LEVEL		0x10
#define M98091_REG_MIC2_INPUT_LEVEL		0x11
#define M98091_REG_MIC_BIAS_VOLTAGE		0x12
#define M98091_REG_DIGITAL_MIC_ENABLE		0x13
#define M98091_REG_DIGITAL_MIC_CONFIG		0x14
#define M98091_REG_LEFT_ADC_MIXER		0x15
#define M98091_REG_RIGHT_ADC_MIXER		0x16
#define M98091_REG_LEFT_ADC_LEVEL		0x17
#define M98091_REG_RIGHT_ADC_LEVEL		0x18
#define M98091_REG_ADC_BIQUAD_LEVEL		0x19
#define M98091_REG_ADC_SIDETONE			0x1A
#define M98091_REG_SYSTEM_CLOCK			0x1B
#define M98091_REG_CLOCK_MODE			0x1C
#define M98091_REG_CLOCK_RATIO_NI_MSB		0x1D
#define M98091_REG_CLOCK_RATIO_NI_LSB		0x1E
#define M98091_REG_CLOCK_RATIO_MI_MSB		0x1F
#define M98091_REG_CLOCK_RATIO_MI_LSB		0x20
#define M98091_REG_MASTER_MODE			0x21
#define M98091_REG_INTERFACE_FORMAT		0x22
#define M98091_REG_TDM_CONTROL			0x23
#define M98091_REG_TDM_FORMAT			0x24
#define M98091_REG_IO_CONFIGURATION		0x25
#define M98091_REG_FILTER_CONFIG		0x26
#define M98091_REG_DAI_PLAYBACK_LEVEL		0x27
#define M98091_REG_DAI_PLAYBACK_LEVEL_EQ	0x28
#define M98091_REG_LEFT_HP_MIXER		0x29
#define M98091_REG_RIGHT_HP_MIXER		0x2A
#define M98091_REG_HP_CONTROL			0x2B
#define M98091_REG_LEFT_HP_VOLUME		0x2C
#define M98091_REG_RIGHT_HP_VOLUME		0x2D
#define M98091_REG_LEFT_SPK_MIXER		0x2E
#define M98091_REG_RIGHT_SPK_MIXER		0x2F
#define M98091_REG_SPK_CONTROL			0x30
#define M98091_REG_LEFT_SPK_VOLUME		0x31
#define M98091_REG_RIGHT_SPK_VOLUME		0x32
#define M98091_REG_DRC_TIMING			0x33
#define M98091_REG_DRC_COMPRESSOR		0x34
#define M98091_REG_DRC_EXPANDER			0x35
#define M98091_REG_DRC_GAIN			0x36
#define M98091_REG_RCV_LOUTL_MIXER		0x37
#define M98091_REG_RCV_LOUTL_CONTROL		0x38
#define M98091_REG_RCV_LOUTL_VOLUME		0x39
#define M98091_REG_LOUTR_MIXER			0x3A
#define M98091_REG_LOUTR_CONTROL		0x3B
#define M98091_REG_LOUTR_VOLUME			0x3C
#define M98091_REG_JACK_DETECT			0x3D
#define M98091_REG_INPUT_ENABLE			0x3E
#define M98091_REG_OUTPUT_ENABLE		0x3F
#define M98091_REG_LEVEL_CONTROL		0x40
#define M98091_REG_DSP_FILTER_ENABLE		0x41
#define M98091_REG_BIAS_CONTROL			0x42
#define M98091_REG_DAC_CONTROL			0x43
#define M98091_REG_ADC_CONTROL			0x44
#define M98091_REG_DEVICE_SHUTDOWN		0x45
#define M98091_REG_EQUALIZER_BASE		0x46
#define M98091_REG_RECORD_BIQUAD_BASE		0xAF
#define M98091_REG_DMIC3_VOLUME			0xBE
#define M98091_REG_DMIC4_VOLUME			0xBF
#define M98091_REG_DMIC34_BQ_PREATTEN		0xC0
#define M98091_REG_RECORD_TDM_SLOT		0xC1
#define M98091_REG_SAMPLE_RATE			0xC2
#define M98091_REG_DMIC34_BIQUAD_BASE		0xC3
#define M98091_REG_REVISION_ID			0xFF

/* MAX98090 Register Bit Fields */

/* M98091_REG_SOFTWARE_RESET */
#define M98091_SWRESET_MASK		BIT(7)

/* M98091_REG_QUICK_SAMPLE_RATE */
#define M98091_SR_96K_MASK		BIT(5)
#define M98091_SR_32K_MASK		BIT(4)
#define M98091_SR_48K_MASK		BIT(3)
#define M98091_SR_44K1_MASK		BIT(2)
#define M98091_SR_16K_MASK		BIT(1)
#define M98091_SR_8K_MASK		BIT(0)

/* M98091_REG_DAI_INTERFACE */
#define M98091_RJ_M_MASK		BIT(5)
#define M98091_RJ_S_MASK		BIT(4)
#define M98091_LJ_M_MASK		BIT(3)
#define M98091_LJ_S_MASK		BIT(2)
#define M98091_I2S_M_MASK		BIT(1)
#define M98091_I2S_S_MASK		BIT(0)

/* M98091_REG_SYSTEM_CLOCK */
#define M98091_PSCLK_DISABLED		(0 << 4)
#define M98091_PSCLK_DIV1		BIT(4)
#define M98091_PSCLK_DIV2		(2 << 4)
#define M98091_PSCLK_DIV4		(3 << 4)

/* M98091_REG_MASTER_MODE */
#define M98091_MAS_MASK			BIT(7)

/* M98091_REG_INTERFACE_FORMAT */
#define M98091_RJ_MASK			BIT(5)
#define M98091_WCI_MASK			BIT(4)
#define M98091_BCI_MASK			BIT(3)
#define M98091_DLY_MASK			BIT(2)
#define M98091_WS_MASK			(3 << 0)
#define M98091_16B_WS			(0 << 0)

/* M98091_REG_IO_CONFIGURATION */
#define M98091_LTEN_MASK		BIT(5)
#define M98091_LBEN_MASK		BIT(4)
#define M98091_DMONO_MASK		BIT(3)
#define M98091_HIZOFF_MASK		BIT(2)
#define M98091_SDOEN_MASK		BIT(1)
#define M98091_SDIEN_MASK		BIT(0)

/* M98091_REG_LEFT_HP_MIXER */
#define M98091_MIXHPL_MIC2_MASK		BIT(5)
#define M98091_MIXHPL_MIC1_MASK		BIT(4)
#define M98091_MIXHPL_LINEB_MASK	BIT(3)
#define M98091_MIXHPL_LINEA_MASK	BIT(2)
#define M98091_MIXHPL_DACR_MASK		BIT(1)
#define M98091_MIXHPL_DACL_MASK		BIT(0)
#define M98091_MIXHPL_MASK		(63 << 0)

/* M98091_REG_RIGHT_HP_MIXER */
#define M98091_MIXHPR_MIC2_MASK		BIT(5)
#define M98091_MIXHPR_MIC1_MASK		BIT(4)
#define M98091_MIXHPR_LINEB_MASK	BIT(3)
#define M98091_MIXHPR_LINEA_MASK	BIT(2)
#define M98091_MIXHPR_DACR_MASK		BIT(1)
#define M98091_MIXHPR_DACL_MASK		BIT(0)
#define M98091_MIXHPR_MASK		(63 << 0)

/* M98091_REG_HP_CONTROL */
#define M98091_MIXHPRSEL_MASK		BIT(5)
#define M98091_MIXHPLSEL_MASK		BIT(4)
#define M98091_MIXHPRG_MASK		(3 << 2)
#define M98091_MIXHPLG_MASK		(3 << 0)

/* M98091_REG_LEFT_HP_VOLUME */
#define M98091_HPLM_MASK		BIT(7)
#define M98091_HPVOLL_MASK		(31 << 0)

/* M98091_REG_LEFT_SPK_MIXER */
#define M98091_MIXSPL_MIC2_MASK		BIT(5)
#define M98091_MIXSPL_MIC1_MASK		BIT(4)
#define M98091_MIXSPL_LINEB_MASK	BIT(3)
#define M98091_MIXSPL_LINEA_MASK	BIT(2)
#define M98091_MIXSPL_DACR_MASK		BIT(1)
#define M98091_MIXSPL_DACL_MASK		BIT(0)
#define M98091_MIXSPL_MASK		(63 << 0)

/* M98091_REG_RIGHT_SPK_MIXER */
#define M98091_SPK_SLAVE_MASK		BIT(6)
#define M98091_MIXSPR_MIC2_MASK		BIT(5)
#define M98091_MIXSPR_MIC1_MASK		BIT(4)
#define M98091_MIXSPR_LINEB_MASK	BIT(3)
#define M98091_MIXSPR_LINEA_MASK	BIT(2)
#define M98091_MIXSPR_DACR_MASK		BIT(1)
#define M98091_MIXSPR_DACL_MASK		BIT(0)
#define M98091_MIXSPR_MASK		(63 << 0)

/* M98091_REG_SPK_CONTROL */
#define M98091_MIXSPRG_MASK		(3 << 2)
#define M98091_MIXSPLG_MASK		(3 << 0)

/* M98091_REG_LEFT_SPK_VOLUME */
#define M98091_SPLM_MASK		BIT(7)
#define M98091_SPVOLL_MASK		(63 << 0)

/* M98091_REG_OUTPUT_ENABLE */
#define M98091_HPREN_MASK		BIT(7)
#define M98091_HPLEN_MASK		BIT(6)
#define M98091_SPREN_MASK		BIT(5)
#define M98091_SPLEN_MASK		BIT(4)
#define M98091_RCVLEN_MASK		BIT(3)
#define M98091_RCVREN_MASK		BIT(2)
#define M98091_DAREN_MASK		BIT(1)
#define M98091_DALEN_MASK		BIT(0)

/* M98091_REG_DEVICE_SHUTDOWN */
#define M98091_SHDNN_MASK		BIT(7)

#define M98091_DEFAULT_VOLUME		0x2A
#define M98091_REVA			0x50

#endif
