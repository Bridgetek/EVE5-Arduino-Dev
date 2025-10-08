/**
 * @file BridgetekEVE5.h
 * @brief Support BT820
 */
/*
 * ============================================================================
 * (C) Copyright,  Bridgetek Pte. Ltd.
 * ============================================================================
 *
 * This source code ("the Software") is provided by Bridgetek Pte Ltd
 * ("Bridgetek") subject to the licence terms set out
 * http://www.ftdichip.com/FTSourceCodeLicenceTerms.htm ("the Licence Terms").
 * You must read the Licence Terms before downloading or using the Software.
 * By installing or using the Software you agree to the Licence Terms. If you
 * do not agree to the Licence Terms then do not download or use the Software.
 *
 * Without prejudice to the Licence Terms, here is a summary of some of the key
 * terms of the Licence Terms (and in the event of any conflict between this
 * summary and the Licence Terms then the text of the Licence Terms will
 * prevail).
 *
 * The Software is provided "as is".
 * There are no warranties (or similar) in relation to the quality of the
 * Software. You use it at your own risk.
 * The Software should not be used in, or for, any medical device, system or
 * appliance. There are exclusions of Bridgetek liability for certain types of loss
 * such as: special loss or damage; incidental loss or damage; indirect or
 * consequential loss or damage; loss of income; loss of business; loss of
 * profits; loss of revenue; loss of contracts; business interruption; loss of
 * the use of money or anticipated savings; loss of information; loss of
 * opportunity; loss of goodwill or reputation; and/or loss of, damage to or
 * corruption of data.
 * There is a monetary cap on Bridgetek's liability.
 * The Software may have subsequently been amended by another user and then
 * distributed by that other user ("Adapted Software").  If so that user may
 * have additional licence terms that apply to those amendments. However, Bridgetek
 * has no liability in relation to those amendments.
 * ============================================================================
 */

#ifndef _BTEVE_H_
#define _BTEVE_H_

#include <stdint.h> // for Uint8/16/32 and Int8/16/32 data types
#include <stdarg.h>

#include "Arduino.h"

/* Clash with Arduino API */
#undef DISPLAY

#define EVE_API 5
#define EVE_SUB_API

//@{
/** @brief Library Includes
 * It will be possible to make a library with these files.
 * Include EVE.h (which is the API as a C++ file which is part of this class.
 * Include HAL and MCU files as "C" files.
 */
//@{
extern "C" {
#include <EVE.h>
#include <HAL.h>
#include <MCU.h>
}
//@}

class BridgetekEVE5
{
  public:
    BridgetekEVE5(void);

  void setup(uint32_t panel);
  void setup(uint32_t panel, uint32_t ramg);

  public:
    const uint32_t ADC_DIFFERENTIAL = 0x1ul;
    const uint32_t ADC_SINGLE_ENDED = 0x0ul;
    const uint32_t ALPHA = 0x5ul;
    const uint32_t ANIM_HOLD = 0x2ul;
    const uint32_t ANIM_LOOP = 0x1ul;
    const uint32_t ANIM_ONCE = 0x0ul;
    const uint32_t API = 5;
    const uint32_t BEGIN_BITMAPS = 0x1ul;
    const uint32_t BEGIN_EDGE_STRIP_A = 0x7ul;
    const uint32_t BEGIN_EDGE_STRIP_B = 0x8ul;
    const uint32_t BEGIN_EDGE_STRIP_L = 0x6ul;
    const uint32_t BEGIN_EDGE_STRIP_R = 0x5ul;
    const uint32_t BEGIN_LINES = 0x3ul;
    const uint32_t BEGIN_LINE_STRIP = 0x4ul;
    const uint32_t BEGIN_POINTS = 0x2ul;
    const uint32_t BEGIN_RECTS = 0x9ul;
    const uint32_t BLEND_DST_ALPHA = 0x3ul;
    const uint32_t BLEND_ONE = 0x1ul;
    const uint32_t BLEND_ONE_MINUS_DST_ALPHA = 0x5ul;
    const uint32_t BLEND_ONE_MINUS_SRC_ALPHA = 0x4ul;
    const uint32_t BLEND_SRC_ALPHA = 0x2ul;
    const uint32_t BLEND_ZERO = 0x0ul;
    const uint32_t BLUE = 0x4ul;
    const uint32_t CGRADIENT_CORNER_ZERO = 0x0ul;
    const uint32_t CGRADIENT_EDGE_ZERO = 0x1ul;
    const uint32_t COPROC_REPORT = 0x7f004800ul;
    const uint32_t CTOUCHMODE_COMPATIBILITY = 0x1ul;
    const uint32_t CTOUCHMODE_EXTENDED = 0x0ul;
    const uint32_t DLSWAP_DONE = 0x0ul;
    const uint32_t DLSWAP_FRAME = 0x2ul;
    const uint32_t FILTER_BILINEAR = 0x1ul;
    const uint32_t FILTER_NEAREST = 0x0ul;
    const uint32_t FLASH_STATUS_BASIC = 0x2ul;
    const uint32_t FLASH_STATUS_DETACHED = 0x1ul;
    const uint32_t FLASH_STATUS_FULL = 0x3ul;
    const uint32_t FLASH_STATUS_INIT = 0x0ul;
    const uint32_t FORMAT_ARGB1555 = 0x0ul;
    const uint32_t FORMAT_ARGB2 = 0x5ul;
    const uint32_t FORMAT_ARGB4 = 0x6ul;
    const uint32_t FORMAT_ARGB6 = 0x17ul;
    const uint32_t FORMAT_ARGB8 = 0x14ul;
    const uint32_t FORMAT_BARGRAPH = 0xbul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_10x10_KHR = 0x93bbul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_10x5_KHR = 0x93b8ul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_10x6_KHR = 0x93b9ul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_10x8_KHR = 0x93baul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_12x10_KHR = 0x93bcul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_12x12_KHR = 0x93bdul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_4x4_KHR = 0x93b0ul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_5x4_KHR = 0x93b1ul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_5x5_KHR = 0x93b2ul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_6x5_KHR = 0x93b3ul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_6x6_KHR = 0x93b4ul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_8x5_KHR = 0x93b5ul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_8x6_KHR = 0x93b6ul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_8x8_KHR = 0x93b7ul;
    const uint32_t FORMAT_L1 = 0x1ul;
    const uint32_t FORMAT_L2 = 0x11ul;
    const uint32_t FORMAT_L4 = 0x2ul;
    const uint32_t FORMAT_L8 = 0x3ul;
    const uint32_t FORMAT_LA1 = 0x18ul;
    const uint32_t FORMAT_LA2 = 0x19ul;
    const uint32_t FORMAT_LA4 = 0x1aul;
    const uint32_t FORMAT_LA8 = 0x1bul;
    const uint32_t FORMAT_PALETTED = 0x8ul;
    const uint32_t FORMAT_PALETTED4444 = 0xful;
    const uint32_t FORMAT_PALETTED565 = 0xeul;
    const uint32_t FORMAT_PALETTED8 = 0x10ul;
    const uint32_t FORMAT_PALETTEDARGB8 = 0x15ul;
    const uint32_t FORMAT_RGB332 = 0x4ul;
    const uint32_t FORMAT_RGB565 = 0x7ul;
    const uint32_t FORMAT_RGB6 = 0x16ul;
    const uint32_t FORMAT_RGB8 = 0x13ul;
    const uint32_t FORMAT_TEXT8X8 = 0x9ul;
    const uint32_t FORMAT_TEXTVGA = 0xaul;
    const uint32_t FORMAT_YCBCR = 0x1cul;
    const uint32_t GLFORMAT = 0x1ful;
    const uint32_t GREEN = 0x3ul;
    const uint32_t INT_CMDEMPTY = 0x20ul;
    const uint32_t INT_CMDFLAG = 0x40ul;
    const uint32_t INT_CONVCOMPLETE = 0x80ul;
    const uint32_t INT_G8 = 0x12ul;
    const uint32_t INT_L8C = 0xcul;
    const uint32_t INT_PLAYBACK = 0x10ul;
    const uint32_t INT_SOUND = 0x8ul;
    const uint32_t INT_SWAP = 0x1ul;
    const uint32_t INT_TAG = 0x4ul;
    const uint32_t INT_TOUCH = 0x2ul;
    const uint32_t INT_VGA = 0xdul;
    const uint32_t OPT_1BIT = 0x0ul;
    const uint32_t OPT_3D = 0x0ul;
    const uint32_t OPT_CENTER = 0x600ul;
    const uint32_t OPT_CENTERX = 0x200ul;
    const uint32_t OPT_CENTERY = 0x400ul;
    const uint32_t OPT_FILL = 0x2000ul;
    const uint32_t OPT_FLASH = 0x40ul;
    const uint32_t OPT_FLAT = 0x100ul;
    const uint32_t OPT_FORMAT = 0x1000ul;
    const uint32_t OPT_FULLSCREEN = 0x8ul;
    const uint32_t OPT_FULLSPEED = 0x0ul;
    const uint32_t OPT_MEDIAFIFO = 0x10ul;
    const uint32_t OPT_MONO = 0x1ul;
    const uint32_t OPT_NOBACK = 0x1000ul;
    const uint32_t OPT_NODL = 0x2ul;
    const uint32_t OPT_NOHANDS = 0xc000ul;
    const uint32_t OPT_NOHM = 0x4000ul;
    const uint32_t OPT_NOPOINTER = 0x4000ul;
    const uint32_t OPT_NOSECS = 0x8000ul;
    const uint32_t OPT_NOTEAR = 0x4ul;
    const uint32_t OPT_NOTICKS = 0x2000ul;
    const uint32_t OPT_OVERLAY = 0x80ul;
    const uint32_t OPT_RGB565 = 0x0ul;
    const uint32_t OPT_RIGHTX = 0x800ul;
    const uint32_t OPT_SIGNED = 0x100ul;
    const uint32_t OPT_SOUND = 0x20ul;
    const uint32_t OPT_TOUCH_100KHZ = 0x800ul;
    const uint32_t OPT_TOUCH_400KHZ = 0x0ul;
    const uint32_t OPT_TOUCH_AR1021 = 0x3ul;
    const uint32_t OPT_TOUCH_FOCALTECH = 0x1ul;
    const uint32_t OPT_TOUCH_GOODIX = 0x2ul;
    const uint32_t OPT_TOUCH_ILI2511 = 0x4ul;
    const uint32_t OPT_TOUCH_QUICKSIM = 0x8000ul;
    const uint32_t OPT_TOUCH_TSC2007 = 0x5ul;
    const uint32_t RAM_BIST = 0x7f8001c0ul;
    const uint32_t RAM_CMD = 0x7f000000ul;
    const uint32_t RAM_CMD_SIZE = (16*1024L);
    const uint32_t RAM_DL = 0x7f008000ul;
    const uint32_t RAM_DL_SIZE = (16*1024L);
    const uint32_t RAM_G = 0x0ul;
    const uint32_t RAM_G_128_MBIT = 0x400000UL;
    const uint32_t RAM_G_1_GBIT = 0x8000000UL;
    const uint32_t RAM_G_256_MBIT = 0x800000UL;
    const uint32_t RAM_G_2_GBIT = 0x10000000UL;
    const uint32_t RAM_G_32_MBIT = 0x100000UL;
    const uint32_t RAM_G_4_GBIT = 0x20000000UL;
    const uint32_t RAM_G_512_MBIT = 0x4000000UL;
    const uint32_t RAM_G_64_MBIT = 0x200000UL;
    const uint32_t RAM_G_8_GBIT = 0x40000000UL;
    const uint32_t RAM_G_SIZE = EVE_RAM_G_CONFIG_SIZE;
    const uint32_t RAM_REG = 0x7f006000ul;
    const uint32_t RAM_REPORT = 0x00309800ul;
    const uint32_t RAM_ROMSUB = 0x7f027800ul;
    const uint32_t RAM_TOP = 0x00304000ul;
    const uint32_t RED = 0x2ul;
    const uint32_t REG_ANIM_ACTIVE = 0x7f00402cul;
    const uint32_t REG_BOOT_CONTROL = 0x7f006628ul;
    const uint32_t REG_BOOT_STATUS = 0x7f80044Cul;
    const uint32_t REG_CHIP_ID = 0x7f800448ul;
    const uint32_t REG_CLOCK = 0x7f006008ul;
    const uint32_t REG_CMDB_SPACE = 0x7f006594ul;
    const uint32_t REG_CMDB_WRITE = 0x7f010000ul;
    const uint32_t REG_CMD_DL = 0x7f006154ul;
    const uint32_t REG_CMD_READ = 0x7f00614cul;
    const uint32_t REG_CMD_WRITE = 0x7f006150ul;
    const uint32_t REG_CPURESET = 0x7f006088ul;
    const uint32_t REG_CTOUCH_EXTENDED = 0x7f00615cul;
    const uint32_t REG_CTOUCH_TOUCH0_XY = 0x7f006160ul;
    const uint32_t REG_CTOUCH_TOUCH4_XY = 0x7f006170ul;
    const uint32_t REG_CTOUCH_TOUCHA_XY = 0x7f006164ul;
    const uint32_t REG_CTOUCH_TOUCHB_XY = 0x7f006168ul;
    const uint32_t REG_CTOUCH_TOUCHC_XY = 0x7f00616cul;
    const uint32_t REG_DDR_TYPE = 0x7f800454ul;
    const uint32_t REG_DISP = 0x7f0060e4ul;
    const uint32_t REG_DLSWAP = 0x7f0060b4ul;
    const uint32_t REG_EXTENT_X0 = 0x7f00403cul;
    const uint32_t REG_EXTENT_X1 = 0x7f004044ul;
    const uint32_t REG_EXTENT_Y0 = 0x7f004040ul;
    const uint32_t REG_EXTENT_Y1 = 0x7f004048ul;
    const uint32_t REG_FLASH_DTR = 0x7f0065ecul;
    const uint32_t REG_FLASH_SIZE = 0x7f004024ul;
    const uint32_t REG_FLASH_STATUS = 0x7f0065d4ul;
    const uint32_t REG_FRAMES = 0x7f006004ul;
    const uint32_t REG_FREQUENCY = 0x7f00600cul;
    const uint32_t REG_FREQUENCY_A = 0x7f00671cul;
    const uint32_t REG_GPIO = 0x7f0060e0ul;
    const uint32_t REG_GPIO_DIR = 0x7f0060dcul;
    const uint32_t REG_HCYCLE = 0x7f00608cul;
    const uint32_t REG_HOFFSET = 0x7f006090ul;
    const uint32_t REG_HSIZE = 0x7f006094ul;
    const uint32_t REG_HSYNC0 = 0x7f006098ul;
    const uint32_t REG_HSYNC1 = 0x7f00609cul;
    const uint32_t REG_I2S_CFG = 0x7f800800ul;
    const uint32_t REG_I2S_CTL = 0x7f800804ul;
    const uint32_t REG_I2S_EN = 0x7f006714ul;
    const uint32_t REG_I2S_FREQ = 0x7f006718ul;
    const uint32_t REG_I2S_PAD_CFG = 0x7f800814ul;
    const uint32_t REG_I2S_STAT = 0x7f800810ul;
    const uint32_t REG_ID = 0x7f006000ul;
    const uint32_t REG_INT_EN = 0x7f006104ul;
    const uint32_t REG_INT_FLAGS = 0x7f006100ul;
    const uint32_t REG_INT_MASK = 0x7f006108ul;
    const uint32_t REG_LVDSRX_CORE_CAPTURE = 0x7f006674ul;
    const uint32_t REG_LVDSRX_CORE_DEST = 0x7f00667cul;
    const uint32_t REG_LVDSRX_CORE_DITHER = 0x7f006684ul;
    const uint32_t REG_LVDSRX_CORE_ENABLE = 0x7f006670ul;
    const uint32_t REG_LVDSRX_CORE_FORMAT = 0x7f006680ul;
    const uint32_t REG_LVDSRX_CORE_FRAMES = 0x7f006698ul;
    const uint32_t REG_LVDSRX_CORE_SETUP = 0x7f006678ul;
    const uint32_t REG_LVDSRX_CTRL = 0x7F800504ul;
    const uint32_t REG_LVDSRX_SETUP = 0x7F800500ul;
    const uint32_t REG_LVDSRX_STAT = 0x7F800508ul;
    const uint32_t REG_LVDSTX_CTRL_CH0 = 0x7f800314ul;
    const uint32_t REG_LVDSTX_CTRL_CH1 = 0x7f800318ul;
    const uint32_t REG_LVDSTX_EN = 0x7f800300ul;
    const uint32_t REG_LVDSTX_ERR_STAT = 0x7f800320ul;
    const uint32_t REG_LVDSTX_PLLCFG = 0x7f800304ul;
    const uint32_t REG_LVDSTX_STAT = 0x7f80031cul;
    const uint32_t REG_MACRO_0 = 0x7f006130ul;
    const uint32_t REG_MACRO_1 = 0x7f006134ul;
    const uint32_t REG_MEDIAFIFO_READ = 0x7f004014ul;
    const uint32_t REG_MEDIAFIFO_WRITE = 0x7f004018ul;
    const uint32_t REG_OBJECT_COMPLETE = 0x7f004038ul;
    const uint32_t REG_PCLK_POL = 0x7f0060b8ul;
    const uint32_t REG_PIN_DRV_0 = 0x7f800408ul;
    const uint32_t REG_PIN_DRV_1 = 0x7f80040Cul;
    const uint32_t REG_PIN_DRV_2 = 0x7f800464ul;
    const uint32_t REG_PIN_SLEW_0 = 0x7f800410ul;
    const uint32_t REG_PIN_SLEW_1 = 0x7f800468ul;
    const uint32_t REG_PIN_TYPE_0 = 0x7f800414ul;
    const uint32_t REG_PIN_TYPE_1 = 0x7f800418ul;
    const uint32_t REG_PIN_TYPE_2 = 0x7f80046Cul;
    const uint32_t REG_PLAY = 0x7f0060d8ul;
    const uint32_t REG_PLAYBACK_FORMAT = 0x7f00611cul;
    const uint32_t REG_PLAYBACK_FREQ = 0x7f006118ul;
    const uint32_t REG_PLAYBACK_LENGTH = 0x7f006110ul;
    const uint32_t REG_PLAYBACK_LOOP = 0x7f006120ul;
    const uint32_t REG_PLAYBACK_PAUSE = 0x7f0065d0ul;
    const uint32_t REG_PLAYBACK_PLAY = 0x7f006124ul;
    const uint32_t REG_PLAYBACK_READPTR = 0x7f006114ul;
    const uint32_t REG_PLAYBACK_START = 0x7f00610cul;
    const uint32_t REG_PLAY_CONTROL = 0x7f004050ul;
    const uint32_t REG_PWM_DUTY = 0x7f00612cul;
    const uint32_t REG_PWM_HZ = 0x7f006128ul;
    const uint32_t REG_RE_ACTIVE = 0x7f006028ul;
    const uint32_t REG_RE_DEST = 0x7f006010ul;
    const uint32_t REG_RE_DITHER = 0x7f006024ul;
    const uint32_t REG_RE_FORMAT = 0x7f006014ul;
    const uint32_t REG_RE_H = 0x7f006020ul;
    const uint32_t REG_RE_RENDERS = 0x7f00602cul;
    const uint32_t REG_RE_ROTATE = 0x7f006018ul;
    const uint32_t REG_RE_TESTMODE = 0x7f006030ul;
    const uint32_t REG_RE_W = 0x7f00601cul;
    const uint32_t REG_SC0_PTR0 = 0x7f00603cul;
    const uint32_t REG_SC0_PTR1 = 0x7f006040ul;
    const uint32_t REG_SC0_PTR2 = 0x7f006044ul;
    const uint32_t REG_SC0_PTR3 = 0x7f006048ul;
    const uint32_t REG_SC0_RESET = 0x7f006034ul;
    const uint32_t REG_SC0_SIZE = 0x7f006038ul;
    const uint32_t REG_SC1_I_PTR = 0x7f006084ul;
    const uint32_t REG_SC1_I_READY = 0x7f006080ul;
    const uint32_t REG_SC1_I_VALID = 0x7f00607cul;
    const uint32_t REG_SC1_PTR0 = 0x7f006054ul;
    const uint32_t REG_SC1_PTR1 = 0x7f006058ul;
    const uint32_t REG_SC1_PTR2 = 0x7f00605cul;
    const uint32_t REG_SC1_PTR3 = 0x7f006060ul;
    const uint32_t REG_SC1_RESET = 0x7f00604cul;
    const uint32_t REG_SC1_SIZE = 0x7f006050ul;
    const uint32_t REG_SC2_ADDR = 0x7f006784ul;
    const uint32_t REG_SC2_PTR0 = 0x7f00606cul;
    const uint32_t REG_SC2_PTR1 = 0x7f006070ul;
    const uint32_t REG_SC2_PTR2 = 0x7f006074ul;
    const uint32_t REG_SC2_PTR3 = 0x7f006078ul;
    const uint32_t REG_SC2_RESET = 0x7f006064ul;
    const uint32_t REG_SC2_SIZE = 0x7f006068ul;
    const uint32_t REG_SC2_STATUS = 0x7f006780ul;
    const uint32_t REG_SOUND = 0x7f0060d4ul;
    const uint32_t REG_SO_EN = 0x7f006600ul;
    const uint32_t REG_SO_FORMAT = 0x7f0065fcul;
    const uint32_t REG_SO_MODE = 0x7f0065f4ul;
    const uint32_t REG_SO_SOURCE = 0x7f0065f8ul;
    const uint32_t REG_SYS_CFG = 0x7f800420ul;
    const uint32_t REG_SYS_STAT = 0x7f800424ul;
    const uint32_t REG_TAG = 0x7f0060c4ul;
    const uint32_t REG_TAG_X = 0x7f0060bcul;
    const uint32_t REG_TAG_Y = 0x7f0060c0ul;
    const uint32_t REG_TOUCH_CONFIG = 0x7f0061b4ul;
    const uint32_t REG_TOUCH_MODE = 0x7f006158ul;
    const uint32_t REG_TOUCH_RAW_XY = 0x7f006164ul;
    const uint32_t REG_TOUCH_SCREEN_XY = 0x7f006160ul;
    const uint32_t REG_TOUCH_TAG = 0x7f006178ul;
    const uint32_t REG_TOUCH_TAG1 = 0x7f006180ul;
    const uint32_t REG_TOUCH_TAG1_XY = 0x7f00617cul;
    const uint32_t REG_TOUCH_TAG2 = 0x7f006188ul;
    const uint32_t REG_TOUCH_TAG2_XY = 0x7f006184ul;
    const uint32_t REG_TOUCH_TAG3 = 0x7f006190ul;
    const uint32_t REG_TOUCH_TAG3_XY = 0x7f00618cul;
    const uint32_t REG_TOUCH_TAG4 = 0x7f006198ul;
    const uint32_t REG_TOUCH_TAG4_XY = 0x7f006194ul;
    const uint32_t REG_TOUCH_TAG_XY = 0x7f006174ul;
    const uint32_t REG_TOUCH_TRANSFORM_A = 0x7f00619cul;
    const uint32_t REG_TOUCH_TRANSFORM_B = 0x7f0061a0ul;
    const uint32_t REG_TOUCH_TRANSFORM_C = 0x7f0061a4ul;
    const uint32_t REG_TOUCH_TRANSFORM_D = 0x7f0061a8ul;
    const uint32_t REG_TOUCH_TRANSFORM_E = 0x7f0061acul;
    const uint32_t REG_TOUCH_TRANSFORM_F = 0x7f0061b0ul;
    const uint32_t REG_TRACKER = 0x7f004000ul;
    const uint32_t REG_TRACKER_1 = 0x7f004004ul;
    const uint32_t REG_TRACKER_2 = 0x7f004008ul;
    const uint32_t REG_TRACKER_3 = 0x7f00400cul;
    const uint32_t REG_TRACKER_4 = 0x7f004010ul;
    const uint32_t REG_VCYCLE = 0x7f0060a0ul;
    const uint32_t REG_VOFFSET = 0x7f0060a4ul;
    const uint32_t REG_VOL_L_PB = 0x7f0060c8ul;
    const uint32_t REG_VOL_R_PB = 0x7f0060ccul;
    const uint32_t REG_VOL_SOUND = 0x7f0060d0ul;
    const uint32_t REG_VSIZE = 0x7f0060a8ul;
    const uint32_t REG_VSYNC0 = 0x7f0060acul;
    const uint32_t REG_VSYNC1 = 0x7f0060b0ul;
    const uint32_t ROMFONT_MAX = 34;
    const uint32_t ROMFONT_TABLEADDRESS = 0x07ffff00ul;
    const uint32_t SAMPLES_ADPCM = 0x2ul;
    const uint32_t SAMPLES_LINEAR = 0x0ul;
    const uint32_t SAMPLES_S16 = 0x3ul;
    const uint32_t SAMPLES_S16S = 0x4ul;
    const uint32_t SAMPLES_ULAW = 0x1ul;
    const uint32_t STENCIL_DECR = 0x4ul;
    const uint32_t STENCIL_INCR = 0x3ul;
    const uint32_t STENCIL_INVERT = 0x5ul;
    const uint32_t STENCIL_KEEP = 0x1ul;
    const uint32_t STENCIL_REPLACE = 0x2ul;
    const uint32_t STENCIL_ZERO = 0x0ul;
    const uint32_t SWAPCHAIN_0 = 0xffff00fful;
    const uint32_t SWAPCHAIN_1 = 0xffff01fful;
    const uint32_t SWAPCHAIN_2 = 0xffff02fful;
    const uint32_t TEST_ALWAYS = 0x7ul;
    const uint32_t TEST_EQUAL = 0x5ul;
    const uint32_t TEST_GEQUAL = 0x4ul;
    const uint32_t TEST_GREATER = 0x3ul;
    const uint32_t TEST_LEQUAL = 0x2ul;
    const uint32_t TEST_LESS = 0x1ul;
    const uint32_t TEST_NEVER = 0x0ul;
    const uint32_t TEST_NOTEQUAL = 0x6ul;
    const uint32_t TOUCHMODE_CONTINUOUS = 0x3ul;
    const uint32_t TOUCHMODE_FRAME = 0x2ul;
    const uint32_t TOUCHMODE_OFF = 0x0ul;
    const uint32_t TOUCHMODE_ONESHOT = 0x1ul;
    const uint32_t VOL_ZERO = 0x0ul;
    const uint32_t WRAP_BORDER = 0x0ul;
    const uint32_t WRAP_REPEAT = 0x1ul;
    const uint8_t ROMFONT_FORMATS[35] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4};
    const uint8_t ROMFONT_HEIGHTS[35] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,16,16,13,17,20,22,29,38,16,18,22,27,33,46,58,74,98};
    const uint8_t ROMFONT_WIDTHS[35] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,10,13,14,17,24,30,14,15,18,22,28,38,48,62,83};
    int LIB_AwaitCoProEmpty(void) { return ::EVE_LIB_AwaitCoProEmpty(); };
    int eve_loadpatch(void) { ::eve_loadpatch(); };
    uint16_t LIB_SendString(const char* string) { return ::EVE_LIB_SendString(string); };
    uint32_t LIB_GetResult(int offset) { return ::EVE_LIB_GetResult(offset); };
    uint32_t LIB_MemRead32(uint32_t address) { return ::EVE_LIB_MemRead32(address); };
    void ALPHA_FUNC(uint8_t func,  uint8_t ref) { ::EVE_ALPHA_FUNC(func, ref); };
    void BEGIN(uint8_t prim) { ::EVE_BEGIN(prim); };
    void BITMAP_HANDLE(uint8_t handle) { ::EVE_BITMAP_HANDLE(handle); };
    void BITMAP_LAYOUT(uint8_t format,  uint16_t linestride,  uint16_t height) { ::EVE_BITMAP_LAYOUT(format, linestride, height); };
    void BITMAP_LAYOUT_H(uint8_t linestride,  uint8_t height) { ::EVE_BITMAP_LAYOUT_H(linestride, height); };
    void BITMAP_SIZE(uint8_t filter,  uint8_t wrapx,  uint8_t wrapy,  uint16_t width,  uint16_t height) { ::EVE_BITMAP_SIZE(filter, wrapx, wrapy, width, height); };
    void BITMAP_SIZE_H(uint8_t width,  uint8_t height) { ::EVE_BITMAP_SIZE_H(width, height); };
    void BITMAP_SOURCE(int32_t addr) { ::EVE_BITMAP_SOURCE(addr); };
    void BITMAP_SOURCE_H(uint8_t addr) { ::EVE_BITMAP_SOURCE_H(addr); };
    void BITMAP_TRANSFORM_A(long a) { ::EVE_BITMAP_TRANSFORM_A(a); };
    void BITMAP_TRANSFORM_B(long b) { ::EVE_BITMAP_TRANSFORM_B(b); };
    void BITMAP_TRANSFORM_C(long c) { ::EVE_BITMAP_TRANSFORM_C(c); };
    void BITMAP_TRANSFORM_D(long d) { ::EVE_BITMAP_TRANSFORM_D(d); };
    void BITMAP_TRANSFORM_E(long e) { ::EVE_BITMAP_TRANSFORM_E(e); };
    void BITMAP_TRANSFORM_F(long f) { ::EVE_BITMAP_TRANSFORM_F(f); };
    void BLEND_FUNC(uint8_t src,  uint8_t dst) { ::EVE_BLEND_FUNC(src, dst); };
    void CALL(uint16_t dest) { ::EVE_CALL(dest); };
    void CELL(uint8_t cell) { ::EVE_CELL(cell); };
    void CLEAR(uint8_t c,  uint8_t s,  uint8_t t) { ::EVE_CLEAR(c, s, t); };
    void CLEAR_COLOR(uint32_t c) { ::EVE_CLEAR_COLOR(c); };
    void CLEAR_COLOR_A(uint8_t alpha) { ::EVE_CLEAR_COLOR_A(alpha); };
    void CLEAR_COLOR_RGB(uint8_t r,  uint8_t g,  uint8_t b) { ::EVE_CLEAR_COLOR_RGB(r, g, b); };
    void CLEAR_STENCIL(uint8_t s) { ::EVE_CLEAR_STENCIL(s); };
    void CLEAR_TAG(uint8_t s) { ::EVE_CLEAR_TAG(s); };
    void CMD(uint32_t c) { ::EVE_CMD(c); };
    void CMD_ANIMDRAW(int32_t ch) { ::EVE_CMD_ANIMDRAW(ch); };
    void CMD_ANIMFRAME(int16_t x,  int16_t y,  uint32_t aoptr,  uint32_t frame) { ::EVE_CMD_ANIMFRAME(x, y, aoptr, frame); };
    void CMD_ANIMSTART(int32_t ch,  uint32_t aoptr,  uint32_t loop) { ::EVE_CMD_ANIMSTART(ch, aoptr, loop); };
    void CMD_ANIMSTOP(int32_t ch) { ::EVE_CMD_ANIMSTOP(ch); };
    void CMD_ANIMXY(int32_t ch,  int16_t x,  int16_t y) { ::EVE_CMD_ANIMXY(ch, x, y); };
    void CMD_APBREAD(uint32_t a,  uint32_t result) { ::EVE_CMD_APBREAD(a, result); };
    void CMD_APBWRITE(uint32_t a,  uint32_t b) { ::EVE_CMD_APBWRITE(a, b); };
    void CMD_APPEND(uint32_t ptr,  uint32_t num) { ::EVE_CMD_APPEND(ptr, num); };
    void CMD_APPENDF(uint32_t ptr,  uint32_t num) { ::EVE_CMD_APPENDF(ptr, num); };
    void CMD_ARC(int16_t x,  int16_t y,  uint16_t r0,  uint16_t r1,  uint16_t a0,  uint16_t a1) { ::EVE_CMD_ARC(x, y, r0, r1, a0, a1); };
    void CMD_BGCOLOR(uint32_t c) { ::EVE_CMD_BGCOLOR(c); };
    void CMD_BITMAP_TRANSFORM(int32_t x0,  int32_t y0,  int32_t x1,  int32_t y1,  int32_t x2,  int32_t y2,  int32_t tx0,  int32_t ty0,  int32_t tx1,  int32_t ty1,  int32_t tx2,  int32_t ty2,  uint16_t result) { ::EVE_CMD_BITMAP_TRANSFORM(x0, y0, x1, y1, x2, y2, tx0, ty0, tx1, ty1, tx2, ty2, result); };
    void CMD_BUTTON(int16_t x,  int16_t y,  int16_t w,  int16_t h,  int16_t font,  uint16_t options,  const char* string, ...) { va_list myargs; va_start(myargs, string); ::EVE_CMD_BUTTON(x, y, w, h, font, options, string, myargs); va_end(myargs); };
    void CMD_CALIBRATE(uint32_t result) { ::EVE_CMD_CALIBRATE(result); };
    void CMD_CALIBRATESUB(uint16_t x,  uint16_t y,  uint16_t w,  uint16_t h,  uint32_t result) { ::EVE_CMD_CALIBRATESUB(x, y, w, h, result); };
    void CMD_CALLLIST(uint32_t a) { ::EVE_CMD_CALLLIST(a); };
    void CMD_CGRADIENT(uint32_t shape,  int16_t x,  int16_t y,  int16_t w,  int16_t h,  uint32_t rgb0,  uint32_t rgb1) { ::EVE_CMD_CGRADIENT(shape, x, y, w, h, rgb0, rgb1); };
    void CMD_CLOCK(int16_t x,  int16_t y,  int16_t r,  uint16_t options,  uint16_t h,  uint16_t m,  uint16_t s,  uint16_t ms) { ::EVE_CMD_CLOCK(x, y, r, options, h, m, s, ms); };
    void CMD_COLDSTART(void) { ::EVE_CMD_COLDSTART(); };
    void CMD_DIAL(int16_t x,  int16_t y,  int16_t r,  uint16_t options,  uint16_t val) { ::EVE_CMD_DIAL(x, y, r, options, val); };
    void CMD_DLSTART(void) { ::EVE_CMD_DLSTART(); };
    void CMD_ENABLEREGION(uint32_t en) { ::EVE_CMD_ENABLEREGION(en); };
    void CMD_ENDLIST(void) { ::EVE_CMD_ENDLIST(); };
    void CMD_ENDREGION(int16_t p1,  int16_t p2,  int16_t p3,  int16_t p4) { ::EVE_CMD_ENDREGION(p1, p2, p3, p4); };
    void CMD_ENDTOUCHOFFSET(void) { ::EVE_CMD_ENDTOUCHOFFSET(); };
    void CMD_FENCE(void) { ::EVE_CMD_FENCE(); };
    void CMD_FGCOLOR(uint32_t c) { ::EVE_CMD_FGCOLOR(c); };
    void CMD_FILLWIDTH(uint32_t s) { ::EVE_CMD_FILLWIDTH(s); };
    void CMD_FLASHATTACH(void) { ::EVE_CMD_FLASHATTACH(); };
    void CMD_FLASHDETATCH(void) { ::EVE_CMD_FLASHDETATCH(); };
    void CMD_FLASHERASE(void) { ::EVE_CMD_FLASHERASE(); };
    void CMD_FLASHFAST(uint32_t result) { ::EVE_CMD_FLASHFAST(result); };
    void CMD_FLASHPROGRAM(uint32_t dest,  uint32_t src,  uint32_t num) { ::EVE_CMD_FLASHPROGRAM(dest, src, num); };
    void CMD_FLASHREAD(uint32_t dest,  uint32_t src,  uint32_t num) { ::EVE_CMD_FLASHREAD(dest, src, num); };
    void CMD_FLASHSOURCE(uint32_t ptr) { ::EVE_CMD_FLASHSOURCE(ptr); };
    void CMD_FLASHSPIDESEL(void) { ::EVE_CMD_FLASHSPIDESEL(); };
    void CMD_FLASHSPIRX(uint32_t ptr,  uint32_t num) { ::EVE_CMD_FLASHSPIRX(ptr, num); };
    void CMD_FLASHSPITX(uint32_t num) { ::EVE_CMD_FLASHSPITX(num); };
    void CMD_FLASHUPDATE(uint32_t dest,  uint32_t src,  uint32_t num) { ::EVE_CMD_FLASHUPDATE(dest, src, num); };
    void CMD_FLASHWRITE(uint32_t ptr,  uint32_t num) { ::EVE_CMD_FLASHWRITE(ptr, num); };
    void CMD_FLASHWRITEEXT(uint32_t dest,  uint32_t num,  uint8_t *data) { ::EVE_CMD_FLASHWRITEEXT(dest, num, data); };
    void CMD_FSDIR(uint32_t dst,  uint32_t num,  const char* path,  uint32_t result) { ::EVE_CMD_FSDIR(dst, num, path, result); };
    void CMD_FSOPTIONS(uint32_t options) { ::EVE_CMD_FSOPTIONS(options); };
    void CMD_FSREAD(uint32_t dst,  const char* filename,  uint32_t result) { ::EVE_CMD_FSREAD(dst, filename, result); };
    void CMD_FSSIZE(const char* filename,  uint32_t size) { ::EVE_CMD_FSSIZE(filename, size); };
    void CMD_FSSOURCE(const char* filename,  uint32_t result) { ::EVE_CMD_FSSOURCE(filename, result); };
    void CMD_GAUGE(int16_t x,  int16_t y,  int16_t r,  uint16_t options,  uint16_t major,  uint16_t minor,  uint16_t val,  uint16_t range) { ::EVE_CMD_GAUGE(x, y, r, options, major, minor, val, range); };
    void CMD_GETIMAGE(uint32_t source,  uint32_t fmt,  uint32_t w,  uint32_t h,  uint32_t palette) { ::EVE_CMD_GETIMAGE(source, fmt, w, h, palette); };
    void CMD_GETMATRIX(int32_t a,  int32_t b,  int32_t c,  int32_t d,  int32_t e,  int32_t f) { ::EVE_CMD_GETMATRIX(a, b, c, d, e, f); };
    void CMD_GETPROPS(uint32_t ptr,  uint32_t w,  uint32_t h) { ::EVE_CMD_GETPROPS(ptr, w, h); };
    void CMD_GETPTR(uint32_t result) { ::EVE_CMD_GETPTR(result); };
    void CMD_GLOW(int16_t x,  int16_t y,  int16_t w,  int16_t h) { ::EVE_CMD_GLOW(x, y, w, h); };
    void CMD_GRADCOLOR(uint32_t c) { ::EVE_CMD_GRADCOLOR(c); };
    void CMD_GRADIENT(int16_t x0,  int16_t y0,  uint32_t rgb0,  int16_t x1,  int16_t y1,  uint32_t rgb1) { ::EVE_CMD_GRADIENT(x0, y0, rgb0, x1, y1, rgb1); };
    void CMD_GRADIENTA(int16_t x0,  int16_t y0,  uint32_t argb0,  int16_t x1,  int16_t y1,  uint32_t argb1) { ::EVE_CMD_GRADIENTA(x0, y0, argb0, x1, y1, argb1); };
    void CMD_GRAPHICSFINISH(void) { ::EVE_CMD_GRAPHICSFINISH(); };
    void CMD_INFLATE(uint32_t ptr) { ::EVE_CMD_INFLATE(ptr); };
    void CMD_INTERRUPT(uint32_t ms) { ::EVE_CMD_INTERRUPT(ms); };
    void CMD_KEYS(int16_t x,  int16_t y,  int16_t w,  int16_t h,  int16_t font,  uint16_t options,  const char* string) { ::EVE_CMD_KEYS(x, y, w, h, font, options, string); };
    void CMD_LOADASSET(uint32_t dst,  uint32_t options) { ::EVE_CMD_LOADASSET(dst, options); };
    void CMD_LOADIDENTITY(void) { ::EVE_CMD_LOADIDENTITY(); };
    void CMD_LOADIMAGE(uint32_t ptr,  uint32_t options) { ::EVE_CMD_LOADIMAGE(ptr, options); };
    void CMD_LOADPATCH(uint32_t options) { ::EVE_CMD_LOADPATCH(options); };
    void CMD_LOADWAV(uint32_t dst,  uint32_t options) { ::EVE_CMD_LOADWAV(dst, options); };
    void CMD_LOGO(void) { ::EVE_CMD_LOGO(); };
    void CMD_MEDIAFIFO(uint32_t ptr,  uint32_t size) { ::EVE_CMD_MEDIAFIFO(ptr, size); };
    void CMD_MEMCPY(uint32_t dest,  uint32_t src,  uint32_t num) { ::EVE_CMD_MEMCPY(dest, src, num); };
    void CMD_MEMCRC(uint32_t ptr,  uint32_t num,  uint32_t result) { ::EVE_CMD_MEMCRC(ptr, num, result); };
    void CMD_MEMSET(uint32_t ptr,  uint32_t value,  uint32_t num) { ::EVE_CMD_MEMSET(ptr, value, num); };
    void CMD_MEMWRITE(uint32_t ptr,  uint32_t num) { ::EVE_CMD_MEMWRITE(ptr, num); };
    void CMD_MEMZERO(uint32_t ptr,  uint32_t num) { ::EVE_CMD_MEMZERO(ptr, num); };
    void CMD_NEWLIST(uint32_t a) { ::EVE_CMD_NEWLIST(a); };
    void CMD_NOP(void) { ::EVE_CMD_NOP(); };
    void CMD_NUMBER(int16_t x,  int16_t y,  int16_t font,  uint16_t options,  int32_t n) { ::EVE_CMD_NUMBER(x, y, font, options, n); };
    void CMD_PLAYVIDEO(uint32_t options) { ::EVE_CMD_PLAYVIDEO(options); };
    void CMD_PROGRESS(int16_t x,  int16_t y,  int16_t w,  int16_t h,  uint16_t options,  uint16_t val,  uint16_t range) { ::EVE_CMD_PROGRESS(x, y, w, h, options, val, range); };
    void CMD_REGION(void) { ::EVE_CMD_REGION(); };
    void CMD_REGREAD(uint32_t ptr,  uint32_t result) { ::EVE_CMD_REGREAD(ptr, result); };
    void CMD_REGWRITE(uint32_t a,  uint32_t b) { ::EVE_CMD_REGWRITE(a, b); };
    void CMD_RENDERTARGET(uint32_t dest,  uint16_t fmt,  uint16_t w,  uint16_t h) { ::EVE_CMD_RENDERTARGET(dest, fmt, w, h); };
    void CMD_RESETFONTS(void) { ::EVE_CMD_RESETFONTS(); };
    void CMD_RESULT(uint32_t a) { ::EVE_CMD_RESULT(a); };
    void CMD_RETURN(void) { ::EVE_CMD_RETURN(); };
    void CMD_ROMFONT(uint32_t font,  uint32_t romslot) { ::EVE_CMD_ROMFONT(font, romslot); };
    void CMD_ROTATE(int32_t a) { ::EVE_CMD_ROTATE(a); };
    void CMD_ROTATEAROUND(int32_t x,  int32_t y,  int32_t a,  int32_t s) { ::EVE_CMD_ROTATEAROUND(x, y, a, s); };
    void CMD_RUNANIM(uint32_t waitmask,  uint32_t play) { ::EVE_CMD_RUNANIM(waitmask, play); };
    void CMD_SCALE(int32_t sx,  int32_t sy) { ::EVE_CMD_SCALE(sx, sy); };
    void CMD_SCREENSAVER(void) { ::EVE_CMD_SCREENSAVER(); };
    void CMD_SCROLLBAR(int16_t x,  int16_t y,  int16_t w,  int16_t h,  uint16_t options,  uint16_t val,  uint16_t size,  uint16_t range) { ::EVE_CMD_SCROLLBAR(x, y, w, h, options, val, size, range); };
    void CMD_SDATTACH(uint32_t options,  uint32_t result) { ::EVE_CMD_SDATTACH(options, result); };
    void CMD_SDBLOCKREAD(uint32_t dst,  uint32_t src,  uint32_t count,  uint32_t result) { ::EVE_CMD_SDBLOCKREAD(dst, src, count, result); };
    void CMD_SETBASE(uint32_t base) { ::EVE_CMD_SETBASE(base); };
    void CMD_SETBITMAP(uint32_t source,  uint16_t fmt,  uint16_t w,  uint16_t h) { ::EVE_CMD_SETBITMAP(source, fmt, w, h); };
    void CMD_SETFONT(uint32_t font,  uint32_t ptr,  uint32_t firstchar) { ::EVE_CMD_SETFONT(font, ptr, firstchar); };
    void CMD_SETMATRIX(void) { ::EVE_CMD_SETMATRIX(); };
    void CMD_SETROTATE(uint32_t r) { ::EVE_CMD_SETROTATE(r); };
    void CMD_SETSCRATCH(uint32_t handle) { ::EVE_CMD_SETSCRATCH(handle); };
    void CMD_SKETCH(int16_t x,  int16_t y,  uint16_t w,  uint16_t h,  uint32_t ptr,  uint16_t format) { ::EVE_CMD_SKETCH(x, y, w, h, ptr, format); };
    void CMD_SLIDER(int16_t x,  int16_t y,  int16_t w,  int16_t h,  uint16_t options,  uint16_t val,  uint16_t range) { ::EVE_CMD_SLIDER(x, y, w, h, options, val, range); };
    void CMD_SNAPSHOT(uint32_t ptr) { ::EVE_CMD_SNAPSHOT(ptr); };
    void CMD_SPINNER(int16_t x,  int16_t y,  uint16_t style,  uint16_t scale) { ::EVE_CMD_SPINNER(x, y, style, scale); };
    void CMD_STOP(void) { ::EVE_CMD_STOP(); };
    void CMD_SWAP(void) { ::EVE_CMD_SWAP(); };
    void CMD_SYNC(void) { ::EVE_CMD_SYNC(); };
    void CMD_TESTCARD(void) { ::EVE_CMD_TESTCARD(); };
    void CMD_TEXT(int16_t x,  int16_t y,  int16_t font,  uint16_t options,  const char* string, ...) { va_list myargs; va_start(myargs, string); ::EVE_CMD_TEXT(x, y, font, options, string, myargs); va_end(myargs); };
    void CMD_TEXTDIM(uint32_t dimensions,  int16_t font,  uint16_t options,  const char* string, ...) { va_list myargs; va_start(myargs, string); ::EVE_CMD_TEXTDIM(dimensions, font, options, string, myargs); va_end(myargs); };
    void CMD_TOGGLE(int16_t x,  int16_t y,  int16_t w,  int16_t font,  uint16_t options,  uint16_t state,  const char* string, ...) { va_list myargs; va_start(myargs, string); ::EVE_CMD_TOGGLE(x, y, w, font, options, state, string, myargs); va_end(myargs); };
    void CMD_TOUCHOFFSET(int16_t p1,  int16_t p2) { ::EVE_CMD_TOUCHOFFSET(p1, p2); };
    void CMD_TRACK(int16_t x,  int16_t y,  int16_t w,  int16_t h,  int16_t tag) { ::EVE_CMD_TRACK(x, y, w, h, tag); };
    void CMD_TRANSLATE(int32_t tx,  int32_t ty) { ::EVE_CMD_TRANSLATE(tx, ty); };
    void CMD_VIDEOFRAME(uint32_t dst,  uint32_t ptr) { ::EVE_CMD_VIDEOFRAME(dst, ptr); };
    void CMD_VIDEOSTART(void) { ::EVE_CMD_VIDEOSTART(); };
    void CMD_WAIT(uint32_t us) { ::EVE_CMD_WAIT(us); };
    void CMD_WAITCHANGE(uint32_t a) { ::EVE_CMD_WAITCHANGE(a); };
    void CMD_WAITCOND(uint32_t a,  uint32_t func,  uint32_t ref,  uint32_t mask) { ::EVE_CMD_WAITCOND(a, func, ref, mask); };
    void COLOR(uint32_t c) { ::EVE_COLOR(c); };
    void COLOR_A(uint8_t alpha) { ::EVE_COLOR_A(alpha); };
    void COLOR_MASK(uint8_t r,  uint8_t g,  uint8_t b,  uint8_t a) { ::EVE_COLOR_MASK(r, g, b, a); };
    void COLOR_RGB(uint8_t r,  uint8_t g,  uint8_t b) { ::EVE_COLOR_RGB(r, g, b); };
    void DISPLAY(void) { ::EVE_DISPLAY(); };
    void END(void) { ::EVE_END(); };
    void Init(void) { ::EVE_Init(); };
    void JUMP(uint16_t dest) { ::EVE_JUMP(dest); };
    void LIB_BeginCoProList(void) { ::EVE_LIB_BeginCoProList(); };
    void LIB_EndCoProList(void) { ::EVE_LIB_EndCoProList(); };
    void LIB_GetCoProException(char *desc) { ::EVE_LIB_GetCoProException(desc); };
    void LIB_GetImage(uint32_t *addr,  uint32_t *fmt,  uint32_t *width,  uint32_t *height,  uint32_t *palette) { ::EVE_LIB_GetImage(addr, fmt, width, height, palette); };
    void LIB_GetMatrix(uint32_t *a,  uint32_t *b,  uint32_t *c,  uint32_t *d,  uint32_t *e,  uint32_t *f) { ::EVE_LIB_GetMatrix(a, b, c, d, e, f); };
    void LIB_GetProps(uint32_t *addr,  uint32_t *width,  uint32_t *height) { ::EVE_LIB_GetProps(addr, width, height); };
    void LIB_GetPtr(uint32_t *addr) { ::EVE_LIB_GetPtr(addr); };
    void LIB_MemCrc(uint32_t ptr,  uint32_t num,  uint32_t *result) { ::EVE_LIB_MemCrc(ptr, num, result); };
    void LIB_MemWrite32(uint32_t addr,  uint32_t value) { ::EVE_LIB_MemWrite32(addr, value); };
    void LIB_ReadDataFromRAMG(uint8_t *ImgData,  uint32_t DataSize,  uint32_t SrcAddress) { ::EVE_LIB_ReadDataFromRAMG(ImgData, DataSize, SrcAddress); };
    void LIB_RegRead(uint32_t addr,  uint32_t *value) { ::EVE_LIB_RegRead(addr, value); };
    void LIB_WriteDataToCMD(const uint8_t *ImgData,  uint32_t DataSize) { ::EVE_LIB_WriteDataToCMD(ImgData, DataSize); };
    void LIB_WriteDataToRAMG(const uint8_t *ImgData,  uint32_t DataSize,  uint32_t DestAddress) { ::EVE_LIB_WriteDataToRAMG(ImgData, DataSize, DestAddress); };
    void LINE_WIDTH(uint16_t width) { ::EVE_LINE_WIDTH(width); };
    void MACRO(uint8_t m) { ::EVE_MACRO(m); };
    void NOP(void) { ::EVE_NOP(); };
    void PALETTE_SOURCE(uint32_t addr) { ::EVE_PALETTE_SOURCE(addr); };
    void POINT_SIZE(uint16_t size) { ::EVE_POINT_SIZE(size); };
    void RESTORE_CONTEXT(void) { ::EVE_RESTORE_CONTEXT(); };
    void RETURN(void) { ::EVE_RETURN(); };
    void SAVE_CONTEXT(void) { ::EVE_SAVE_CONTEXT(); };
    void SCISSOR_SIZE(uint16_t width,  uint16_t height) { ::EVE_SCISSOR_SIZE(width, height); };
    void SCISSOR_XY(uint16_t x,  uint16_t y) { ::EVE_SCISSOR_XY(x, y); };
    void STENCIL_FUNC(uint8_t func,  uint8_t ref,  uint8_t mask) { ::EVE_STENCIL_FUNC(func, ref, mask); };
    void STENCIL_MASK(uint8_t mask) { ::EVE_STENCIL_MASK(mask); };
    void STENCIL_OP(uint8_t sfail,  uint8_t spass) { ::EVE_STENCIL_OP(sfail, spass); };
    void TAG(uint8_t s) { ::EVE_TAG(s); };
    void TAG_MASK(uint8_t mask) { ::EVE_TAG_MASK(mask); };
    void VERTEX2F(int16_t x,  int16_t y) { ::EVE_VERTEX2F(x, y); };
    void VERTEX2II(uint16_t x,  uint16_t y,  uint8_t handle, uint8_t cell) { ::EVE_VERTEX2II(x, y, handle, cell); };
    void VERTEX_FORMAT(uint8_t frac) { ::EVE_VERTEX_FORMAT(frac); };
    void VERTEX_TRANSLATE_X(uint32_t x) { ::EVE_VERTEX_TRANSLATE_X(x); };
    void VERTEX_TRANSLATE_Y(uint32_t y) { ::EVE_VERTEX_TRANSLATE_Y(y); };

  public:
    /* Font table structure */
    /* On EVE4 onwards this is called the Legacy Font Structure. */
    typedef struct
    {
        /* Width of each character font from 0 to 127 */
        uint8_t    FontWidth[128];
        /* Bitmap format of font - this is the same as the EVE_FORMAT_x, where x is L1, L2, L4 etc. */
        uint32_t    FontBitmapFormat;
        /* Font line stride in bytes */
        uint32_t    FontLineStride;
        /* Font width in pixels */
        uint32_t    FontWidthInPixels;
        /* Font height in pixels */
        uint32_t    FontHeightInPixels;
        /* Pointer to font graphics raw data */
        uint32_t    PointerToFontGraphicsData;
    } EVE_GPU_FONT_HEADER;

    /* On EVE4 onwards this is called the Extended Font Structure. */
    typedef struct
    {
        /* Signature of font structure - must be 0x0100AAFF */
        uint32_t    Signature;
        /* Total size of font block in bytes */
        uint32_t    Size;
        /* Bitmap format of font - this is the same as the EVE_FORMAT_x, where x is L1, L2, L4 etc. */
        uint32_t    FontBitmapFormat;
        /* Bitmap swizzle - as used in BITMAP_SWIZZLE command */
        uint32_t    FontBitmapSwizzle;
        /* Font layout width in bytes */
        uint32_t    FontLayoutWidth;
        /* Font layout height */
        uint32_t    FontLayoutHeight;
        /* Font width in pixels */
        uint32_t    FontWidthInPixels;
        /* Font height in pixels */
        uint32_t    FontHeightInPixels;
        /* Pointer to font graphics raw data */
        uint32_t    PointerToFontGraphicsData;
        /* Number of characters */
        uint32_t    FontNumberCharacters;
    } EVE_GPU_EXT_FONT_HEADER;

    /* On EVE5 onwards this is called the Extended 2 Font Structure. */
    typedef struct
    {
        /* Signature of font structure - must be 0x0200AAFF */
        uint32_t    Signature;
        /* Total size of font block in bytes */
        uint32_t    Size;
        /* Bitmap format and flags of font */
        /* Format is the same as the EVE_FORMAT_x, where x is L1, L2, L4 etc. */
        /* Flags denotes binary and line break behaviour */
        uint32_t    FontBitmapFormat;
        /* Bitmap swizzle - as used in BITMAP_SWIZZLE command */
        uint32_t    FontBitmapSwizzle;
        /* Font layout width in bytes */
        uint32_t    FontLayoutWidth;
        /* Font layout height */
        uint32_t    FontLayoutHeight;
        /* Font width in pixels */
        uint32_t    FontWidthInPixels;
        /* Font height in pixels */
        uint32_t    FontHeightInPixels;
        /* Font padding and leading in pixels */
        uint32_t    FontPadLeadInPixels;
        /* Number of characters */
        uint32_t    FontNumberCharacters;
        /* Font midline and baseline in pixels */
        uint32_t    FontMidlineBaselineInPixels;
    } EVE_GPU_EXT2_FONT_HEADER;

    typedef struct
    {
        /* Pointer to font graphics raw data */
        uint32_t    PointerToFontGraphicsData;
        /* Width of font character */
        uint32_t    Width;
    } EVE_GPU_EXT2_CHAR_DESCRIPTOR;

  private:
    void setpanel(uint32_t panel);
};

#endif    /* _BTEVE_H_ */
