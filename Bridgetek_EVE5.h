/**
 * @file Bridgetek_EVE5.h
 * @brief Support BT820
 */
/*
 * ============================================================================
 * (C) Copyright,  Bridgetek Pte. Ltd.
 * ============================================================================
 *
 * This source code ("the Software") is provided by Bridgetek Pte Ltd
 * ("Bridgetek") subject to the licence terms set out
 * https://brtchip.com/wp-content/uploads/2021/11/BRT_Software_License_Agreement.pdf ("the Licence Terms").
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
#include <EVE5.h>
#include <HAL.h>
#include <MCU.h>
}
//@}

class Bridgetek_EVE5
{
  public:
    Bridgetek_EVE5(void);

  void setup(uint32_t panel);
  void setup(uint32_t panel, uint32_t ramg);

  public:
    int LIB_AwaitCoProEmpty(void) { return ::EVE_LIB_AwaitCoProEmpty(); };
    uint16_t LIB_SendString(const char* string) { return ::EVE_LIB_SendString(string); };
    uint32_t LIB_GetResult(int offset) { return ::EVE_LIB_GetResult(offset); };
    uint32_t LIB_MemRead32(uint32_t address) { return ::EVE_LIB_MemRead32(address); };
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
    void CMD_INFLATE(uint32_t ptr,  uint32_t options) { ::EVE_CMD_INFLATE(ptr, options); };
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

    int eve_loadpatch(void) { return ::eve_loadpatch(); };
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
    void COLOR(uint32_t c) { ::EVE_COLOR(c); };
    void COLOR_A(uint8_t alpha) { ::EVE_COLOR_A(alpha); };
    void COLOR_MASK(uint8_t r,  uint8_t g,  uint8_t b,  uint8_t a) { ::EVE_COLOR_MASK(r, g, b, a); };
    void COLOR_RGB(uint8_t r,  uint8_t g,  uint8_t b) { ::EVE_COLOR_RGB(r, g, b); };
    void DISPLAY(void) { ::EVE_DISPLAY(); };
    void END(void) { ::EVE_END(); };
    void Init(void) { ::EVE_Init(); };
    void JUMP(uint16_t dest) { ::EVE_JUMP(dest); };
    void LINE_WIDTH(uint16_t width) { ::EVE_LINE_WIDTH(width); };
    void MACRO(uint8_t m) { ::EVE_MACRO(m); };
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

    const uint8_t ROMFONT_FORMATS[35] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4};
    const uint8_t ROMFONT_HEIGHTS[35] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,16,16,13,17,20,22,29,38,16,18,22,27,33,46,58,74,98};
    const uint8_t ROMFONT_WIDTHS[35] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,10,13,14,17,24,30,14,15,18,22,28,38,48,62,83};

    enum {
      ADC_DIFFERENTIAL = 0x1ul,
      ADC_SINGLE_ENDED = 0x0ul,
      ANIM_HOLD = 0x2ul,
      ANIM_LOOP = 0x1ul,
      ANIM_ONCE = 0x0ul,
      BEGIN_BITMAPS = 0x1ul,
      BEGIN_EDGE_STRIP_A = 0x7ul,
      BEGIN_EDGE_STRIP_B = 0x8ul,
      BEGIN_EDGE_STRIP_L = 0x6ul,
      BEGIN_EDGE_STRIP_R = 0x5ul,
      BEGIN_LINES = 0x3ul,
      BEGIN_LINE_STRIP = 0x4ul,
      BEGIN_POINTS = 0x2ul,
      BEGIN_RECTS = 0x9ul,
      BLEND_DST_ALPHA = 0x3ul,
      BLEND_ONE = 0x1ul,
      BLEND_ONE_MINUS_DST_ALPHA = 0x5ul,
      BLEND_ONE_MINUS_SRC_ALPHA = 0x4ul,
      BLEND_SRC_ALPHA = 0x2ul,
      BLEND_ZERO = 0x0ul,
      CGRADIENT_CORNER_ZERO = 0x0ul,
      CGRADIENT_EDGE_ZERO = 0x1ul,
      COPROC_REPORT = 0x7f004800ul,
      CTOUCHMODE_COMPATIBILITY = 0x1ul,
      CTOUCHMODE_EXTENDED = 0x0ul,
      DLSWAP_DONE = 0x0ul,
      DLSWAP_FRAME = 0x2ul,
      FILTER_BILINEAR = 0x1ul,
      FILTER_NEAREST = 0x0ul,
      FLASH_STATUS_BASIC = 0x2ul,
      FLASH_STATUS_DETACHED = 0x1ul,
      FLASH_STATUS_FULL = 0x3ul,
      FLASH_STATUS_INIT = 0x0ul,
      FORMAT_ARGB1555 = 0x0ul,
      FORMAT_ARGB2 = 0x5ul,
      FORMAT_ARGB4 = 0x6ul,
      FORMAT_ARGB6 = 0x17ul,
      FORMAT_ARGB8 = 0x14ul,
      FORMAT_BARGRAPH = 0xbul,
      FORMAT_COMPRESSED_RGBA_ASTC_10x10_KHR = 0x93bbul,
      FORMAT_COMPRESSED_RGBA_ASTC_10x5_KHR = 0x93b8ul,
      FORMAT_COMPRESSED_RGBA_ASTC_10x6_KHR = 0x93b9ul,
      FORMAT_COMPRESSED_RGBA_ASTC_10x8_KHR = 0x93baul,
      FORMAT_COMPRESSED_RGBA_ASTC_12x10_KHR = 0x93bcul,
      FORMAT_COMPRESSED_RGBA_ASTC_12x12_KHR = 0x93bdul,
      FORMAT_COMPRESSED_RGBA_ASTC_4x4_KHR = 0x93b0ul,
      FORMAT_COMPRESSED_RGBA_ASTC_5x4_KHR = 0x93b1ul,
      FORMAT_COMPRESSED_RGBA_ASTC_5x5_KHR = 0x93b2ul,
      FORMAT_COMPRESSED_RGBA_ASTC_6x5_KHR = 0x93b3ul,
      FORMAT_COMPRESSED_RGBA_ASTC_6x6_KHR = 0x93b4ul,
      FORMAT_COMPRESSED_RGBA_ASTC_8x5_KHR = 0x93b5ul,
      FORMAT_COMPRESSED_RGBA_ASTC_8x6_KHR = 0x93b6ul,
      FORMAT_COMPRESSED_RGBA_ASTC_8x8_KHR = 0x93b7ul,
      FORMAT_L1 = 0x1ul,
      FORMAT_L2 = 0x11ul,
      FORMAT_L4 = 0x2ul,
      FORMAT_L8 = 0x3ul,
      FORMAT_LA1 = 0x18ul,
      FORMAT_LA2 = 0x19ul,
      FORMAT_LA4 = 0x1aul,
      FORMAT_LA8 = 0x1bul,
      FORMAT_PALETTED = 0x8ul,
      FORMAT_PALETTED4444 = 0xful,
      FORMAT_PALETTED565 = 0xeul,
      FORMAT_PALETTED8 = 0x10ul,
      FORMAT_PALETTEDARGB8 = 0x15ul,
      FORMAT_RGB332 = 0x4ul,
      FORMAT_RGB565 = 0x7ul,
      FORMAT_RGB6 = 0x16ul,
      FORMAT_RGB8 = 0x13ul,
      FORMAT_TEXT8X8 = 0x9ul,
      FORMAT_TEXTVGA = 0xaul,
      FORMAT_YCBCR = 0x1cul,
      INT_CMDEMPTY = 0x20ul,
      INT_CMDFLAG = 0x40ul,
      INT_CONVCOMPLETE = 0x80ul,
      INT_G8 = 0x12ul,
      INT_L8C = 0xcul,
      INT_PLAYBACK = 0x10ul,
      INT_SOUND = 0x8ul,
      INT_SWAP = 0x1ul,
      INT_TAG = 0x4ul,
      INT_TOUCH = 0x2ul,
      INT_VGA = 0xdul,
      OPT_1BIT = 0x0ul,
      OPT_3D = 0x0ul,
      OPT_4BIT = 0x2ul,
      OPT_BASELINE = 0x8000ul,
      OPT_CASESENSITIVE = 0x2ul,
      OPT_CENTER = 0x600ul,
      OPT_CENTERX = 0x200ul,
      OPT_CENTERY = 0x400ul,
      OPT_COMPLETEREG = 0x1000ul,
      OPT_DIRECT = 0x800ul,
      OPT_DIRSEP_UNIX = 0x8ul,
      OPT_DIRSEP_WIN = 0x4ul,
      OPT_DITHER = 0x100ul,
      OPT_FILL = 0x2000ul,
      OPT_FLASH = 0x40ul,
      OPT_FLAT = 0x100ul,
      OPT_FORMAT = 0x1000ul,
      OPT_FS = 0x2000ul,
      OPT_FULLSCREEN = 0x8ul,
      OPT_FULLSPEED = 0x0ul,
      OPT_HALFSPEED = 0x4ul,
      OPT_IS_MMC = 0x10ul,
      OPT_IS_SD = 0x20ul,
      OPT_MEDIAFIFO = 0x10ul,
      OPT_MONO = 0x1ul,
      OPT_NOBACK = 0x1000ul,
      OPT_NODL = 0x2ul,
      OPT_NOHANDS = 0xc000ul,
      OPT_NOHM = 0x4000ul,
      OPT_NOPOINTER = 0x4000ul,
      OPT_NOSECS = 0x8000ul,
      OPT_NOTEAR = 0x4ul,
      OPT_NOTICKS = 0x2000ul,
      OPT_OVERLAY = 0x80ul,
      OPT_QUARTERSPEED = 0x8ul,
      OPT_RGB565 = 0x0ul,
      OPT_RIGHTX = 0x800ul,
      OPT_SFNLOWER = 0x1ul,
      OPT_SIGNED = 0x100ul,
      OPT_SOUND = 0x20ul,
      OPT_TOUCH_100KHZ = 0x800ul,
      OPT_TOUCH_400KHZ = 0x0ul,
      OPT_TOUCH_AR1021 = 0x3ul,
      OPT_TOUCH_FOCALTECH = 0x1ul,
      OPT_TOUCH_GOODIX = 0x2ul,
      OPT_TOUCH_ILI2511 = 0x4ul,
      OPT_TOUCH_QUICKSIM = 0x8000ul,
      OPT_TOUCH_TSC2007 = 0x5ul,
      OPT_TRUECOLOR = 0x200ul,
      OPT_YCBCR = 0x400ul,
      RAM_BIST = 0x7f8001c0ul,
      RAM_CMD = 0x7f000000ul,
      RAM_CMD_SIZE = (16*1024L),
      RAM_DL = 0x7f008000ul,
      RAM_DL_SIZE = (16*1024L),
      RAM_G = 0x0ul,
      RAM_G_128_MBIT = 0x400000UL,
      RAM_G_1_GBIT = 0x8000000UL,
      RAM_G_256_MBIT = 0x800000UL,
      RAM_G_2_GBIT = 0x10000000UL,
      RAM_G_32_MBIT = 0x100000UL,
      RAM_G_4_GBIT = 0x20000000UL,
      RAM_G_512_MBIT = 0x4000000UL,
      RAM_G_64_MBIT = 0x200000UL,
      RAM_G_8_GBIT = 0x40000000UL,
      RAM_REG = 0x7f006000ul,
      RAM_REPORT = 0x00309800ul,
      RAM_ROMSUB = 0x7f027800ul,
      RAM_TOP = 0x00304000ul,
      ROMFONT_MAX = 34,
      ROMFONT_TABLEADDRESS = 0x07ffff00ul,
      SAMPLES_ADPCM = 0x2ul,
      SAMPLES_LINEAR = 0x0ul,
      SAMPLES_S16 = 0x3ul,
      SAMPLES_S16S = 0x4ul,
      SAMPLES_ULAW = 0x1ul,
      STENCIL_DECR = 0x4ul,
      STENCIL_INCR = 0x3ul,
      STENCIL_INVERT = 0x5ul,
      STENCIL_KEEP = 0x1ul,
      STENCIL_REPLACE = 0x2ul,
      STENCIL_ZERO = 0x0ul,
      SWAPCHAIN_0 = 0xffff00fful,
      SWAPCHAIN_1 = 0xffff01fful,
      SWAPCHAIN_2 = 0xffff02fful,
      TEST_ALWAYS = 0x7ul,
      TEST_EQUAL = 0x5ul,
      TEST_GEQUAL = 0x4ul,
      TEST_GREATER = 0x3ul,
      TEST_LEQUAL = 0x2ul,
      TEST_LESS = 0x1ul,
      TEST_NEVER = 0x0ul,
      TEST_NOTEQUAL = 0x6ul,
      TOUCHMODE_CONTINUOUS = 0x3ul,
      TOUCHMODE_FRAME = 0x2ul,
      TOUCHMODE_OFF = 0x0ul,
      TOUCHMODE_ONESHOT = 0x1ul,
      VOL_ZERO = 0x0ul,
      WRAP_BORDER = 0x0ul,
      WRAP_REPEAT = 0x1ul,

      ALPHA = 0x5ul,
      API = 5,
      BLUE = 0x4ul,
      GLFORMAT = 0x1ful,
      GREEN = 0x3ul,
      RED = 0x2ul,

      REG_ANIM_ACTIVE = 0x7f00402cul,
      REG_BOOT_CONTROL = 0x7f006628ul,
      REG_BOOT_STATUS = 0x7f80044Cul,
      REG_CHIP_ID = 0x7f800448ul,
      REG_CLOCK = 0x7f006008ul,
      REG_CMDB_SPACE = 0x7f006594ul,
      REG_CMDB_WRITE = 0x7f010000ul,
      REG_CMD_DL = 0x7f006154ul,
      REG_CMD_READ = 0x7f00614cul,
      REG_CMD_WRITE = 0x7f006150ul,
      REG_CPURESET = 0x7f006088ul,
      REG_CTOUCH_EXTENDED = 0x7f00615cul,
      REG_CTOUCH_TOUCH0_XY = 0x7f006160ul,
      REG_CTOUCH_TOUCH4_XY = 0x7f006170ul,
      REG_CTOUCH_TOUCHA_XY = 0x7f006164ul,
      REG_CTOUCH_TOUCHB_XY = 0x7f006168ul,
      REG_CTOUCH_TOUCHC_XY = 0x7f00616cul,
      REG_DDR_TYPE = 0x7f800454ul,
      REG_DISP = 0x7f0060e4ul,
      REG_DLSWAP = 0x7f0060b4ul,
      REG_EXTENT_X0 = 0x7f00403cul,
      REG_EXTENT_X1 = 0x7f004044ul,
      REG_EXTENT_Y0 = 0x7f004040ul,
      REG_EXTENT_Y1 = 0x7f004048ul,
      REG_FLASH_DTR = 0x7f0065ecul,
      REG_FLASH_SIZE = 0x7f004024ul,
      REG_FLASH_STATUS = 0x7f0065d4ul,
      REG_FRAMES = 0x7f006004ul,
      REG_FREQUENCY = 0x7f00600cul,
      REG_FREQUENCY_A = 0x7f00671cul,
      REG_GPIO = 0x7f0060e0ul,
      REG_GPIO_DIR = 0x7f0060dcul,
      REG_HCYCLE = 0x7f00608cul,
      REG_HOFFSET = 0x7f006090ul,
      REG_HSIZE = 0x7f006094ul,
      REG_HSYNC0 = 0x7f006098ul,
      REG_HSYNC1 = 0x7f00609cul,
      REG_I2S_CFG = 0x7f800800ul,
      REG_I2S_CTL = 0x7f800804ul,
      REG_I2S_EN = 0x7f006714ul,
      REG_I2S_FREQ = 0x7f006718ul,
      REG_I2S_PAD_CFG = 0x7f800814ul,
      REG_I2S_STAT = 0x7f800810ul,
      REG_ID = 0x7f006000ul,
      REG_INT_EN = 0x7f006104ul,
      REG_INT_FLAGS = 0x7f006100ul,
      REG_INT_MASK = 0x7f006108ul,
      REG_LVDSRX_CORE_CAPTURE = 0x7f006674ul,
      REG_LVDSRX_CORE_DEST = 0x7f00667cul,
      REG_LVDSRX_CORE_DITHER = 0x7f006684ul,
      REG_LVDSRX_CORE_ENABLE = 0x7f006670ul,
      REG_LVDSRX_CORE_FORMAT = 0x7f006680ul,
      REG_LVDSRX_CORE_FRAMES = 0x7f006698ul,
      REG_LVDSRX_CORE_SETUP = 0x7f006678ul,
      REG_LVDSRX_CTRL = 0x7F800504ul,
      REG_LVDSRX_SETUP = 0x7F800500ul,
      REG_LVDSRX_STAT = 0x7F800508ul,
      REG_LVDSTX_CTRL_CH0 = 0x7f800314ul,
      REG_LVDSTX_CTRL_CH1 = 0x7f800318ul,
      REG_LVDSTX_EN = 0x7f800300ul,
      REG_LVDSTX_ERR_STAT = 0x7f800320ul,
      REG_LVDSTX_PLLCFG = 0x7f800304ul,
      REG_LVDSTX_STAT = 0x7f80031cul,
      REG_MACRO_0 = 0x7f006130ul,
      REG_MACRO_1 = 0x7f006134ul,
      REG_MEDIAFIFO_READ = 0x7f004014ul,
      REG_MEDIAFIFO_WRITE = 0x7f004018ul,
      REG_OBJECT_COMPLETE = 0x7f004038ul,
      REG_PCLK_POL = 0x7f0060b8ul,
      REG_PIN_DRV_0 = 0x7f800408ul,
      REG_PIN_DRV_1 = 0x7f80040Cul,
      REG_PIN_DRV_2 = 0x7f800464ul,
      REG_PIN_SLEW_0 = 0x7f800410ul,
      REG_PIN_SLEW_1 = 0x7f800468ul,
      REG_PIN_TYPE_0 = 0x7f800414ul,
      REG_PIN_TYPE_1 = 0x7f800418ul,
      REG_PIN_TYPE_2 = 0x7f80046Cul,
      REG_PLAY = 0x7f0060d8ul,
      REG_PLAYBACK_FORMAT = 0x7f00611cul,
      REG_PLAYBACK_FREQ = 0x7f006118ul,
      REG_PLAYBACK_LENGTH = 0x7f006110ul,
      REG_PLAYBACK_LOOP = 0x7f006120ul,
      REG_PLAYBACK_PAUSE = 0x7f0065d0ul,
      REG_PLAYBACK_PLAY = 0x7f006124ul,
      REG_PLAYBACK_READPTR = 0x7f006114ul,
      REG_PLAYBACK_START = 0x7f00610cul,
      REG_PLAY_CONTROL = 0x7f004050ul,
      REG_PWM_DUTY = 0x7f00612cul,
      REG_PWM_HZ = 0x7f006128ul,
      REG_RE_ACTIVE = 0x7f006028ul,
      REG_RE_DEST = 0x7f006010ul,
      REG_RE_DITHER = 0x7f006024ul,
      REG_RE_FORMAT = 0x7f006014ul,
      REG_RE_H = 0x7f006020ul,
      REG_RE_RENDERS = 0x7f00602cul,
      REG_RE_ROTATE = 0x7f006018ul,
      REG_RE_TESTMODE = 0x7f006030ul,
      REG_RE_W = 0x7f00601cul,
      REG_SC0_PTR0 = 0x7f00603cul,
      REG_SC0_PTR1 = 0x7f006040ul,
      REG_SC0_PTR2 = 0x7f006044ul,
      REG_SC0_PTR3 = 0x7f006048ul,
      REG_SC0_RESET = 0x7f006034ul,
      REG_SC0_SIZE = 0x7f006038ul,
      REG_SC1_I_PTR = 0x7f006084ul,
      REG_SC1_I_READY = 0x7f006080ul,
      REG_SC1_I_VALID = 0x7f00607cul,
      REG_SC1_PTR0 = 0x7f006054ul,
      REG_SC1_PTR1 = 0x7f006058ul,
      REG_SC1_PTR2 = 0x7f00605cul,
      REG_SC1_PTR3 = 0x7f006060ul,
      REG_SC1_RESET = 0x7f00604cul,
      REG_SC1_SIZE = 0x7f006050ul,
      REG_SC2_ADDR = 0x7f006784ul,
      REG_SC2_PTR0 = 0x7f00606cul,
      REG_SC2_PTR1 = 0x7f006070ul,
      REG_SC2_PTR2 = 0x7f006074ul,
      REG_SC2_PTR3 = 0x7f006078ul,
      REG_SC2_RESET = 0x7f006064ul,
      REG_SC2_SIZE = 0x7f006068ul,
      REG_SC2_STATUS = 0x7f006780ul,
      REG_SOUND = 0x7f0060d4ul,
      REG_SO_EN = 0x7f006600ul,
      REG_SO_FORMAT = 0x7f0065fcul,
      REG_SO_MODE = 0x7f0065f4ul,
      REG_SO_SOURCE = 0x7f0065f8ul,
      REG_SYS_CFG = 0x7f800420ul,
      REG_SYS_STAT = 0x7f800424ul,
      REG_TAG = 0x7f0060c4ul,
      REG_TAG_X = 0x7f0060bcul,
      REG_TAG_Y = 0x7f0060c0ul,
      REG_TOUCH_CONFIG = 0x7f0061b4ul,
      REG_TOUCH_MODE = 0x7f006158ul,
      REG_TOUCH_RAW_XY = 0x7f006164ul,
      REG_TOUCH_SCREEN_XY = 0x7f006160ul,
      REG_TOUCH_TAG = 0x7f006178ul,
      REG_TOUCH_TAG1 = 0x7f006180ul,
      REG_TOUCH_TAG1_XY = 0x7f00617cul,
      REG_TOUCH_TAG2 = 0x7f006188ul,
      REG_TOUCH_TAG2_XY = 0x7f006184ul,
      REG_TOUCH_TAG3 = 0x7f006190ul,
      REG_TOUCH_TAG3_XY = 0x7f00618cul,
      REG_TOUCH_TAG4 = 0x7f006198ul,
      REG_TOUCH_TAG4_XY = 0x7f006194ul,
      REG_TOUCH_TAG_XY = 0x7f006174ul,
      REG_TOUCH_TRANSFORM_A = 0x7f00619cul,
      REG_TOUCH_TRANSFORM_B = 0x7f0061a0ul,
      REG_TOUCH_TRANSFORM_C = 0x7f0061a4ul,
      REG_TOUCH_TRANSFORM_D = 0x7f0061a8ul,
      REG_TOUCH_TRANSFORM_E = 0x7f0061acul,
      REG_TOUCH_TRANSFORM_F = 0x7f0061b0ul,
      REG_TRACKER = 0x7f004000ul,
      REG_TRACKER_1 = 0x7f004004ul,
      REG_TRACKER_2 = 0x7f004008ul,
      REG_TRACKER_3 = 0x7f00400cul,
      REG_TRACKER_4 = 0x7f004010ul,
      REG_VCYCLE = 0x7f0060a0ul,
      REG_VOFFSET = 0x7f0060a4ul,
      REG_VOL_L_PB = 0x7f0060c8ul,
      REG_VOL_R_PB = 0x7f0060ccul,
      REG_VOL_SOUND = 0x7f0060d0ul,
      REG_VSIZE = 0x7f0060a8ul,
      REG_VSYNC0 = 0x7f0060acul,
      REG_VSYNC1 = 0x7f0060b0ul,
    };

  public:
    uint16_t DISP_WIDTH(void);
    uint16_t DISP_HEIGHT(void);

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
    } GPU_FONT_HEADER;

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
    } GPU_EXT_FONT_HEADER;

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
    } GPU_EXT2_FONT_HEADER;

    typedef struct
    {
        /* Pointer to font graphics raw data */
        uint32_t    PointerToFontGraphicsData;
        /* Width of font character */
        uint32_t    Width;
    } GPU_EXT2_CHAR_DESCRIPTOR;

  private:
    void setpanel(uint32_t panel);
};

#endif    /* _BTEVE_H_ */
