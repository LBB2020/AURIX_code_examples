/**********************************************************************************************************************
 * \file scr_rtc.h
 * \copyright Copyright (C) Infineon Technologies AG 2019
 *
 * Use of this file is subject to the terms of use agreed between (i) you or the company in which ordinary course of
 * business you are acting and (ii) Infineon Technologies AG or its licensees. If and as long as no such terms of use
 * are agreed, use of this file is subject to following:
 *
 * Boost Software License - Version 1.0 - August 17th, 2003
 *
 * Permission is hereby granted, free of charge, to any person or organization obtaining a copy of the software and
 * accompanying documentation covered by this license (the "Software") to use, reproduce, display, distribute, execute,
 * and transmit the Software, and to prepare derivative works of the Software, and to permit third-parties to whom the
 * Software is furnished to do so, all subject to the following:
 *
 * The copyright notices in the Software and this entire statement, including the above license grant, this restriction
 * and the following disclaimer, must be included in all copies of the Software, in whole or in part, and all
 * derivative works of the Software, unless such copies or derivative works are solely in the form of
 * machine-executable object code generated by a source language processor.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT SHALL THE
 * COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN
 * CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *********************************************************************************************************************/
#ifndef SCR_RTC__SDCCH
#define SCR_RTC_SDCC_H

#include "scr_generic_defs.h"

__sfr __at(ADDR_SCR_RTC_CON)     SCR_RTC_CON;
/* #define RTC_RTCON_RTCC */
__sfr __at(ADDR_SCR_RTC_CNT0)     SCR_RTC_CNT0;
__sfr __at(ADDR_SCR_RTC_CNT1)     SCR_RTC_CNT1;
__sfr __at(ADDR_SCR_RTC_CNT2)     SCR_RTC_CNT2;
__sfr __at(ADDR_SCR_RTC_CNT3)     SCR_RTC_CNT3;
__sfr __at(ADDR_SCR_RTC_CR0)     SCR_RTC_RTCCR0;
__sfr __at(ADDR_SCR_RTC_CR1)     SCR_RTC_RTCCR1;
__sfr __at(ADDR_SCR_RTC_CR2)     SCR_RTC_RTCCR2;
__sfr __at(ADDR_SCR_RTC_CR3)     SCR_RTC_RTCCR3;
__sfr __at(ADDR_SCR_IO_PAGE)     SCR_IO_PAGE;
__sfr __at(ADDR_SCR_P00_IOCR5)     SCR_P00_IOCR5;
__sfr __at(ADDR_SCR_P00_OUT)     SCR_P00_OUT;
__sfr __at(ADDR_SCR_P00_PDISC)     SCR_P00_PDISC;
__sfr __at(ADDR_SCR_P00_OMTR)     SCR_P00_OMTR;
__sfr __at(ADDR_SCR_P01_OMTR)     SCR_P01_OMTR;
__sfr __at(ADDR_SCR_SCU_STDBYWKP)     SCR_SCU_STDBYWKP;

#endif
