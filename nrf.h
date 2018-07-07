#ifdef NRF24LE1
#include <reg24le1.h>
#elif defined(NRF24LU1)
#include <reg24lu1.h>
#else
#error "No target chosen!"
#endif

#define _BV(x)	(1 << (x))

// RF module stuff

/* main commands */

// NOP = read status register
#define NCMD_STATUS	255
// read register (or with register number)
#define NCMD_R_REGISTER	0b00000000
// write register (or with register number)
#define NCMD_W_REGISTER	0b00100000
// read RX payload
#define NCMD_R_RX_PAYLOAD	0b01100001
// write TX payload
#define NCMD_W_TX_PAYLOAD	0b10100000
// flush commands
#define NCMD_FLUSH_TX	0b11100001
#define NCMD_FLUSH_RX	0b11100010
// activate
#define NCMD_ACTIVATE	0b01010000
// read Rx size
#define NCMD_R_RX_PL_WID	0b01100000
// reuse payload
#define REUSE_TX_PL	0b11100011


/* registers */

// config bits
#define NREG_CONFIG	0
// auto ACK bit field for 6 data pipes
#define NREG_EN_AA	1
// bit field to enable RX 6 data pipes
#define NREG_EN_RXADDR	2
// address width; 1 = 3B; 2 = 4B; 3 = 5B
#define NREG_SETUP_AW	3
// HI = retransmit delay; LO = retransmit count
#define NREG_SETUP_RETR	4
// RF channel (0 - 127)
#define NREG_RF_CH	5
// 0000RPPG; R = 1Mbsp/2Mbsp; P = TX power; G = LNA gain
#define NREG_RF_SETUP	6
// status register
#define NREG_STATUS	7
// RX pipe addresses
#define NREG_RX_ADDR_P0	10 // 5b
#define NREG_RX_ADDR_P1	11 // 5b
#define NREG_RX_ADDR_P2	12 // 1b; 4b taken from P1
#define NREG_RX_ADDR_P3	13 // 1b; 4b taken from P1
#define NREG_RX_ADDR_P4	14 // 1b; 4b taken from P1
#define NREG_RX_ADDR_P5	15 // 1b; 4b taken from P1
// TX pipe address
#define NREG_TX_ADDR	16
// pipe paload sizes (0-32); 0 = pipe disabled
#define NREG_RX_PW_P0	17
#define NREG_RX_PW_P1	18
#define NREG_RX_PW_P2	19
#define NREG_RX_PW_P3	20
#define NREG_RX_PW_P4	21
#define NREG_RX_PW_P5	22
// fifo status
#define NREG_FIFO_STATUS	23
// dynamic Rx len
#define NREG_DYNPD	28
// feature
#define NREG_FEATURE	29

/* config bits */

// enable RX_DR on IRQ pin
#define NCFG_MASK_RX_DR	0b01000000
// enable TX_DS on IRQ pin
#define NCFG_MASK_TX_DS	0b00100000
// enable MAX_RT on IRQ pin
#define NCFG_MASK_MAX_RT	0b00010000
// enable CRC
#define NCFG_EN_CRC	0b00001000
// CRC type; 0 = 1 byte; 1 = 2 bytes
#define NCFG_CRCO	0b00000100
// power
#define NCFG_PWR_UP	0b00000010
// 0 = transmit; 1 = receive
#define NCFG_PRIM_RX	0b00000001


/* status bits */

// data ready on RX
#define NSTAT_RX_DR	0b01000000
// data sent on TX
#define NSTAT_TX_DS	0b00100000
// max TX retransmit reached
#define NSTAT_MAX_RT	0b00010000
// last RX data pipe number
#define NSTAT_RX_PIPE_MASK	0b00001110
// TX fifo full
#define NSTAT_TX_FULL	0b00000001

/* feature bits */

// enable dynamic Rx len
#define NCFG_EN_DPL	4

