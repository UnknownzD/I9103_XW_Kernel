/*
 * arch/arm/mach-tegra/include/mach/gpio-n1.h
 *
 * Copyright (c) 2010 Samsung Electronics
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __MACH_TEGRA_GPIO_N1_H
#define __MACH_TEGRA_GPIO_N1_H

#include "../../gpio-names.h"

/*--------------------------------------
1. REV0.1 (system_rev = 1)
2. REV0.2 (system_rev = 2)
- changed
VOL_UP: GPIO_PQ1 (<- GPIO_PR0)
VOL_DOWN: GPIO_PQ2 (<- GPIO_PR1)
WLAN_EN: GPIO_PJ2 (<- GPIO_PQ2)
- added
MOVI_HW_RESET: GPIO_PK2

2. REV0.3 (system_rev = 3)
HOME KEY : GPIO_PK6 (<- GPIO_PX3)

3. REV0.4 (system_rev = 4)
FM_RST (AMOLED:PZ2, TFT:PW5)

4. REV0.7 (system_rev = 7)
CHG_EN : GPIO_PX0
CHG_ING_N : GPIO_PL0
TA_mCONNECTED : GPIO_PT0
--------------------------------------*/

#define GPIO_ALC_INT	TEGRA_GPIO_PO1
#define GPIO_MAG_I2C_SCL	TEGRA_GPIO_PO2
#define GPIO_CP_ON	TEGRA_GPIO_PO3
#define GPIO_MAG_I2C_SDA	TEGRA_GPIO_PO4
#define GPIO_IF_CON_SENSE	TEGRA_GPIO_PO6
#define GPIO_FUEL_I2C_SCL	TEGRA_GPIO_PO7
#define GPIO_FUEL_I2C_SDA	TEGRA_GPIO_PO0
#define GPIO_ALC_I2C_SCL	TEGRA_GPIO_PY0
#define GPIO_THERMAL_I2C_SCL	TEGRA_GPIO_PY1
#define GPIO_ALC_I2C_SDA	TEGRA_GPIO_PY2
#define GPIO_THERMAL_I2C_SDA	TEGRA_GPIO_PY3
#define GPIO_HSIC_EN	TEGRA_GPIO_PV0
#define GPIO_PDA_ACTIVE	TEGRA_GPIO_PV1
#define GPIO_PHONE_ACTIVE	TEGRA_GPIO_PV2
#define GPIO_EAR_SEND_END	TEGRA_GPIO_PV3
#define GPIO_GPS_NRST	TEGRA_GPIO_PB2
#define GPIO_MLCD_RST	TEGRA_GPIO_PC1
#define GPIO_CMC_I2C_SCL	TEGRA_GPIO_PC6
#define GPIO_GPS_EN	TEGRA_GPIO_PN6
#define GPIO_CMC_SLEEP	TEGRA_GPIO_PW0
#define GPIO_GPS_CNTL	TEGRA_GPIO_PV7
#define GPIO_CMC_I2C_SDA	TEGRA_GPIO_PZ3
#define GPIO_BT_nRST	TEGRA_GPIO_PW1
#define GPIO_CAM_VT_nRST	TEGRA_GPIO_PT4
#define GPIO_CAM_VT_nSTBY	TEGRA_GPIO_PD5
#define GPIO_JACK_nINT	TEGRA_GPIO_PL1
#define GPIO_CMC_LDO_EN1	TEGRA_GPIO_PL5
#define GPIO_NFC_FIRMWARE	TEGRA_GPIO_PL6
#define GPIO_CP_DUMP_INT	TEGRA_GPIO_PT2
#define GPIO_CAM_PMIC_EN2	TEGRA_GPIO_PT3
#define GPIO_CAM_MEGA_STBY	TEGRA_GPIO_PD6
#define GPIO_TSP_INT	TEGRA_GPIO_PD7
#define GPIO_USB_I2C_SCL	TEGRA_GPIO_PBB1
#define GPIO_CAM_I2C_SCL	TEGRA_GPIO_PBB2
#define GPIO_CAM_I2C_SDA	TEGRA_GPIO_PBB3
#define GPIO_USB_I2C_SDA	TEGRA_GPIO_PBB4
#define GPIO_CMC_BYPASS	TEGRA_GPIO_PBB5
#define GPIO_CAM_MEGA_nRST	TEGRA_GPIO_PD2
#define GPIO_GYRO_FIFO_INT	TEGRA_GPIO_PA0
#define GPIO_CMC_RST	TEGRA_GPIO_PJ6
#define GPIO_BT_EN	TEGRA_GPIO_PJ5
#define GPIO_EXT_WAKEUP	TEGRA_GPIO_PU5
#define GPIO_nTHRM_IRQ	TEGRA_GPIO_PU6
#define GPIO_GYRO_I2C_SCL	TEGRA_GPIO_PC4
#define GPIO_GYRO_I2C_SDA	TEGRA_GPIO_PC5
#define GPIO_FM_INT		TEGRA_GPIO_PR2
#define GPIO_FM_RST_04		TEGRA_GPIO_PW5
#define GPIO_FM_RST_05		TEGRA_GPIO_PK6
#define GPIO_FM_SCL_18V	TEGRA_GPIO_PR1
#define GPIO_FM_SDA_18V	TEGRA_GPIO_PR0
#define GPIO_LCD_LED_EN_SET	TEGRA_GPIO_PR3
#define GPIO_IPC_SLAVE_WAKEUP	TEGRA_GPIO_PR4
#define GPIO_VIBTONE_EN	TEGRA_GPIO_PR6
#define GPIO_VIBTONE_PWM	TEGRA_GPIO_PU3
#define GPIO_USB_OTG_EN	TEGRA_GPIO_PR7
#define GPIO_WLAN_HOST_WAKE	TEGRA_GPIO_PS0
#define GPIO_BT_WAKE	TEGRA_GPIO_PS1
#define GPIO_BT_HOST_WAKE	TEGRA_GPIO_PS2
#define GPIO_IPC_HOST_WAKEUP	TEGRA_GPIO_PQ0
#define GPIO_WLAN_EN	TEGRA_GPIO_PJ2
#define GPIO_VOL_UP	TEGRA_GPIO_PQ1
#define GPIO_VOL_DOWN	TEGRA_GPIO_PQ2
#define GPIO_CMC_SHDN	TEGRA_GPIO_PQ4
#define GPIO_ACTIVE_STATE_HSIC	TEGRA_GPIO_PQ5
#define GPIO_AK8975_INT		TEGRA_GPIO_PK4
#define GPIO_TA_CURRENT_SEL	TEGRA_GPIO_PK5
//#define GPIO_CMC_LDO_EN2	TEGRA_GPIO_PX0
#define GPIO_CAM_FLASH_SET	TEGRA_GPIO_PX2
#define GPIO_CAM_FLASH_EN	TEGRA_GPIO_PX3
#define GPIO_HOME_KEY	TEGRA_GPIO_PO5
#define GPIO_CODEC_LDO_EN	TEGRA_GPIO_PX5
#define GPIO_MICBIAS1_EN	TEGRA_GPIO_PX6
#define GPIO_UART_SEL	TEGRA_GPIO_PX7
#define GPIO_UART_SEL_EN	TEGRA_GPIO_PN7
#define GPIO_SUSPEND_REQUEST_HSIC	TEGRA_GPIO_PW2
#define GPIO_DET_3_5	TEGRA_GPIO_PW3
//#define GPIO_HDMI_I2C_SCL	TEGRA_GPIO_PD3
//#define GPIO_HDMI_I2C_SDA	TEGRA_GPIO_PD4
#define GPIO_FUEL_ALERT	TEGRA_GPIO_PI5
#define GPIO_LED_LDO_EN1	TEGRA_GPIO_PI7
//#define GPIO_MHL_I2C_SCL	TEGRA_GPIO_PJ0
//#define GPIO_MHL_I2C_SDA	TEGRA_GPIO_PK3
#define GPIO_COMPASS_INT	TEGRA_GPIO_PK4
#define GPIO_LED_LDO_EN2	TEGRA_GPIO_PL4
#define GPIO_LED_LDO_EN3	TEGRA_GPIO_PU2
#define GPIO_LED_LDO_EN4	TEGRA_GPIO_PU3
#define GPIO_HWREV3	TEGRA_GPIO_PG0
#define GPIO_LCD_ID1	TEGRA_GPIO_PG2
#define GPIO_CODEC_I2C_SDA	TEGRA_GPIO_PG3
#define GPIO_HDMI_LDO_EN	TEGRA_GPIO_PH2
#define GPIO_MICBIAS2_EN	TEGRA_GPIO_PH3
#define GPIO_HWREV0	TEGRA_GPIO_PB1
#define GPIO_HWREV1	TEGRA_GPIO_PK7
#define GPIO_HWREV2 TEGRA_GPIO_PU4
#define GPIO_HWREV3 TEGRA_GPIO_PG0
#define GPIO_CODEC_I2C_SCL	TEGRA_GPIO_PI0
#define GPIO_EAR_SEL	TEGRA_GPIO_PI4
#define GPIO_VIBTONE_I2C_SCL	TEGRA_GPIO_PT5
#define GPIO_VIBTONE_I2C_SDA	TEGRA_GPIO_PT6
//#define GPIO_NFC_IRQ	TEGRA_GPIO_PC7
#define GPIO_CAMPMIC_SCL_18V	TEGRA_GPIO_PL6
#define GPIO_CAMPMIC_SDA_18V	TEGRA_GPIO_PL7
#define GPIO_CHG_EN		TEGRA_GPIO_PX0
#define GPIO_CHG_ING_N		TEGRA_GPIO_PC7
#define GPIO_TA_nCONNECTED		TEGRA_GPIO_PT0
#endif