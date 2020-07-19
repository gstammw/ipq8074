/*
 * Copyright (c) 2015, The Linux Foundation. All rights reserved.
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all copies.
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT
 * OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */



#ifndef _DESS_PSGMII_H_
#define _DESS_PSGMII_H_

#ifdef __cplusplus
extern "C" {
#endif                          /* __cplusplus */

/*PSGMII Registers*/
#define PSGMIIPHY_MODECFG_1   0xcc
#define PSGMIIPHY_PHY_INTERFACE  0x10C
#define PSGMIIPHY_EEE_CH0_1		0x168
#define PSGMIIPHY_EEE_CH0_2		0x16C
#define PSGMIIPHY_EEE_CH0_3		0x170
#define PSGMIIPHY_EEE_CH0_4		0x174
#define PSGMIIPHY_EEE_CH0_5		0x178
#define PSGMIIPHY_EEE_CH0_6		0x17C
#define PSGMIIPHY_EEE_CH0_7		0x180
#define PSGMIIPHY_EEE_CH1_1		0x184
#define PSGMIIPHY_EEE_CH1_2		0x188
#define PSGMIIPHY_EEE_CH1_3		0x18C
#define PSGMIIPHY_EEE_CH2_1		0x190
#define PSGMIIPHY_EEE_CH2_2		0x194
#define PSGMIIPHY_EEE_CH2_3		0x198
#define PSGMIIPHY_EEE_CH3_1		0x19C
#define PSGMIIPHY_EEE_CH3_2		0x1A0
#define PSGMIIPHY_EEE_CH3_3		0x1A4
#define PSGMIIPHY_EEE_CH4_1		0x1A8
#define PSGMIIPHY_EEE_CH4_2		0x1AC
#define PSGMIIPHY_EEE_CH4_3		0x1B0

#define PSGMIIPHY_MODE_CONTROL          0x1b4
#define PSGMIIPHY_FIFO                        0x1b8

#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_1	0x1BC
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_4	0x1C8
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_5	0x1CC
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_4	0x1e0
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_5	0x1e4
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_4	0x1f8
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_5	0x1fC
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_4	0x210
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_5	0x214
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_4	0x228
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_5	0x22C

#define PSGMIIPHY_CHANNEL0TXSTATE			0x248
#define PSGMIIPHY_CHANNEL0RXSTATES			0x24c
#define PSGMIIPHY_CHANNEL1TXSTATE			0x250
#define PSGMIIPHY_CHANNEL1RXSTATES			0x254
#define PSGMIIPHY_CHANNEL2TXSTATE			0x258
#define PSGMIIPHY_CHANNEL2RXSTATES			0x25c
#define PSGMIIPHY_CHANNEL3TXSTATE			0x260
#define PSGMIIPHY_CHANNEL3RXSTATES			0x264
#define PSGMIIPHY_CHANNEL4TXSTATE			0x268
#define PSGMIIPHY_CHANNEL4RXSTATES			0x26c

/* PSGMII Registers Field*/

/*PSGMIIPHY_EEE_CH0_1 register field*/
#define PSGMIIPHY_EEE_DIS_LPI 0x2
#define PSGMIIPHY_EEE_EN_LPI 0x1

/*PSGMIIPHY_MODE_CONTROL register field*/
#define PSGMIIPHY_MODE_SW_V17_V18 0x8000
/* Interface Mode, bits 12:14 */
#define PSGMIIPHY_MODE_CH0_MODE_1000BASEX      0x0000
#define PSGMIIPHY_MODE_CH0_MODE_PSGMII_PHY      0x1000
#define PSGMIIPHY_MODE_CH0_MODE_PSGMII_MAC      0x2000
#define PSGMIIPHY_MODE_CH0_PSGMII_QSGMII 0x200
#define PSGMIIPHY_MODE_CH0_QSGMII_SGMII 0x100
#define PSGMIIPHY_MODE_SGMII_EVEN_LOW 0x0008
#define PSGMIIPHY_MODE_CH4_CH1_0_SGMII 0x0004
#define PSGMIIPHY_MODE_CH1_CH0_SGMII 0x0002
#define PSGMIIPHY_MODE_CH0_ATHR_CSCO_MODE_25M 0x0001

/*CHANNEL_0_INPUT_OUTPUT_1 register field*/
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_1_MR_AN_COMPLETE 0x800

/*CHANNEL_0_INPUT_OUTPUT_4 register field*/
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_4_POWER_ON_25M 0x400
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_4_MR_MAIN_RESET_25M 0x200
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_4_MR_MR_LOOPBACK_25M 0x100
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_4_MR_RESTART_AN_25M 0x80
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_4_MR_AN_ENABLE_25M 0x40
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_4_MR_MR_REG4_CH_25M 0x20
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_4_MR_MR_NP_LOADED_25M 0x10
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_4_FORCE_SPEED_25M 0x08
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_4_SPEED_25M_10M 0x02
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_4_SPEED_25M_100M 0x04
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_4_SPEED_25M_1000M 0x06
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_4_REM_PHY_LPBK 0x00

/*CHANNEL_0_INPUT_OUTPUT_5 register field*/
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_5_FULL_DUPLEX_25M 0x800
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_5_HALF_DUPLEX_25M 0x400
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_5_REMOTE_FAULT_25M 0x300
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_5_LINK_25M 0x80
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_5_DUPLEX_MODE_25M 0x40
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_5_SPEED_MODE_25M 0x30
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_5_PAUSE_SG_TX_EN_25M 0x08
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_5_NEXT_PAGE_25M 0x04
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_5_PAUSE_25M 0x02
#define PSGMIIPHY_CHANNEL_0_INPUT_OUTPUT_5_ASYM_PAUSE_25M 0x01

/*CHANNEL_1_INPUT_OUTPUT_4 register field*/
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_4_POWER_ON_25M 0x400
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_4_MR_MAIN_RESET_25M 0x200
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_4_MR_MR_LOOPBACK_25M 0x100
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_4_MR_RESTART_AN_25M 0x80
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_4_MR_AN_ENABLE_25M 0x40
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_4_MR_MR_REG4_CH_25M 0x20
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_4_MR_MR_NP_LOADED_25M 0x10
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_4_FORCE_SPEED_25M 0x08
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_4_SPEED_25M_10M 0x02
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_4_SPEED_25M_100M 0x04
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_4_SPEED_25M_1000M 0x06
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_4_REM_PHY_LPBK 0x00

/*CHANNEL_1_INPUT_OUTPUT_5 register field*/
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_5_FULL_DUPLEX_25M 0x800
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_5_HALF_DUPLEX_25M 0x400
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_5_REMOTE_FAULT_25M 0x300
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_5_LINK_25M 0x80
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_5_DUPLEX_MODE_25M 0x40
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_5_SPEED_MODE_25M 0x30
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_5_PAUSE_SG_TX_EN_25M 0x08
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_5_NEXT_PAGE_25M 0x04
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_5_PAUSE_25M 0x02
#define PSGMIIPHY_CHANNEL_1_INPUT_OUTPUT_5_ASYM_PAUSE_25M 0x01

/*CHANNEL_2_INPUT_OUTPUT_4 register field*/
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_4_POWER_ON_25M 0x400
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_4_MR_MAIN_RESET_25M 0x200
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_4_MR_MR_LOOPBACK_25M 0x100
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_4_MR_RESTART_AN_25M 0x80
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_4_MR_AN_ENABLE_25M 0x40
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_4_MR_MR_REG4_CH_25M 0x20
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_4_MR_MR_NP_LOADED_25M 0x10
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_4_FORCE_SPEED_25M 0x08
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_4_SPEED_25M_10M 0x02
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_4_SPEED_25M_100M 0x04
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_4_SPEED_25M_1000M 0x06
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_4_REM_PHY_LPBK 0x00

/*CHANNEL_2_INPUT_OUTPUT_5 register field*/
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_5_FULL_DUPLEX_25M 0x800
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_5_HALF_DUPLEX_25M 0x400
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_5_REMOTE_FAULT_25M 0x300
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_5_LINK_25M 0x80
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_5_DUPLEX_MODE_25M 0x40
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_5_SPEED_MODE_25M 0x30
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_5_PAUSE_SG_TX_EN_25M 0x08
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_5_NEXT_PAGE_25M 0x04
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_5_PAUSE_25M 0x02
#define PSGMIIPHY_CHANNEL_2_INPUT_OUTPUT_5_ASYM_PAUSE_25M 0x01

/*CHANNEL_3_INPUT_OUTPUT_4 register field*/
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_4_POWER_ON_25M 0x400
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_4_MR_MAIN_RESET_25M 0x200
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_4_MR_MR_LOOPBACK_25M 0x100
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_4_MR_RESTART_AN_25M 0x80
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_4_MR_AN_ENABLE_25M 0x40
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_4_MR_MR_REG4_CH_25M 0x20
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_4_MR_MR_NP_LOADED_25M 0x10
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_4_FORCE_SPEED_25M 0x08

#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_4_SPEED_25M_MASK 0x06
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_4_SPEED_25M_10M 0x0
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_4_SPEED_25M_100M 0x02
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_4_SPEED_25M_1000M 0x04
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_4_REM_PHY_LPBK 0x00

/*CHANNEL_3_INPUT_OUTPUT_5 register field*/
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_5_FULL_DUPLEX_25M 0x800
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_5_HALF_DUPLEX_25M 0x400
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_5_REMOTE_FAULT_25M 0x300
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_5_LINK_25M 0x80
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_5_DUPLEX_MODE_25M 0x40
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_5_SPEED_MODE_25M 0x30
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_5_SPEED_25M_10M 0x00
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_5_SPEED_25M_100M 0x10
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_5_SPEED_25M_1000M 0x20
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_5_PAUSE_SG_TX_EN_25M 0x08
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_5_NEXT_PAGE_25M 0x04
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_5_PAUSE_25M 0x02
#define PSGMIIPHY_CHANNEL_3_INPUT_OUTPUT_5_ASYM_PAUSE_25M 0x01

/*CHANNEL_4_INPUT_OUTPUT_4 register field*/
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_4_POWER_ON_25M 0x400
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_4_MR_MAIN_RESET_25M 0x200
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_4_MR_MR_LOOPBACK_25M 0x100
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_4_MR_RESTART_AN_25M 0x80
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_4_MR_AN_ENABLE_25M 0x40
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_4_MR_MR_REG4_CH_25M 0x20
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_4_MR_MR_NP_LOADED_25M 0x10
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_4_FORCE_SPEED_25M 0x08
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_4_SPEED_25M_10M 0x02
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_4_SPEED_25M_100M 0x04
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_4_SPEED_25M_1000M 0x06
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_4_REM_PHY_LPBK 0x00

/*CHANNEL_4_INPUT_OUTPUT_5 register field*/
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_5_FULL_DUPLEX_25M 0x800
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_5_HALF_DUPLEX_25M 0x400
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_5_REMOTE_FAULT_25M 0x300
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_5_LINK_25M 0x80
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_5_DUPLEX_MODE_25M 0x40
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_5_SPEED_MODE_25M 0x30
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_5_PAUSE_SG_TX_EN_25M 0x08
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_5_NEXT_PAGE_25M 0x04
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_5_PAUSE_25M 0x02
#define PSGMIIPHY_CHANNEL_4_INPUT_OUTPUT_5_ASYM_PAUSE_25M 0x01

typedef enum {
        PSGMII_MAC_MODE_PSGMII = 0,
        PSGMII_MAC_MODE_QSGMII,
        PSGMII_MAC_MODE_SGMII,
        PSGMII_MAC_MODE_DEFAULT
}psgmii_interface_mac_mode_t;

    sw_error_t
    dess_psgmii_reg_get(a_uint32_t dev_id, a_uint32_t reg_addr, a_uint8_t value[],
             a_uint32_t value_len);

    sw_error_t
    dess_psgmii_reg_set(a_uint32_t dev_id, a_uint32_t reg_addr, a_uint8_t value[],
             a_uint32_t value_len);

    sw_error_t
    dess_psgmii_set_lpi(a_uint32_t dev_id, a_uint32_t phy_id, a_bool_t enable);

    sw_error_t
    dess_psgmii_get_lpi(a_uint32_t dev_id, a_uint32_t phy_id, a_bool_t *enable);

    sw_error_t
    dess_psgmii_set_interface_type(a_uint32_t dev_id, a_uint32_t phy_id,
										psgmii_interface_mac_mode_t mode);

    sw_error_t
    dess_psgmii_get_interface_type(a_uint32_t dev_id, a_uint32_t * phy_id,
										psgmii_interface_mac_mode_t * mode);

    a_bool_t
    dess_psgmii_autoneg_done(a_uint32_t dev_id, a_uint32_t phy_id);

    sw_error_t
    dess_psgmii_reset(a_uint32_t dev_id, a_uint32_t phy_id);

    sw_error_t
    dess_psgmii_poweroff(a_uint32_t dev_id, a_uint32_t phy_id);

    sw_error_t
    dess_psgmii_poweron(a_uint32_t dev_id, a_uint32_t phy_id);

    a_bool_t
    dess_psgmii_get_link_status(a_uint32_t dev_id, a_uint32_t phy_id);

    sw_error_t
    dess_psgmii_set_loopback(a_uint32_t dev_id, a_uint32_t phy_id,
                           a_bool_t enable);

    sw_error_t
    dess_psgmii_get_loopback(a_uint32_t dev_id, a_uint32_t phy_id,
                           a_bool_t * enable);

    a_bool_t dess_psgmii_autoneg_status(a_uint32_t dev_id, a_uint32_t phy_id);

    sw_error_t
    dess_psgmii_restart_autoneg(a_uint32_t dev_id, a_uint32_t phy_id);

    sw_error_t
    dess_psgmii_enable_autoneg(a_uint32_t dev_id, a_uint32_t phy_id);

    sw_error_t
    dess_psgmii_set_duplex(a_uint32_t dev_id, a_uint32_t phy_id,
                      fal_port_duplex_t duplex);

    sw_error_t
    dess_psgmii_get_duplex(a_uint32_t dev_id, a_uint32_t phy_id,
                      fal_port_duplex_t * duplex);

    sw_error_t
    dess_psgmii_set_speed(a_uint32_t dev_id, a_uint32_t phy_id,
                     fal_port_speed_t speed);

    sw_error_t
    dess_psgmii_get_speed(a_uint32_t dev_id, a_uint32_t phy_id,
                     fal_port_speed_t * speed);


#ifdef __cplusplus
}
#endif                          /* __cplusplus */
#endif                          /* _DESS_PSGMII_H_ */