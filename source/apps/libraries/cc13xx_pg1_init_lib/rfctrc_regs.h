//-------------------------------------------------------------
// This file is automatically generated by topsmregs script:
//  /vobs/cc26xxIpDev/modules/topsm/hdl/script/topsmregs.pl -target c -base 0x40097000 -dat_sz 32 -i /vobs/cc26xxIpDev/modules/cc26_rfcore/doc/RFCTRCregs.txt
// File generated at 13-Jan-2012 21:52
//

#ifndef __RFCTRC_REGS_H
#define __RFCTRC_REGS_H

#include "hw_memmap.h"

#define rfctrc_base RF24_TRC_BASE
// --------------------------------------------------------------
// TRCCFG
// 
static volatile unsigned long* const SP_TRCCFG = (unsigned long*) (rfctrc_base + 0 );
#define S_TRCCFG (*SP_TRCCFG)
#define TRCCFG_PRESCAL                           6
#define TRCCFG_PRESCAL_BM                        0x000000C0
#define TRCCFG_TSCLR                             5
#define TRCCFG_TSCLR_BM                          0x00000020
#define TRCCFG_TSEN                              4
#define TRCCFG_TSEN_BM                           0x00000010
#define TRCCFG_CH3EN                             3
#define TRCCFG_CH3EN_BM                          0x00000008
#define TRCCFG_CH2EN                             1
#define TRCCFG_CH2EN_BM                          0x00000006
#define TRCCFG_CH1EN                             0
#define TRCCFG_CH1EN_BM                          0x00000001
// --------------------------------------------------------------
// TRCCH1CMD
// 
static volatile unsigned long* const SP_TRCCH1CMD = (unsigned long*) (rfctrc_base + 4 );
#define S_TRCCH1CMD (*SP_TRCCH1CMD)
#define TRCCH1CMD_CH1PKTHDR                      8
#define TRCCH1CMD_CH1PKTHDR_BM                   0x0000FF00
#define TRCCH1CMD_RESERVED                       3
#define TRCCH1CMD_RESERVED_BM                    0x000000F8
#define TRCCH1CMD_CH1PARCNT                      0
#define TRCCH1CMD_CH1PARCNT_BM                   0x00000007
// --------------------------------------------------------------
// TRCCH2CMD
// 
static volatile unsigned long* const SP_TRCCH2CMD = (unsigned long*) (rfctrc_base + 8 );
#define S_TRCCH2CMD (*SP_TRCCH2CMD)
#define TRCCH2CMD_CH2PKTHDR                      8
#define TRCCH2CMD_CH2PKTHDR_BM                   0x0000FF00
#define TRCCH2CMD_RESERVED                       3
#define TRCCH2CMD_RESERVED_BM                    0x000000F8
#define TRCCH2CMD_CH2PARCNT                      0
#define TRCCH2CMD_CH2PARCNT_BM                   0x00000007
// --------------------------------------------------------------
// TRCCH3CMD
// 
static volatile unsigned long* const SP_TRCCH3CMD = (unsigned long*) (rfctrc_base + 12 );
#define S_TRCCH3CMD (*SP_TRCCH3CMD)
#define TRCCH3CMD_CH3PKTHDR                      8
#define TRCCH3CMD_CH3PKTHDR_BM                   0x0000FF00
#define TRCCH3CMD_RESERVED                       3
#define TRCCH3CMD_RESERVED_BM                    0x000000F8
#define TRCCH3CMD_CH3PARCNT                      0
#define TRCCH3CMD_CH3PARCNT_BM                   0x00000007
// --------------------------------------------------------------
// TRCCH1PAR01
// 
static volatile unsigned long* const SP_TRCCH1PAR01 = (unsigned long*) (rfctrc_base + 20 );
#define S_TRCCH1PAR01 (*SP_TRCCH1PAR01)
#define TRCCH1PAR01_CH1PAR1                      16
#define TRCCH1PAR01_CH1PAR1_BM                   0xFFFF0000
#define TRCCH1PAR01_CH1PAR0                      0
#define TRCCH1PAR01_CH1PAR0_BM                   0x0000FFFF
// --------------------------------------------------------------
// TRCCH2PAR01
// 
static volatile unsigned long* const SP_TRCCH2PAR01 = (unsigned long*) (rfctrc_base + 24 );
#define S_TRCCH2PAR01 (*SP_TRCCH2PAR01)
#define TRCCH2PAR01_CH2PAR1                      16
#define TRCCH2PAR01_CH2PAR1_BM                   0xFFFF0000
#define TRCCH2PAR01_CH2PAR0                      0
#define TRCCH2PAR01_CH2PAR0_BM                   0x0000FFFF
// --------------------------------------------------------------
// TRCCH3PAR01
// 
static volatile unsigned long* const SP_TRCCH3PAR01 = (unsigned long*) (rfctrc_base + 28 );
#define S_TRCCH3PAR01 (*SP_TRCCH3PAR01)
#define TRCCH3PAR01_CH3PAR1                      16
#define TRCCH3PAR01_CH3PAR1_BM                   0xFFFF0000
#define TRCCH3PAR01_CH3PAR0                      0
#define TRCCH3PAR01_CH3PAR0_BM                   0x0000FFFF
// --------------------------------------------------------------
// TRCCH1PAR23
// 
static volatile unsigned long* const SP_TRCCH1PAR23 = (unsigned long*) (rfctrc_base + 36 );
#define S_TRCCH1PAR23 (*SP_TRCCH1PAR23)
#define TRCCH1PAR23_CH1PAR3                      16
#define TRCCH1PAR23_CH1PAR3_BM                   0xFFFF0000
#define TRCCH1PAR23_CH1PAR2                      0
#define TRCCH1PAR23_CH1PAR2_BM                   0x0000FFFF
// --------------------------------------------------------------
// TRCCH2PAR23
// 
static volatile unsigned long* const SP_TRCCH2PAR23 = (unsigned long*) (rfctrc_base + 40 );
#define S_TRCCH2PAR23 (*SP_TRCCH2PAR23)
#define TRCCH2PAR23_CH2PAR3                      16
#define TRCCH2PAR23_CH2PAR3_BM                   0xFFFF0000
#define TRCCH2PAR23_CH2PAR2                      0
#define TRCCH2PAR23_CH2PAR2_BM                   0x0000FFFF
// --------------------------------------------------------------
// TRCCH3PAR23
// 
static volatile unsigned long* const SP_TRCCH3PAR23 = (unsigned long*) (rfctrc_base + 44 );
#define S_TRCCH3PAR23 (*SP_TRCCH3PAR23)
#define TRCCH3PAR23_CH3PAR3                      16
#define TRCCH3PAR23_CH3PAR3_BM                   0xFFFF0000
#define TRCCH3PAR23_CH3PAR2                      0
#define TRCCH3PAR23_CH3PAR2_BM                   0x0000FFFF

#endif
