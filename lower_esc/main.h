/*
 * lower_esc.h
 *
 *  Created on: 2021. 3. 9.
 *      Author: raven9315
 */

#ifndef MAIN_H_
#define MAIN_H_
//*****************************************************************************
//
//Target frequency for SMCLK in kHz
//
//*****************************************************************************
//#define CS_SMCLK_DESIRED_FREQUENCY_IN_KHZ   1000 //1M
#define CS_SMCLK_DESIRED_FREQUENCY_IN_KHZ   1048 //1.048M
//#define CS_SMCLK_DESIRED_FREQUENCY_IN_KHZ   8000 //8M
// Internal, trimmed, low-frequency oscillator with 32768 Hz typical frequency
//
//*****************************************************************************
#define UCS_REFOCLK_FREQUENCY                                             32768
//*****************************************************************************
//
//SMCLK/FLLRef Ratio
//
//*****************************************************************************
#define CS_SMCLK_FLLREF_RATIO   32 //1M
//#define CS_SMCLK_FLLREF_RATIO   244 //8M
//*****************************************************************************
//
// The following are values that can be passed to the clockSourceDivider
// parameter for functions: UCS_initClockSignal().
//
//*****************************************************************************
#define UCS_CLOCK_DIVIDER_1                                             DIVM__1
#define UCS_CLOCK_DIVIDER_2                                             DIVM__2
#define UCS_CLOCK_DIVIDER_4                                             DIVM__4
#define UCS_CLOCK_DIVIDER_8                                             DIVM__8
#define UCS_CLOCK_DIVIDER_12                                           DIVM__32
#define UCS_CLOCK_DIVIDER_16                                           DIVM__16
#define UCS_CLOCK_DIVIDER_32                                           DIVM__32

//*****************************************************************************
//
// The following are values that can be passed to the selectedClockSignal
// parameter for functions: UCS_initClockSignal().
//
//*****************************************************************************
#define UCS_ACLK                                                           0x01
#define UCS_MCLK                                                           0x02
#define UCS_SMCLK                                                          0x04
#define UCS_FLLREF                                                         0x08

#define SLAVE_ADDRESS 0x3f //0x48 0x49 0x4a 0x4b 0x90 0x92 0x94 0x96
// 0100 0011 0x40 // 1000 0001 0x80
// 0100 0011 0x40 // 1000 0001 0x80
// 0100 0011 0x40 // 1000 0001 0x80
// 0100 0011 0x41 // 1000 0010 0x82
// 0100 0010 0x42 // 1000 0100 0x84
// 0100 0011 0x43 // 1000 0110 0x86
// 0100 0100 0x44 // 1000 1000 0x88
// 0100 0101 0x45 // 1000 1010 0x8a
// 0100 1000 0x47 // 1000 1110 0x8e // 1001 0000 0x47
// 0100 1000 0x48 // 1001 0000 0x90
// 0100 1001 0x49 // 1001 0010 0x92
// 0100 1010 0x4a // 1001 0100 0x94
// 0100 1011 0x4b // 1001 0110 0x96

// 1001 0010 0x90 // 0001 0000 0x10 ***
// 1001 0010 0x92 // 0001 0010 0x12 ***
// 1001 0100 0x94 // 0010 1000 0x28
// 1001 0100 0x96 // 0010 1000 0x28 // 0010 1100 0x2c // 0001 0110 0x16
// 0010 1000 0x28 // 0101 0000 0x50


#endif /* MAIN_H_ */
