/* SPDX-License-Identifier: GPL-2.0 OR MIT */
/*
 * Copyright (C) 2023 Sophgo Technology Inc. All rights reserved.
 * Copyright (C) 2023 Jisheng Zhang <jszhang@kernel.org>
 */

#ifndef _DT_BINDINGS_CV1800B_RESET_H
#define _DT_BINDINGS_CV1800B_RESET_H

/*				0-1	*/
#define RST_DDR			2
#define RST_H264C		3
#define RST_JPEG		4
#define RST_H265C		5
#define RST_VIPSYS		6
#define RST_TDMA		7
#define RST_TPU			8
#define RST_TPUSYS		9
/*				10	*/
#define RST_USB			11
#define RST_ETH0		12
/*				13	*/
#define RST_NAND		14
/*				15	*/
#define RST_SD0			16
/*				17	*/
#define RST_SDMA		18
#define RST_I2S0		19
#define RST_I2S1		20
#define RST_I2S2		21
#define RST_I2S3		22
#define RST_UART0		23
#define RST_UART1		24
#define RST_UART2		25
#define RST_UART3		26
#define RST_I2C0		27
#define RST_I2C1		28
#define RST_I2C2		29
#define RST_I2C3		30
#define RST_I2C4		31
#define RST_PWM0		32
#define RST_PWM1		33
#define RST_PWM2		34
#define RST_PWM3		35
/*				36-39	*/
#define RST_SPI0		40
#define RST_SPI1		41
#define RST_SPI2		42
#define RST_SPI3		43
#define RST_GPIO0		44
#define RST_GPIO1		45
#define RST_GPIO2		46
#define RST_EFUSE		47
#define RST_WDT			48
#define RST_AHBRST_ROM		49
#define RST_SPIC		50
#define RST_TEMPSEN		51
#define RST_SARADC		52
/*				53-57	*/
#define RST_COMBORST_PHY0	58
/*				59-60	*/
#define RST_SPIRST_NAND		61
#define RST_SE			62
/*				63-73	*/
#define RST_UART4		74
#define RST_GPIO3		75
#define RST_SYSTEM		76
#define RST_TIMER		77
#define RST_TIMER0		78
#define RST_TIMER1		79
#define RST_TIMER2		80
#define RST_TIMER3		81
#define RST_TIMER4		82
#define RST_TIMER5		83
#define RST_TIMER6		84
#define RST_TIMER7		85
#define RST_WGN0		86
#define RST_WGN1		87
#define RST_WGN2		88
#define RST_KEYSCAN		89
/*				90	*/
#define RST_AUDDAC		91
#define RST_AUDDACRST_APB	92
#define RST_AUDADC		93
/*				94	*/
#define RST_VCSYS		95
#define RST_ETHPHY		96
#define RST_ETHPHYRST_APB	97
#define RST_AUDSRC		98
#define RST_VIP_CAM0		99
#define RST_WDT1		100
#define RST_WDT2		101
/*				102-292	*/
#define RST_CPUSYS1		293
#define RST_CPUSYS2		294

#endif /* _DT_BINDINGS_CV1800B_RESET_H */