#ifndef REG24LE1_H
#define REG24LE1_H

#include "compiler_mcs51.h"

//-----------------------------------------------------------------------------
// Byte Registers
//-----------------------------------------------------------------------------

SFR(P0,			0x80);
SFR(SP,			0x81);
SFR(DPL,		0x82);
SFR(DPH,		0x83);
SFR(DPL1,		0x84);
SFR(DPH1,		0x85);
SFR(PCON,		0x87);
SFR(TCON,		0x88);
SFR(TMOD,		0x89);
SFR(TL0,		0x8A);
SFR(TL1,		0x8B);
SFR(TH0,		0x8C);
SFR(TH1,		0x8D);
SFR(P3CON,		0x8F);
SFR(P1,			0x90);
SFR(DPS,		0x92);
SFR(P0DIR,		0x93);
SFR(P1DIR,		0x94);
SFR(P2DIR,		0x95);
SFR(P3DIR,		0x96);
SFR(P2CON,		0x97);
SFR(S0CON,		0x98);
SFR(S0BUF,		0x99);
SFR(P0CON,		0x9E);
SFR(P1CON,		0x9F);
SFR(P2,			0xA0);
SFR(PWMDC0,		0xA1);
SFR(PWMDC1,		0xA2);
SFR(CLKCTRL,	0xA3);
SFR(PWRDWN,		0xA4);
SFR(WUCON,		0xA5);
SFR(INTEXP,		0xA6);
SFR(MEMCON,		0xA7);
SFR(IEN0,		0xA8);
SFR(IP0,		0xA9);
SFR(S0RELL,		0xAA);
SFR(RTC2CPT01,	0xAB);
SFR(RTC2CPT10,	0xAC);
SFR(CLKLFCTRL,	0xAD);
SFR(OPMCON,		0xAE);
SFR(WDSV,		0xAF);
SFR(P3,			0xB0);
SFR(RSTREAS,	0xB1);
SFR(PWMCON,		0xB2);
SFR(RTC2CON,	0xB3);
SFR(RTC2CMP0,	0xB4);
SFR(RTC2CMP1,	0xB5);
SFR(RTC2CPT00,	0xB6);
SFR(SPISRDSZ,	0xB7);
SFR(IEN1,		0xB8);
SFR(IP1,		0xB9);
SFR(S0RELH,		0xBA);
SFR(SPISCON0,	0xBC);
SFR(SPISCON1,	0xBD);
SFR(SPISSTAT,	0xBE);
SFR(SPISDAT,	0xBF);
SFR(IRCON,		0xC0);
SFR(CCEN,		0xC1);
SFR(CCL1,		0xC2);
SFR(CCH1,		0xC3);
SFR(CCL2,		0xC4);
SFR(CCH2,		0xC5);
SFR(CCL3,		0xC6);
SFR(CCH3,		0xC7);
SFR(T2CON,		0xC8);
SFR(MPAGE,		0xC9);
SFR(CRCL,		0xCA);
SFR(CRCH,		0xCB);
SFR(TL2,		0xCC);
SFR(TH2,		0xCD);
SFR(WUOPC1,		0xCE);
SFR(WUOPC0,		0xCF);
SFR(PSW,		0xD0);
SFR(ADCCON3,	0xD1);
SFR(ADCCON2,	0xD2);
SFR(ADCCON1,	0xD3);
SFR(ADCDATH,	0xD4);
SFR(ADCDATL,	0xD5);
SFR(RNGCTL,		0xD6);
SFR(RNGDAT,		0xD7);
SFR(ADCON,		0xD8);
SFR(W2SADR,		0xD9);
SFR(W2DAT,		0xDA);
SFR(COMPCON,	0xDB);
SFR(POFCON,		0xDC);
SFR(CCPDATIA,	0xDD);
SFR(CCPDATIB,	0xDE);
SFR(CCPDATO,	0xDF);
SFR(ACC,		0xE0);
SFR(W2CON1,		0xE1);
SFR(W2CON0,		0xE2);
SFR(SPIRCON0,	0xE4);
SFR(SPIRCON1,	0xE5);
SFR(SPIRSTAT,	0xE6);
SFR(SPIRDAT,	0xE7);
SFR(RFCON,		0xE8);
SFR(MD0,		0xE9);
SFR(MD1,		0xEA);
SFR(MD2,		0xEB);
SFR(MD3,		0xEC);
SFR(MD4,		0xED);
SFR(MD5,		0xEE);
SFR(ARCON,		0xEF);
SFR(B,			0xF0);
SFR(FSR,		0xF8);
SFR(FPCR,		0xF9);
SFR(FCR,		0xFA);
SFR(FDCR,		0xFB);
SFR(SPIMCON0,	0xFC);
SFR(SPIMCON1,	0xFD);
SFR(SPIMSTAT,	0xFE);
SFR(SPIMDAT,	0xFF);

//-----------------------------------------------------------------------------
// Word Registers
//-----------------------------------------------------------------------------

SFR16(CC1,	0xC2);
SFR16(CC2,	0xC4);
SFR16(CC3,	0xC6);
SFR16(CRC,	0xCA);
SFR16(T2,	0xCC);


// FSR
SBIT(MCDIS,		0xF8, 7);
SBIT(STP,		0xF8, 6);
SBIT(WEN,		0xF8, 5);
SBIT(RDYN,		0xF8, 4);
SBIT(INFEN,		0xF8, 3);
SBIT(RDISMB,	0xF8, 2);
SBIT(RDEND,		0xF8, 1);
SBIT(WPEN,		0xF8, 0);

// PSW
SBIT(CY,	0xD0, 7);
SBIT(AC,	0xD0, 6);
SBIT(F0,	0xD0, 5);
SBIT(RS1,	0xD0, 4);
SBIT(RS0,	0xD0, 3);
SBIT(OV,	0xD0, 2);
SBIT(P,		0xD0, 0);

// TCON
SBIT(TF1,	0x88, 7);
SBIT(TR1,	0x88, 6);
SBIT(TF0,	0x88, 5);
SBIT(TR0,	0x88, 4);
SBIT(IE1,	0x88, 3);
SBIT(IT1,	0x88, 2);
SBIT(IE0,	0x88, 1);
SBIT(IT0,	0x88, 0);

// S0CON
SBIT(SM0,	0x98, 7);
SBIT(SM1,	0x98, 6);
SBIT(SM20,	0x98, 5);
SBIT(REN0,	0x98, 4);
SBIT(TB80,	0x98, 3);
SBIT(RB80,	0x98, 2);
SBIT(TI0,	0x98, 1);
SBIT(RI0,	0x98, 0);

// T2CON
SBIT(T2PS,	0xC8, 7);
SBIT(I3FR,	0xC8, 6);
SBIT(I2FR,	0xC8, 5);
SBIT(T2R1,	0xC8, 4);
SBIT(T2R0,	0xC8, 3);
SBIT(T2CM,	0xC8, 2);
SBIT(T2I1,	0xC8, 1);
SBIT(T2I0,	0xC8, 0);

// IEN0
SBIT(EA,	0xA8, 7);
SBIT(ET2,	0xA8, 5);
SBIT(ES0,	0xA8, 4);
SBIT(ET1,	0xA8, 3);
SBIT(EX1,	0xA8, 2);
SBIT(ET0,	0xA8, 1);
SBIT(EX0,	0xA8, 0);

// IEN1
SBIT(EXEN2,	0xB8, 7);
SBIT(WUIRQ,	0xB8, 5);
SBIT(USB,	0xB8, 4);
SBIT(USBWU,	0xB8, 3);
SBIT(SPI,	0xB8, 2);
SBIT(RF,	0xB8, 1);
SBIT(RFSPI,	0xB8, 0);

// IRCON 0xC0
SBIT(EXF2,		0xC0, 7);
SBIT(TF2,		0xC0, 6);
SBIT(WUF,		0xC0, 5);
SBIT(MISCF,		0xC0, 4);
SBIT(WUPINF,	0xC0, 3);
SBIT(SPIF,		0xC0, 2);
SBIT(RFIRQ,		0xC0, 1);
SBIT(RFSPIF,	0xC0, 0);	// RFRDY

// PORT0-3
SBIT(P00, 0x80, 0);
SBIT(P01, 0x80, 1);
SBIT(P02, 0x80, 2);
SBIT(P03, 0x80, 3);
SBIT(P04, 0x80, 4);
SBIT(P05, 0x80, 5);
SBIT(P06, 0x80, 6);
SBIT(P07, 0x80, 7);

SBIT(P10, 0x90, 0);
SBIT(P11, 0x90, 1);
SBIT(P12, 0x90, 2);
SBIT(P13, 0x90, 3);
SBIT(P14, 0x90, 4);
SBIT(P15, 0x90, 5);
SBIT(P16, 0x90, 6);
SBIT(P17, 0x90, 7);

SBIT(P20, 0xA0, 0);
SBIT(P21, 0xA0, 1);
SBIT(P22, 0xA0, 2);
SBIT(P23, 0xA0, 3);
SBIT(P24, 0xA0, 4);
SBIT(P25, 0xA0, 5);
SBIT(P26, 0xA0, 6);
SBIT(P27, 0xA0, 7);

SBIT(P30, 0xB0, 0);
SBIT(P31, 0xB0, 1);
SBIT(P32, 0xB0, 2);
SBIT(P33, 0xB0, 3);
SBIT(P34, 0xB0, 4);
SBIT(P35, 0xB0, 5);
SBIT(P36, 0xB0, 6);
SBIT(P37, 0xB0, 7);

// RFCON
SBIT(RFCE,		0xE8, 0);
SBIT(RFCSN,		0xE8, 1);
SBIT(RFCKEN,	0xE8, 2);

#define INTERRUPT_IPF		0	// Interrupt from pin
#define INTERRUPT_T0		1	// Timer0 Overflow
#define INTERRUPT_POFIRQ	2	// Power failure interrupt
#define INTERRUPT_T1		3	// Timer1 Overflow
#define INTERRUPT_UART0		4	// UART0, Receive & Transmitt interrupt
#define INTERRUPT_T2		5	// Timer2 Overflow / external reload
#define INTERRUPT_RFRDY		8	// RF SPI ready interrupt
#define INTERRUPT_RFIRQ		9	// RF interrupt
#define INTERRUPT_SERIAL	10	// SPI or 2-wire interrupt
#define INTERRUPT_WUOPIRQ	11	// Wakeup on pin interrupt
#define INTERRUPT_MISCIRQ	12	// Misc interrupt
#define INTERRUPT_TICK		13	// Internal Wakeup


// power down modes
#define PWRDWN_DEEP_SLEEP		0x01
#define PWRDWN_MEM_RET_TMR_OFF	0x02
#define PWRDWN_MEM_RET_TMR_ON	0x03
#define PWRDWN_REG_RET			0x04
#define PWRDWN_STANDBY			0x07

#endif	// REG24LE1_H
