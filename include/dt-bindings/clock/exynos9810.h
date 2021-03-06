/*
 * Copyright (c) 2016 Samsung Electronics Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Device Tree binding constants for Exynos9810 clock controller.
*/

#ifndef _DT_BINDINGS_CLOCK_EXYNOS_9810_H
#define _DT_BINDINGS_CLOCK_EXYNOS_9810_H

#define NONE					(0 + 0)
#define OSCCLK					(0 + 1)

/* NUMBER FOR MFC DRIVER STARTS FROM 10 */
#define CLK_MFC_BASE				(10)
#define GATE_MFC				(CLK_MFC_BASE + 0)
#define GATE_WFD				(CLK_MFC_BASE + 1)
#define GATE_SMMU_MFCD0				(CLK_MFC_BASE + 2)
#define GATE_SMMU_MFCD1				(CLK_MFC_BASE + 3)
#define UMUX_CLKCMU_MFC_BUS			(CLK_MFC_BASE + 4)
#define UMUX_CLKCMU_MFC_WFD			(CLK_MFC_BASE + 5)

/* NUMBER FOR CHUB DRIVER STARTS FROM 80 */
#define CLK_CHUB_BASE				(80)
#define GATE_CM4_CHUB				(CLK_CHUB_BASE + 0)
#define GATE_I2C_CHUB00				(CLK_CHUB_BASE + 1)
#define GATE_I2C_CHUB01				(CLK_CHUB_BASE + 2)
#define GATE_PDMA_CHUB				(CLK_CHUB_BASE + 3)
#define GATE_PWM_CHUB				(CLK_CHUB_BASE + 4)
#define GATE_TIMER_CHUB				(CLK_CHUB_BASE + 5)
#define GATE_USI_CHUB00				(CLK_CHUB_BASE + 6)
#define GATE_USI_CHUB01				(CLK_CHUB_BASE + 7)
#define GATE_WDT_CHUB				(CLK_CHUB_BASE + 8)
#define CHUB_USI00				(CLK_CHUB_BASE + 9)
#define CHUB_USI01				(CLK_CHUB_BASE + 10)
#define CHUB_USI_I2C				(CLK_CHUB_BASE + 11)
#define CHUB_TIMER_FCLK				(CLK_CHUB_BASE + 12)
#define CHUB_BUS				(CLK_CHUB_BASE + 13)

/* NUMBER FOR CMGP DRIVER STARTS FROM 100 */
#define CLK_CMGP_BASE				(100)
#define GATE_ADC_CMGP_S0			(CLK_CMGP_BASE + 0)
#define GATE_ADC_CMGP_S1			(CLK_CMGP_BASE + 1)
#define GATE_ADC_CMGP				(CLK_CMGP_BASE + 2)
#define GATE_I2C_CMGP00				(CLK_CMGP_BASE + 3)
#define GATE_I2C_CMGP01				(CLK_CMGP_BASE + 4)
#define GATE_I2C_CMGP02				(CLK_CMGP_BASE + 5)
#define GATE_I2C_CMGP03				(CLK_CMGP_BASE + 6)
#define GATE_USI_CMGP00				(CLK_CMGP_BASE + 7)
#define GATE_USI_CMGP01				(CLK_CMGP_BASE + 8)
#define GATE_USI_CMGP02				(CLK_CMGP_BASE + 9)
#define GATE_USI_CMGP03				(CLK_CMGP_BASE + 10)
#define USI_CMGP00				(CLK_CMGP_BASE + 11)
#define USI_CMGP01				(CLK_CMGP_BASE + 12)
#define USI_CMGP02				(CLK_CMGP_BASE + 13)
#define USI_CMGP03				(CLK_CMGP_BASE + 14)
#define CMGP_USI_I2C				(CLK_CHUB_BASE + 15)
#define CMGP_ADC				(CLK_CMGP_BASE + 16)

/* NUMBER FOR PERIS DRIVER STARTS FROM 150 */
#define CLK_PERIS_BASE				(150)
#define GATE_BUSIF_TMU				(CLK_PERIS_BASE + 0)
#define GATE_GIC				(CLK_PERIS_BASE + 1)
#define GATE_MCT				(CLK_PERIS_BASE + 2)
#define GATE_OTP_CON_BIRA			(CLK_PERIS_BASE + 3)
#define GATE_OTP_CON_TOP			(CLK_PERIS_BASE + 4)
#define GATE_WDT_CLUSTER0			(CLK_PERIS_BASE + 5)
#define GATE_WDT_CLUSTER1			(CLK_PERIS_BASE + 6)
#define UMUX_CLKCMU_PERIS_BUS			(CLK_PERIS_BASE + 7)

/* NUMBER FOR PERIC0 DRIVER STARTS FROM 200 */
#define CLK_PERIC0_BASE				(200)
#define GATE_PWM				(CLK_PERIC0_BASE + 0)
#define GATE_UART_DBG				(CLK_PERIC0_BASE + 1)
#define GATE_USI00				(CLK_PERIC0_BASE + 2)
#define GATE_USI01				(CLK_PERIC0_BASE + 3)
#define GATE_USI02				(CLK_PERIC0_BASE + 4)
#define GATE_USI03				(CLK_PERIC0_BASE + 5)
#define GATE_USI04				(CLK_PERIC0_BASE + 6)
#define GATE_USI05				(CLK_PERIC0_BASE + 7)
#define GATE_USI12				(CLK_PERIC0_BASE + 8)
#define GATE_USI13				(CLK_PERIC0_BASE + 9)
#define GATE_USI14				(CLK_PERIC0_BASE + 10)
#define GATE_USI00_I2C				(CLK_PERIC0_BASE + 11)
#define GATE_USI01_I2C				(CLK_PERIC0_BASE + 12)
#define GATE_USI02_I2C				(CLK_PERIC0_BASE + 13)
#define GATE_USI03_I2C				(CLK_PERIC0_BASE + 14)
#define GATE_USI04_I2C				(CLK_PERIC0_BASE + 15)
#define GATE_USI05_I2C				(CLK_PERIC0_BASE + 16)
#define GATE_USI12_I2C				(CLK_PERIC0_BASE + 17)
#define GATE_USI13_I2C				(CLK_PERIC0_BASE + 18)
#define GATE_USI14_I2C				(CLK_PERIC0_BASE + 19)
#define UART_DBG				(CLK_PERIC0_BASE + 20)
#define USI00					(CLK_PERIC0_BASE + 21)
#define USI01					(CLK_PERIC0_BASE + 22)
#define USI02					(CLK_PERIC0_BASE + 23)
#define USI03					(CLK_PERIC0_BASE + 24)
#define USI04					(CLK_PERIC0_BASE + 25)
#define USI05					(CLK_PERIC0_BASE + 26)
#define USI12					(CLK_PERIC0_BASE + 27)
#define USI13					(CLK_PERIC0_BASE + 28)
#define USI14					(CLK_PERIC0_BASE + 29)
#define UMUX_CLKCMU_PERIC0_BUS			(CLK_PERIC0_BASE + 30)
#define UMUX_CLKCMU_PERIC0_IP			(CLK_PERIC0_BASE + 31)
#define PERIC0_USI_I2C				(CLK_PERIC0_BASE + 32)

/* NUMBER FOR PERIC1 DRIVER STARTS FROM 250 */
#define CLK_PERIC1_BASE				(250)
#define GATE_USI06				(CLK_PERIC1_BASE + 0)
#define GATE_USI07				(CLK_PERIC1_BASE + 1)
#define GATE_USI08				(CLK_PERIC1_BASE + 2)
#define GATE_USI09				(CLK_PERIC1_BASE + 3)
#define GATE_USI10				(CLK_PERIC1_BASE + 4)
#define GATE_USI11				(CLK_PERIC1_BASE + 5)
#define GATE_USI06_I2C				(CLK_PERIC1_BASE + 6)
#define GATE_USI07_I2C				(CLK_PERIC1_BASE + 7)
#define GATE_USI08_I2C				(CLK_PERIC1_BASE + 8)
#define GATE_USI09_I2C				(CLK_PERIC1_BASE + 9)
#define GATE_USI10_I2C				(CLK_PERIC1_BASE + 10)
#define GATE_USI11_I2C				(CLK_PERIC1_BASE + 11)
#define GATE_UART_BT				(CLK_PERIC1_BASE + 12)
#define GATE_I2C_CAM0				(CLK_PERIC1_BASE + 13)
#define GATE_I2C_CAM1				(CLK_PERIC1_BASE + 14)
#define GATE_I2C_CAM2				(CLK_PERIC1_BASE + 15)
#define GATE_I2C_CAM3				(CLK_PERIC1_BASE + 16)
#define GATE_SPI_CAM0				(CLK_PERIC1_BASE + 17)
#define UART_BT					(CLK_PERIC1_BASE + 18)
#define I2C_CAM0				(CLK_PERIC1_BASE + 19)
#define I2C_CAM1				(CLK_PERIC1_BASE + 20)
#define I2C_CAM2				(CLK_PERIC1_BASE + 21)
#define I2C_CAM3				(CLK_PERIC1_BASE + 22)
#define SPI_CAM0				(CLK_PERIC1_BASE + 23)
#define USI06					(CLK_PERIC1_BASE + 24)
#define USI07					(CLK_PERIC1_BASE + 25)
#define USI08					(CLK_PERIC1_BASE + 26)
#define USI09					(CLK_PERIC1_BASE + 27)
#define USI10					(CLK_PERIC1_BASE + 28)
#define USI11					(CLK_PERIC1_BASE + 29)
#define UMUX_CLKCMU_PERIC1_BUS			(CLK_PERIC1_BASE + 30)
#define UMUX_CLKCMU_PERIC1_IP			(CLK_PERIC1_BASE + 31)
#define PERIC1_USI_I2C				(CLK_PERIC1_BASE + 32)

/* NUMBER FOR CMU DRIVER STARTS FROM 320 */
#define CLK_CMU_BASE				(320)
#define HPM					(CLK_CMU_BASE + 0)
#define GATE_CMU_CMUREF				(CLK_CMU_BASE + 1)
#define GATE_DFTMUX_TOP_CIS_CLK0		(CLK_CMU_BASE + 2)
#define GATE_DFTMUX_TOP_CIS_CLK1		(CLK_CMU_BASE + 3)
#define GATE_DFTMUX_TOP_CIS_CLK2		(CLK_CMU_BASE + 4)
#define GATE_DFTMUX_TOP_CIS_CLK3		(CLK_CMU_BASE + 5)
#define GATE_OTP				(CLK_CMU_BASE + 6)

/* NUMBER FOR CIS DRIVER STARTS FROM 350 */
#define CLK_CIS_BASE				(350)
#define CIS_CLK0				(CLK_CIS_BASE + 0)
#define CIS_CLK1				(CLK_CIS_BASE + 1)
#define CIS_CLK2				(CLK_CIS_BASE + 2)
#define CIS_CLK3				(CLK_CIS_BASE + 3)

/* NUMBER FOR DCF DRIVER STARTS FROM 360 */
#define CLK_DCF_BASE				(360)
#define GATE_IS_DCF_CIP				(CLK_DCF_BASE + 0)
#define GATE_IS_DCF_C2SYNC_2SLV			(CLK_DCF_BASE + 1)
#define GATE_IS_DCF_SYSMMU			(CLK_DCF_BASE + 2)
#define UMUX_CLKCMU_DCF_BUS			(CLK_DCF_BASE + 3)

/* NUMBER FOR DCPOST DRIVER STARTS FROM 370 */
#define CLK_DCPOST_BASE				(370)
#define GATE_IS_DCPOST_CIP2			(CLK_DCPOST_BASE + 0)
#define GATE_IS_DCPOST_C2SYNC_1SLV_CLK		(CLK_DCPOST_BASE + 1)
#define UMUX_CLKCMU_DCPOST_BUS			(CLK_DCPOST_BASE + 2)

/* NUMBER FOR DCRD DRIVER STARTS FROM 380 */
#define CLK_DCRD_BASE				(380)
#define GATE_IS_DCRD_DCP			(CLK_DCRD_BASE + 0)
#define GATE_IS_DCRD_DCP_C2C			(CLK_DCRD_BASE + 1)
#define GATE_IS_DCRD_DCP_DIV2			(CLK_DCRD_BASE + 2)
#define GATE_IS_DCRD_SYSMMU			(CLK_DCRD_BASE + 3)
#define UMUX_CLKCMU_DCRD_BUS			(CLK_DCRD_BASE + 4)

/* NUMBER FOR ISPHQ DRIVER STARTS FROM 400 */
#define CLK_ISPHQ_BASE				(400)
#define GATE_IS_ISPHQ				(CLK_ISPHQ_BASE + 0)
#define GATE_IS_ISPHQ_C2COM			(CLK_ISPHQ_BASE + 1)
#define GATE_IS_ISPHQ_SYSMMU			(CLK_ISPHQ_BASE + 2)
#define UMUX_CLKCMU_ISPHQ_BUS			(CLK_ISPHQ_BASE + 3)

/* NUMBER FOR ISPLP DRIVER STARTS FROM 420 */
#define CLK_ISPLP_BASE				(420)
#define GATE_IS_ISPLP_MC_SCALER			(CLK_ISPLP_BASE + 0)
#define GATE_IS_ISPLP				(CLK_ISPLP_BASE + 1)
#define GATE_IS_ISPLP_VRA			(CLK_ISPLP_BASE + 2)
#define GATE_IS_ISPLP_GDC			(CLK_ISPLP_BASE + 3)
#define GATE_IS_ISPLP_C2			(CLK_ISPLP_BASE + 4)
#define GATE_IS_SYSMMU_ISPLP0			(CLK_ISPLP_BASE + 5)
#define GATE_IS_SYSMMU_ISPLP1			(CLK_ISPLP_BASE + 6)
#define UMUX_CLKCMU_ISPLP_BUS			(CLK_ISPLP_BASE + 7)
#define UMUX_CLKCMU_ISPLP_VRA			(CLK_ISPLP_BASE + 8)
#define UMUX_CLKCMU_ISPLP_GDC			(CLK_ISPLP_BASE + 9)

/* NUMBER FOR ISPPRE DRIVER STARTS FROM 450 */
#define CLK_ISPPRE_BASE				(450)
#define GATE_IS_ISPPRE_CSIS0			(CLK_ISPPRE_BASE + 0)
#define GATE_IS_ISPPRE_CSIS1			(CLK_ISPPRE_BASE + 1)
#define GATE_IS_ISPPRE_CSIS2			(CLK_ISPPRE_BASE + 2)
#define GATE_IS_ISPPRE_CSIS3			(CLK_ISPPRE_BASE + 3)
#define GATE_IS_ISPPRE_PDP_DMA			(CLK_ISPPRE_BASE + 4)
#define GATE_IS_ISPPRE_3AA			(CLK_ISPPRE_BASE + 5)
#define GATE_IS_ISPPRE_3AAM			(CLK_ISPPRE_BASE + 6)
#define GATE_IS_ISPPRE_PDP_CORE0		(CLK_ISPPRE_BASE + 7)
#define GATE_IS_ISPPRE_PDP_CORE1		(CLK_ISPPRE_BASE + 8)
#define GATE_IS_ISPPRE_SYSMMU			(CLK_ISPPRE_BASE + 9)
#define UMUX_CLKCMU_ISPPRE_BUS			(CLK_ISPPRE_BASE + 10)

/* NUMBER FOR CAM DRIVER STARTS FROM 500 */
#define CLK_CAM_BASE				(500)

/* NUMBER FOR DCAM DRIVER STARTS FROM 550 */
#define CLK_DCAM_BASE				(550)

/* NUMBER OF G2D DRIVER STARTS FROM 600 */
#define CLK_G2D_BASE				(600)
#define GATE_JSQZ				(CLK_G2D_BASE + 0)
#define GATE_G2D				(CLK_G2D_BASE + 1)
#define GATE_JPEG				(CLK_G2D_BASE + 2)
#define GATE_MSCL				(CLK_G2D_BASE + 3)
#define GATE_SMMU_G2DD0				(CLK_G2D_BASE + 4)
#define GATE_SMMU_G2DD1				(CLK_G2D_BASE + 5)
#define GATE_SMMU_G2DD2				(CLK_G2D_BASE + 6)
#define UMUX_CLKCMU_G2D_MSCL			(CLK_G2D_BASE + 7)
#define UMUX_CLKCMU_G2D_G2D			(CLK_G2D_BASE + 8)

/* NUMBER FOR ABOX DRIVER STARTS FROM 650 */
#define CLK_ABOX_BASE				(650)
#define GATE_ABOX_ACLK				(CLK_ABOX_BASE + 0)
#define GATE_ABOX_BCLK_DSIF			(CLK_ABOX_BASE + 1)
#define GATE_ABOX_BCLK0				(CLK_ABOX_BASE + 2)
#define GATE_ABOX_BCLK1				(CLK_ABOX_BASE + 3)
#define GATE_ABOX_BCLK2				(CLK_ABOX_BASE + 4)
#define GATE_ABOX_BCLK3				(CLK_ABOX_BASE + 5)
#define GATE_ABOX_DUMMY				(CLK_ABOX_BASE + 6)
#define GATE_ABOX_DMIC				(CLK_ABOX_BASE + 7)
#define GATE_SMMU_ABOX				(CLK_ABOX_BASE + 8)
#define GATE_SYSREG_ABOX			(CLK_ABOX_BASE + 9)
#define GATE_WDT_ABOXCPU			(CLK_ABOX_BASE + 10)
#define DOUT_CLK_ABOX_ACLK			(CLK_ABOX_BASE + 11)
#define DOUT_CLK_ABOX_AUDIF			(CLK_ABOX_BASE + 12)
#define DOUT_CLK_ABOX_DSIF			(CLK_ABOX_BASE + 13)
#define DOUT_CLK_ABOX_DMIC			(CLK_ABOX_BASE + 14)
#define DOUT_CLK_ABOX_UAIF0			(CLK_ABOX_BASE + 15)
#define DOUT_CLK_ABOX_UAIF1			(CLK_ABOX_BASE + 16)
#define DOUT_CLK_ABOX_UAIF2			(CLK_ABOX_BASE + 17)
#define DOUT_CLK_ABOX_UAIF3			(CLK_ABOX_BASE + 18)
#define PLL_OUT_AUD				(CLK_ABOX_BASE + 19)

/* NUMBER FOR FSYS0 DRIVER STARTS FROM 700 */
#define CLK_FSYS0_BASE				(700)
#define GATE_DP_LINK				(CLK_FSYS0_BASE + 0)
#define GATE_DP_LINK_GTC			(CLK_FSYS0_BASE + 1)
#define GATE_UFS_EMBD				(CLK_FSYS0_BASE + 2)
#define GATE_UFS_EMBD_FMP			(CLK_FSYS0_BASE + 3)
#define GATE_USB30DRD_USB30DRD_LINK		(CLK_FSYS0_BASE + 4)
#define GATE_USB30DRD_USBPCS			(CLK_FSYS0_BASE + 5)
#define GATE_USB30DRD_USB30DRD_CTRL		(CLK_FSYS0_BASE + 6)
#define GATE_USB30DRD_USBDPPHY			(CLK_FSYS0_BASE + 7)
#define GATE_USB30DRD_SOC_PLL			(CLK_FSYS0_BASE + 8)
#define UFS_EMBD				(CLK_FSYS0_BASE + 9)
#define DPGTC					(CLK_FSYS0_BASE + 10)
#define USB30DRD				(CLK_FSYS0_BASE + 11)
#define USBDP_DEBUG_USER			(CLK_FSYS0_BASE + 12)
#define UMUX_CLKCMU_FSYS0_BUS			(CLK_FSYS0_BASE + 13)
#define UMUX_CLKCMU_FSYS0_DPGTC			(CLK_FSYS0_BASE + 14)
#define UMUX_CLKCMU_FSYS0_UFS_EMBD		(CLK_FSYS0_BASE + 15)
#define UMUX_CLKCMU_FSYS0_USB30DRD		(CLK_FSYS0_BASE + 16)
#define UMUX_CLKCMU_FSYS0_USBDP_DEBUG		(CLK_FSYS0_BASE + 17)

/* NUMBER FOR FSYS1 DRIVER STARTS FROM 750 */
#define CLK_FSYS1_BASE				(750)
#define GATE_MMC_CARD				(CLK_FSYS1_BASE + 0)
#define GATE_SSS				(CLK_FSYS1_BASE + 1)
#define GATE_PCIE_GEN2_MSTR			(CLK_FSYS1_BASE + 2)
#define GATE_PCIE_GEN2_PCS			(CLK_FSYS1_BASE + 3)
#define GATE_PCIE_GEN2_PHY			(CLK_FSYS1_BASE + 4)
#define GATE_PCIE_GEN2_DBI			(CLK_FSYS1_BASE + 5)
#define GATE_PCIE_GEN2_APB			(CLK_FSYS1_BASE + 6)
#define GATE_PCIE_GEN2_SOCPLL			(CLK_FSYS1_BASE + 7)
#define GATE_PCIE_GEN3_MSTR			(CLK_FSYS1_BASE + 8)
#define GATE_PCIE_GEN3_PCS			(CLK_FSYS1_BASE + 9)
#define GATE_PCIE_GEN3_PHY			(CLK_FSYS1_BASE + 10)
#define GATE_PCIE_GEN3_DBI			(CLK_FSYS1_BASE + 11)
#define GATE_PCIE_GEN3_APB			(CLK_FSYS1_BASE + 12)
#define GATE_PCIE_GEN3_SOCPLL			(CLK_FSYS1_BASE + 13)
#define GATE_PCIE_IA_GEN2			(CLK_FSYS1_BASE + 14)
#define GATE_PCIE_IA_GEN3			(CLK_FSYS1_BASE + 15)
#define GATE_RTIC				(CLK_FSYS1_BASE + 16)
#define GATE_SYSMMU_FSYS1			(CLK_FSYS1_BASE + 17)
#define GATE_UFS_CARD				(CLK_FSYS1_BASE + 18)
#define GATE_UFS_CARD_FMP			(CLK_FSYS1_BASE + 19)
#define MMC_CARD				(CLK_FSYS1_BASE + 20)
#define UFS_CARD				(CLK_FSYS1_BASE + 21)
#define UMUX_CLKCMU_FSYS1_BUS			(CLK_FSYS1_BASE + 22)
#define UMUX_CLKCMU_FSYS1_MMC_CARD		(CLK_FSYS1_BASE + 23)
#define UMUX_CLKCMU_FSYS1_UFS_CARD		(CLK_FSYS1_BASE + 24)
#define UMUX_CLKCMU_FSYS1_PCIE			(CLK_FSYS1_BASE + 25)

/* NUMBER FOR G3D DRIVER STARTS FROM 800 */
#define CLK_G3D_BASE				(800)
#define GATE_GPU				(CLK_G3D_BASE + 0)

/* NUMBER FOR DPU DRIVER STARTS FROM 850 */
#define CLK_DPU_BASE				(850)
#define GATE_DPU				(CLK_DPU_BASE + 0)
#define GATE_DPU_DMA				(CLK_DPU_BASE + 1)
#define GATE_DPU_DPP				(CLK_DPU_BASE + 2)
#define GATE_DPU_WB_MUX				(CLK_DPU_BASE + 3)
#define GATE_SYSMMU_DPUD0			(CLK_DPU_BASE + 4)
#define GATE_SYSMMU_DPUD1			(CLK_DPU_BASE + 5)
#define GATE_SYSMMU_DPUD2			(CLK_DPU_BASE + 6)
#define UMUX_CLKCMU_DPU_BUS			(CLK_DPU_BASE + 7)
#define GATE_DECON0				(GATE_DPU)
#define GATE_DECON1				(GATE_DPU)
#define GATE_DECON2				(GATE_DPU)

/* NUMBER FOR DPU1 DRIVER STARTS FROM 900 */
#define CLK_DPU1_BASE				(900)

/* NUMBER FOR CLKOUT PORT STARTS FROM 920 */
#define CLK_CLKOUT_BASE				(920)
#define OSC_NFC					(CLK_CLKOUT_BASE + 0)
#define OSC_AUD					(CLK_CLKOUT_BASE + 1)

/* NUMBER FOR VTS DRIVER STARTS FROM 940 */
#define CLK_VTS_BASE				(940)
#define GATE_VTS_CPU				(CLK_VTS_BASE + 0)
#define GATE_MAILBOX_VTS2CHUB			(CLK_VTS_BASE + 1)
#define GATE_VTS_DMIC_IF			(CLK_VTS_BASE + 2)
#define GATE_HWACG_SYS_DMIC0			(CLK_VTS_BASE + 3)
#define GATE_HWACG_SYS_DMIC1			(CLK_VTS_BASE + 4)
#define GATE_WDT_VTS				(CLK_VTS_BASE + 5)
#define GATE_U_DMIC_CLK_MUX			(CLK_VTS_BASE + 6)
#define DOUT_CLK_VTS_DMICIF			(CLK_VTS_BASE + 7)
#define DOUT_CLK_VTS_DMIC			(CLK_VTS_BASE + 8)
#define DOUT_CLK_VTS_DMIC_DIV2			(CLK_VTS_BASE + 9)
#define UMUX_CLKCMU_VTS_BUS			(CLK_VTS_BASE + 10)
#define UMUX_CLKCMU_VTS_DLL			(CLK_VTS_BASE + 11)

/* NUMBER FOR APM DRIVER STARTS FROM 960 */
#define CLK_APM_BASE				(980)
#define GATE_GREBE				(CLK_APM_BASE + 0)
#define GATE_GREBE_DBG				(CLK_APM_BASE + 1)
#define GATE_INTMEM				(CLK_APM_BASE + 2)
#define GATE_MAILBOX_AP2CHUB			(CLK_APM_BASE + 3)
#define GATE_MAILBOX_AP2CP			(CLK_APM_BASE + 4)
#define GATE_MAILBOX_AP2CP_S			(CLK_APM_BASE + 5)
#define GATE_MAILBOX_AP2GNSS			(CLK_APM_BASE + 6)
#define GATE_MAILBOX_AP2VTS			(CLK_APM_BASE + 7)
#define GATE_MAILBOX_APM2AP			(CLK_APM_BASE + 8)
#define GATE_MAILBOX_APM2CHUB			(CLK_APM_BASE + 9)
#define GATE_MAILBOX_APM2CP			(CLK_APM_BASE + 10)
#define GATE_MAILBOX_APM2GNSS			(CLK_APM_BASE + 11)
#define GATE_MAILBOX_CHUB2CP			(CLK_APM_BASE + 12)
#define GATE_MAILBOX_GNSS2CHUB			(CLK_APM_BASE + 13)
#define GATE_MAILBOX_GNSS2CP			(CLK_APM_BASE + 14)
#define GATE_PEM				(CLK_APM_BASE + 15)
#define GATE_SPEEDY_APM				(CLK_APM_BASE + 16)
#define GATE_SPEEDY_SUB_APM			(CLK_APM_BASE + 17)
#define GATE_WDT_APM				(CLK_APM_BASE + 18)
#define UMUX_DLL				(CLK_APM_BASE + 19)
#define APM_DLL_CMGP				(CLK_APM_BASE + 20)
#define APM_DLL_VTS				(CLK_APM_BASE + 21)

/* NUMBER FOR BUSC DRIVER STARTS FROM 1000 */
#define CLK_BUSC_BASE				(1000)
#define GATE_PDMA0				(CLK_BUSC_BASE + 0)
#define GATE_PPFW				(CLK_BUSC_BASE + 1)
#define GATE_SBIC				(CLK_BUSC_BASE + 2)
#define GATE_SIREX				(CLK_BUSC_BASE + 3)
#define GATE_SPDMA				(CLK_BUSC_BASE + 4)
#define GATE_TREX_D_BUSC			(CLK_BUSC_BASE + 5)
#define GATE_TREX_P_BUSC			(CLK_BUSC_BASE + 6)
#define GATE_TREX_RB_BUSC			(CLK_BUSC_BASE + 7)

/* NUMBER FOR CORE DRIVER STARTS FROM 1000 */
#define CLK_CORE_BASE				(1050)
#define GATE_TREX_D_CORE			(CLK_CORE_BASE + 0)
#define GATE_TREX_P0_CORE			(CLK_CORE_BASE + 1)
#define GATE_TREX_P1_CORE			(CLK_CORE_BASE + 2)

/* NUMBER FOR BUS1 DRIVER STARTS FROM 1080 */
#define CLK_BUS1_BASE				(1080)
#define GATE_TREX_P_BUS1			(CLK_BUS1_BASE + 0)

/* NUMBER FOR DSPM DRIVER STARTS FROM 1100 */
#define CLK_DSPM_BASE				(1100)
#define GATE_CNN				(CLK_DSPM_BASE + 0)
#define GATE_SCORE_MASTER			(CLK_DSPM_BASE + 1)
#define GATE_SMMU_DSPM0				(CLK_DSPM_BASE + 2)
#define GATE_SMMU_DSPM1				(CLK_DSPM_BASE + 3)
#define GATE_SMMU_DSPM2				(CLK_DSPM_BASE + 4)
#define UMUX_CLKCMU_DSPM_BUS			(CLK_DSPM_BASE + 5)

/* NUMBER FOR DSPS DRIVER STARTS FROM 1110 */
#define CLK_DSPS_BASE				(1110)
#define GATE_SCORE_KNIGHT			(CLK_DSPS_BASE + 0)
#define UMUX_CLKCMU_DSPS_BUS			(CLK_DSPS_BASE + 1)
#define UMUX_CLKCMU_DSPS_AUD			(CLK_DSPS_BASE + 2)

/* NUMBER OF IVA DRIVER STARTS FROM 1120 */
#define CLK_IVA_BASE				(1120)
#define GATE_IVA				(CLK_IVA_BASE + 0)
#define GATE_IVA_DEBUG				(CLK_IVA_BASE + 1)
#define GATE_IVA_INTMEM				(CLK_IVA_BASE + 2)
#define GATE_SMMU_IVA				(CLK_IVA_BASE + 3)
#define GATE_TREX_RB_IVA			(CLK_IVA_BASE + 4)
#define UMUX_CLKCMU_IVA_BUS			(CLK_IVA_BASE + 5)

/* NUMBER OF VPU DRIVER STARTS FROM 1140 */
#define CLK_VPU_BASE				(1140)

/* NUMBER OF SRDZ DRIVER STARTS FROM 1160 */
#define CLK_SRDZ_BASE				(1160)

/* NUMBER FOR SYSMMU DRIVER STARTS FROM 1180 */
#define CLK_SYSMMU_BASE				(1180)

/* NUMBER OF DVFS DRIVER STARTS FROM 1200 */
#define CLK_DVFS_BASE				(1200)

/* must be greater than maximal clock id */
#define CLK_NR_CLKS				(1125 + 1)

#define ACPM_DVFS_MIF				(0x0B040000)
#define ACPM_DVFS_INT				(0x0B040001)
#define ACPM_DVFS_CPUCL0			(0x0B040002)
#define ACPM_DVFS_CPUCL1			(0x0B040003)
#define ACPM_DVFS_G3D				(0x0B040004)
#define ACPM_DVFS_INTCAM			(0x0B040005)
#define ACPM_DVFS_FSYS0				(0x0B040006)
#define ACPM_DVFS_CAM				(0x0B040007)
#define ACPM_DVFS_DISP				(0x0B040008)
#define ACPM_DVFS_AUD				(0x0B040009)
#define ACPM_DVFS_IVA				(0x0B04000A)
#define ACPM_DVFS_SCORE				(0x0B04000B)
#define ACPM_DVFS_CP				(0x0B04000C)

#define EWF_CMU_VTS				(31)
#define EWF_CMU_PERIS				(30)
#define EWF_CMU_PERIC1				(29)
#define EWF_CMU_PERIC0				(28)
#define EWF_CMU_MIF3				(27)
#define EWF_CMU_MIF2				(26)
#define EWF_CMU_MIF1				(25)
#define EWF_CMU_MIF0				(24)
#define EWF_CMU_MFC				(23)
#define EWF_CMU_IVA				(22)
#define EWF_CMU_ISPPRE				(21)
#define EWF_CMU_ISPLP				(20)
#define EWF_CMU_ISPHQ				(19)
#define EWF_CMU_G3D				(18)
#define EWF_CMU_G2D				(17)
#define EWF_CMU_FSYS1				(16)
#define EWF_CMU_FSYS0				(15)
#define EWF_CMU_DSPS				(14)
#define EWF_CMU_DSPM				(13)
#define EWF_CMU_DPU				(12)
#define EWF_CMU_DCRD				(11)
#define EWF_CMU_DCPOST				(10)
#define EWF_CMU_DCF				(9)
#define EWF_CMU_CPUCL1				(8)
#define EWF_CMU_CPUCL0				(7)
#define EWF_CMU_CORE				(6)
#define EWF_CMU_CMGP				(5)
#define EWF_CMU_CHUB				(4)
#define EWF_CMU_BUSC				(3)
#define EWF_CMU_BUS1				(2)
#define EWF_CMU_AUD				(1)
#define EWF_CMU_APM				(0)

#endif	/* _DT_BINDINGS_CLOCK_EXYNOS_9810_H */
