//------------------------------------------------------------------------------
// TI Confidential - NDA Restrictions
//
// Copyright (c) 2011 Texas Instruments, Inc.
//
//    This is an unpublished work created in the year stated above.
//    Texas Instruments owns all rights in and to this work and
//    intends to maintain and protect it as an unpublished copyright.
//    In the event of either inadvertent or deliberate publication,
//    the above stated date shall be treated as the year of first
//    publication. In the event of such publication, Texas Instruments
//    intends to enforce its rights in the work under the copyright
//    laws as a published work.
//
//------------------------------------------------------------------------------
///
/// \file            common_cmd.h
/// \brief           Definitions of API for common/generic commands 
///
///                  This file is generated by create_command.pl
///
/// \author          Low Power RF Wireless Business Unit
///                  Helge Coward (h.coward@ti.com)
///
/// \date            Thu Nov 17 10:26:10 CET 2011
///
//------------------------------------------------------------------------------

#ifndef __COMMON_CMD_H
#define __COMMON_CMD_H

#include <stdint.h>
#include "mailbox.h"

typedef struct {
   uint16_t commandNo;
} rfc_command_t;

typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
} rfc_radioOp_t;

#define CMD_NOP                                                 0x0801
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
} rfc_CMD_NOP_t;

#define CMD_RADIO_SETUP                                         0x0802
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
   uint8_t mode;
   uint8_t __dummy0; //also known as IoDivider
   struct {
      uint16_t frontEndMode:3;
      uint16_t biasMode:1;
      uint16_t bNoAdi0Setup:1;
      uint16_t bNoAdi0Trim:1;
      uint16_t bNoAdi0Ovr:1;
      uint16_t bNoAdi1Setup:1;
      uint16_t bNoAdi1Trim:1;
      uint16_t bNoAdi1Ovr:1;
      uint16_t bNoFsPowerUp:1;
   } config;
   struct {
      uint16_t IB:6;
      uint16_t GC:2;
      //LH: Not sure if essential, but the bit field is set to be a part of tempCoeff
      //uint16_t boost:1;
      //NB! if the above bitfield is enabled, tempCoeff should occupy 7 bits instead of 8
      uint16_t tempCoeff:8;
   } txPower;
   uint32_t* pRegOverride;
} rfc_CMD_RADIO_SETUP_t;

#define CMD_FS                                                  0x0803
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
   uint16_t frequency;
   uint16_t fractFreq;
   struct {
      uint8_t bTxMode:1;
      uint8_t refFreq:6;
   } synthConf;
   struct {
      uint8_t bOverrideCalib:1;
      uint8_t bSkipTdcCalib:1;
      uint8_t bSkipCoarseCalib:1;
      uint8_t bSkipMidCalib:1;
      uint8_t coarsePrecal:4;
   } calibConf;
   uint8_t midPrecal;
   uint8_t ktPrecal;
   uint16_t tdcPrecal;
} rfc_CMD_FS_t;

#define CMD_FS_OFF                                              0x0804
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
} rfc_CMD_FS_OFF_t;

#define CMD_RX                                                  0x0805
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
   struct {
      uint16_t endianness:1;
      uint16_t numHdrBits:6;
      uint16_t bFsOff:1;
      uint16_t bUseCrc:1;
      uint16_t bCrcIncSw:1;
      uint16_t bCrcIncHdr:1;
      uint16_t bReportCrc:1;
      uint16_t endType:1;
      uint16_t bDualSw:1;
   } pktConfig;
   uint32_t syncWord;
   uint32_t syncWord2;
   struct {
      uint16_t numLenBits:4;
      uint16_t lenFieldPos:5;
      uint16_t lenOffset:7;
   } lenConfig;
   uint16_t maxLen;
   uint8_t* pRecPkt;
   ratmr_t endTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } endTrigger;
   int8_t rssi;
   uint16_t recLen;
   ratmr_t timeStamp;
   uint16_t nRxOk;
   uint16_t nRxNok;
   uint16_t nRx2Ok;
   uint16_t nRx2Nok;
} rfc_CMD_RX_t;

#define CMD_TX                                                  0x0806
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
   struct {
      uint16_t endianness:1;
      uint16_t numHdrBits:6;
      uint16_t bFsOff:1;
      uint16_t bUseCrc:1;
      uint16_t bCrcIncSw:1;
      uint16_t bCrcIncHdr:1;
      uint16_t bReportCrc:1;
      uint16_t endType:1;
      uint16_t bDualSw:1;
   } pktConfig;
   uint32_t syncWord;
   uint8_t* pTxPkt;
   uint16_t pktLen;
} rfc_CMD_TX_t;

#define CMD_RX_TEST                                             0x0807
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
   struct {
      uint8_t bEnaFifo:1;
      uint8_t bFsOff:1;
      uint8_t bNoSync:1;
   } config;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } endTrigger;
   uint32_t syncWord;
   ratmr_t endTime;
} rfc_CMD_RX_TEST_t;

#define CMD_TX_TEST                                             0x0808
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
   struct {
      uint8_t bUseCw:1;
      uint8_t bFsOff:1;
      uint8_t whitenMode:2;
   } config;
   uint8_t __dummy0;
   uint16_t txWord;
   uint8_t __dummy1;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } endTrigger;
   uint32_t syncWord;
   ratmr_t endTime;
} rfc_CMD_TX_TEST_t;

#define CMD_SYNC_STOP_RAT                                       0x0809
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
   uint16_t __dummy0;
   ratmr_t rat0;
} rfc_CMD_SYNC_STOP_RAT_t;

#define CMD_SYNC_START_RAT                                      0x080A
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
   uint16_t __dummy0;
   ratmr_t rat0;
} rfc_CMD_SYNC_START_RAT_t;

#define CMD_COUNT                                               0x080B
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
   uint16_t counter;
} rfc_CMD_COUNT_t;

#define CMD_FS_POWERUP                                          0x080C
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
   uint16_t __dummy0;
   uint32_t* pRegOverride;
} rfc_CMD_FS_POWERUP_t;

#define CMD_FS_POWERDOWN                                        0x080D
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
} rfc_CMD_FS_POWERDOWN_t;

#define CMD_TOPSM_COPY                                          0x080E
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
   int8_t mceBank;
   int8_t rfeBank;
   uint16_t mceStopAddr;
   uint16_t rfeStopAddr;
} rfc_CMD_TOPSM_COPY_t;

#define CMD_WRITE_ADDR                                          0x080F
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
   uint8_t type;
   uint8_t __dummy0;
   uint8_t* address;
   uint32_t value;
} rfc_CMD_WRITE_ADDR_t;

#define CMD_SCH_IMM                                             0x0810
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
   uint16_t __dummy0;
   uint32_t cmdrVal;
   uint32_t cmdstaVal;
} rfc_CMD_SCH_IMM_t;

#define CMD_USER_FUN                                            0x0811
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
   uint16_t __dummy0;
   uint32_t userFunAddr;
} rfc_CMD_USER_FUN_t;

#define CMD_COUNT_BRANCH                                        0x0812
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
   uint16_t counter;
   uint8_t* pNextOpIfOk;
} rfc_CMD_COUNT_BRANCH_t;

#define CMD_PATTERN_CHECK                                       0x0813
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
   struct {
      uint16_t operation:2;
      uint16_t bByteRev:1;
      uint16_t bBitRev:1;
      uint16_t signExtend:5;
      uint16_t bRxVal:1;
   } patternOpt;
   uint8_t* pNextOpIfOk;
   uint8_t* pValue;
   uint32_t mask;
   uint32_t compareVal;
} rfc_CMD_PATTERN_CHECK_t;

#define CMD_ANALOG_POWERDOWN                                    0x0814
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
} rfc_CMD_ANALOG_POWERDOWN_t;

#define CMD_FG_NOP                                              0x0C01
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
} rfc_CMD_FG_NOP_t;

#define CMD_FG_COUNT                                            0x0C0B
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
   uint16_t counter;
} rfc_CMD_FG_COUNT_t;

#define CMD_FG_SCH_IMM                                          0x0C10
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
   uint16_t __dummy0;
   uint32_t cmdrVal;
   uint32_t cmdstaVal;
} rfc_CMD_FG_SCH_IMM_t;

#define CMD_FG_COUNT_BRANCH                                     0x0C12
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
   uint16_t counter;
   uint8_t* pNextOpIfOk;
} rfc_CMD_FG_COUNT_BRANCH_t;

#define CMD_FG_PATTERN_CHECK                                    0x0C13
typedef struct {
   uint16_t commandNo;
   uint16_t status;
   uint8_t* pNextOp;
   ratmr_t startTime;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } startTrigger;
   struct {
      uint8_t rule:4;
      uint8_t nSkip:4;
   } condition;
   struct {
      uint16_t operation:2;
      uint16_t bByteRev:1;
      uint16_t bBitRev:1;
      uint16_t signExtend:5;
      uint16_t bRxVal:1;
   } patternOpt;
   uint8_t* pNextOpIfOk;
   uint8_t* pValue;
   uint32_t mask;
   uint32_t compareVal;
} rfc_CMD_FG_PATTERN_CHECK_t;

#define CMD_ABORT                                               0x0401
typedef struct {
   uint16_t commandNo;
} rfc_CMD_ABORT_t;

#define CMD_STOP                                                0x0402
typedef struct {
   uint16_t commandNo;
} rfc_CMD_STOP_t;

#define CMD_GET_RSSI                                            0x0403
typedef struct {
   uint16_t commandNo;
} rfc_CMD_GET_RSSI_t;

#define CMD_UPDATE_RADIO_SETUP                                  0x0001
typedef struct {
   uint16_t commandNo;
   uint16_t __dummy0;
   uint32_t* pRegOverride;
} rfc_CMD_UPDATE_RADIO_SETUP_t;

#define CMD_TRIGGER                                             0x0404
typedef struct {
   uint16_t commandNo;
   uint8_t triggerNo;
} rfc_CMD_TRIGGER_t;

#define CMD_GET_FW_INFO                                         0x0002
typedef struct {
   uint16_t commandNo;
   uint16_t versionNo;
   uint16_t startOffset;
   uint16_t freeRamSz;
   uint16_t availRatCh;
} rfc_CMD_GET_FW_INFO_t;

#define CMD_START_RAT                                           0x0405
typedef struct {
   uint16_t commandNo;
} rfc_CMD_START_RAT_t;

#define CMD_PING                                                0x0406
typedef struct {
   uint16_t commandNo;
} rfc_CMD_PING_t;

#define CMD_READ_RFREG                                          0x0601
typedef struct {
   uint16_t commandNo;
   uint16_t address;
   uint32_t value;
} rfc_CMD_READ_RFREG_t;

#define CMD_WRITE_RFREG                                         0x0003
typedef struct {
   uint16_t commandNo;
   uint16_t address;
   uint32_t value;
} rfc_CMD_WRITE_RFREG_t;

#define CMD_MODIFY_RFREG                                        0x0004
typedef struct {
   uint16_t commandNo;
   uint16_t address;
   uint32_t clearMask;
   uint32_t setMask;
} rfc_CMD_MODIFY_RFREG_t;

#define CMD_READ_ADI0REG                                        0x040B
typedef struct {
   uint16_t commandNo;
   struct {
      uint8_t bHalfSize:1;
      uint8_t :1;
      uint8_t address:6;
   } adiAddr;
   uint8_t adiValue;
} rfc_CMD_READ_ADI0REG_t;

#define CMD_WRITE_ADI0REG                                       0x0605
typedef struct {
   uint16_t commandNo;
   struct {
      uint8_t bHalfSize:1;
      uint8_t :1;
      uint8_t address:6;
   } adiAddr;
   uint8_t adiValue;
} rfc_CMD_WRITE_ADI0REG_t;

#define CMD_READ_ADI1REG                                        0x040C
typedef struct {
   uint16_t commandNo;
   struct {
      uint8_t bHalfSize:1;
      uint8_t :1;
      uint8_t address:6;
   } adiAddr;
   uint8_t adiValue;
} rfc_CMD_READ_ADI1REG_t;

#define CMD_WRITE_ADI1REG                                       0x0606
typedef struct {
   uint16_t commandNo;
   struct {
      uint8_t bHalfSize:1;
      uint8_t :1;
      uint8_t address:6;
   } adiAddr;
   uint8_t adiValue;
} rfc_CMD_WRITE_ADI1REG_t;

#define CMD_FORCE_CLK_ENA                                       0x0607
typedef struct {
   uint16_t commandNo;
   uint16_t forceClkEna;
} rfc_CMD_FORCE_CLK_ENA_t;

#define CMD_ADD_DATA_ENTRY                                      0x0005
typedef struct {
   uint16_t commandNo;
   uint16_t __dummy0;
   dataQueue_t* pQueue;
   uint8_t* pEntry;
} rfc_CMD_ADD_DATA_ENTRY_t;

#define CMD_READ_FWPAR                                          0x000B
typedef struct {
   uint16_t commandNo;
   struct {
      uint16_t fwAddr:11;
      uint16_t type:2;
   } address;
   uint32_t value;
} rfc_CMD_READ_FWPAR_t;

#define CMD_WRITE_FWPAR                                         0x000C
typedef struct {
   uint16_t commandNo;
   struct {
      uint16_t fwAddr:11;
      uint16_t type:2;
   } address;
   uint32_t value;
} rfc_CMD_WRITE_FWPAR_t;

#define CMD_READ_FS_CAL                                         0x000D
typedef struct {
   uint16_t commandNo;
   uint8_t __dummy0;
   uint8_t coarseCal;
   uint8_t midCal;
   uint8_t ktCal;
   uint16_t tdcCal;
} rfc_CMD_READ_FS_CAL_t;

#define CMD_REMOVE_DATA_ENTRY                                   0x0006
typedef struct {
   uint16_t commandNo;
   uint16_t __dummy0;
   dataQueue_t* pQueue;
   uint8_t* pEntry;
} rfc_CMD_REMOVE_DATA_ENTRY_t;

#define CMD_FLUSH_QUEUE                                         0x0007
typedef struct {
   uint16_t commandNo;
   uint16_t __dummy0;
   dataQueue_t* pQueue;
   uint8_t* pFirstEntry;
} rfc_CMD_FLUSH_QUEUE_t;

#define CMD_CLEAR_RX                                            0x0008
typedef struct {
   uint16_t commandNo;
   uint16_t __dummy0;
   dataQueue_t* pQueue;
} rfc_CMD_CLEAR_RX_t;

#define CMD_REMOVE_PENDING_ENTRIES                              0x0009
typedef struct {
   uint16_t commandNo;
   uint16_t __dummy0;
   dataQueue_t* pQueue;
   uint8_t* pFirstEntry;
} rfc_CMD_REMOVE_PENDING_ENTRIES_t;

#define CMD_ENABLE_DBG                                          0x0602
typedef struct {
   uint16_t commandNo;
   struct {
      uint16_t :6;
      uint16_t sysTickCh:2;
      uint16_t mode1:1;
      uint16_t mode2:2;
      uint16_t mode3:1;
      uint16_t tsEn:1;
      uint16_t :1;
      uint16_t prescaler:2;
   } config;
} rfc_CMD_ENABLE_DBG_t;

#define CMD_DISABLE_DBG                                         0x0407
typedef struct {
   uint16_t commandNo;
} rfc_CMD_DISABLE_DBG_t;

#define CMD_SET_RAT_CMP                                         0x000A
typedef struct {
   uint16_t commandNo;
   uint8_t ratCh;
   uint8_t __dummy0;
   ratmr_t compareTime;
} rfc_CMD_SET_RAT_CMP_t;

#define CMD_SET_RAT_CPT                                         0x0603
typedef struct {
   uint16_t commandNo;
   struct {
      uint16_t :3;
      uint16_t inputSrc:5;
      uint16_t ratCh:4;
      uint16_t bRepeated:1;
      uint16_t inputMode:2;
   } config;
} rfc_CMD_SET_RAT_CPT_t;

#define CMD_DISABLE_RAT_CH                                      0x0408
typedef struct {
   uint16_t commandNo;
   uint8_t ratCh;
} rfc_CMD_DISABLE_RAT_CH_t;

#define CMD_SET_RAT_OUTPUT                                      0x0604
typedef struct {
   uint16_t commandNo;
   struct {
      uint16_t :2;
      uint16_t outputSel:3;
      uint16_t outputMode:3;
      uint16_t ratCh:4;
   } config;
} rfc_CMD_SET_RAT_OUTPUT_t;

#define CMD_ARM_RAT_CH                                          0x0409
typedef struct {
   uint16_t commandNo;
   uint8_t ratCh;
} rfc_CMD_ARM_RAT_CH_t;

#define CMD_DISARM_RAT_CH                                       0x040A
typedef struct {
   uint16_t commandNo;
   uint8_t ratCh;
} rfc_CMD_DISARM_RAT_CH_t;

#define CMD_MEMCPY                                              0x000E
typedef struct {
   uint16_t commandNo;
   uint16_t nWords;
   uint32_t* pDestAddr;
   uint32_t* pSrcAddr;
} rfc_CMD_MEMCPY_t;

#define CMD_MEMSET                                              0x000F
typedef struct {
   uint16_t commandNo;
   uint16_t nWords;
   uint32_t* pDestAddr;
   uint32_t value;
} rfc_CMD_MEMSET_t;

#define CMD_SET_TX_POWER                                        0x0010
typedef struct {
   uint16_t commandNo;
   struct {
      uint16_t IB:6;
      uint16_t GC:2;
      uint16_t tempCoeff:8;
   } txPower;
} rfc_CMD_SET_TX_POWER_t;

#define CMD_SET_TX_SHAPE                                        0x040D
typedef struct {
   uint16_t commandNo;
} rfc_CMD_SET_TX_SHAPE_t;

#define CMD_UPDATE_BAW_FREQ                                     0x0608
typedef struct {
   uint16_t commandNo;
   int16_t freqOffset;
} rfc_CMD_UPDATE_BAW_FREQ_t;

#define CMD_UPDATE_FS                                           0x0011
typedef struct {
   uint16_t commandNo;
   uint16_t frequency;
   uint16_t fractFreq;
} rfc_CMD_UPDATE_FS_t;

#define CMD_BUS_REQUEST                                         0x040E
typedef struct {
   uint16_t commandNo;
   uint8_t bSysBusNeeded;
} rfc_CMD_BUS_REQUEST_t;

#define CMD_READ_TRIM                                           0x040F
typedef struct {
   uint16_t commandNo;
} rfc_CMD_READ_TRIM_t;

#define CMD_SET_TRIM                                            0x0012
typedef struct {
   uint16_t commandNo;
   uint16_t __dummy0;
   uint32_t configIfAdc;
   uint32_t configRfFrontend;
   uint32_t configSynth;
   uint32_t configMiscAdc;
} rfc_CMD_SET_TRIM_t;

#endif
