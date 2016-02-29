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
/// \file            ble_cmd.h
/// \brief           Definitions of API for Bluetooth Low Energy commands
///
///                  This file is generated by create_command.pl
///
/// \author          Low Power RF Wireless Business Unit
///                  Helge Coward (h.coward@ti.com)
///
/// \date            Thu Nov 17 10:26:10 CET 2011
///
//------------------------------------------------------------------------------

#ifndef __BLE_CMD_H
#define __BLE_CMD_H

#include <stdint.h>
#include "mailbox.h"

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
   uint8_t channel;
   struct {
      uint8_t init:7;
      uint8_t bOverride:1;
   } whitening;
   uint8_t* pParams;
   uint8_t* pOutput;
} rfc_bleRadioOp_t;

#define CMD_BLE_SLAVE                                           0x1801
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
   uint8_t channel;
   struct {
      uint8_t init:7;
      uint8_t bOverride:1;
   } whitening;
   uint8_t* pParams;
   uint8_t* pOutput;
} rfc_CMD_BLE_SLAVE_t;

#define CMD_BLE_MASTER                                          0x1802
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
   uint8_t channel;
   struct {
      uint8_t init:7;
      uint8_t bOverride:1;
   } whitening;
   uint8_t* pParams;
   uint8_t* pOutput;
} rfc_CMD_BLE_MASTER_t;

#define CMD_BLE_ADV                                             0x1803
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
   uint8_t channel;
   struct {
      uint8_t init:7;
      uint8_t bOverride:1;
   } whitening;
   uint8_t* pParams;
   uint8_t* pOutput;
} rfc_CMD_BLE_ADV_t;

#define CMD_BLE_ADV_DIR                                         0x1804
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
   uint8_t channel;
   struct {
      uint8_t init:7;
      uint8_t bOverride:1;
   } whitening;
   uint8_t* pParams;
   uint8_t* pOutput;
} rfc_CMD_BLE_ADV_DIR_t;

#define CMD_BLE_ADV_NC                                          0x1805
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
   uint8_t channel;
   struct {
      uint8_t init:7;
      uint8_t bOverride:1;
   } whitening;
   uint8_t* pParams;
   uint8_t* pOutput;
} rfc_CMD_BLE_ADV_NC_t;

#define CMD_BLE_ADV_SCAN                                        0x1806
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
   uint8_t channel;
   struct {
      uint8_t init:7;
      uint8_t bOverride:1;
   } whitening;
   uint8_t* pParams;
   uint8_t* pOutput;
} rfc_CMD_BLE_ADV_SCAN_t;

#define CMD_BLE_SCANNER                                         0x1807
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
   uint8_t channel;
   struct {
      uint8_t init:7;
      uint8_t bOverride:1;
   } whitening;
   uint8_t* pParams;
   uint8_t* pOutput;
} rfc_CMD_BLE_SCANNER_t;

#define CMD_BLE_INITIATOR                                       0x1808
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
   uint8_t channel;
   struct {
      uint8_t init:7;
      uint8_t bOverride:1;
   } whitening;
   uint8_t* pParams;
   uint8_t* pOutput;
} rfc_CMD_BLE_INITIATOR_t;

#define CMD_BLE_GENERIC_RX                                      0x1809
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
   uint8_t channel;
   struct {
      uint8_t init:7;
      uint8_t bOverride:1;
   } whitening;
   uint8_t* pParams;
   uint8_t* pOutput;
} rfc_CMD_BLE_GENERIC_RX_t;

#define CMD_BLE_TX_TEST                                         0x180A
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
   uint8_t channel;
   struct {
      uint8_t init:7;
      uint8_t bOverride:1;
   } whitening;
   uint8_t* pParams;
   uint8_t* pOutput;
} rfc_CMD_BLE_TX_TEST_t;

#define CMD_BLE_ADV_PAYLOAD                                     0x1001
typedef struct {
   uint16_t commandNo;
   uint8_t payloadType;
   uint8_t newLen;
   uint8_t* pNewData;
   uint8_t* pParams;
} rfc_CMD_BLE_ADV_PAYLOAD_t;

typedef struct {
   dataQueue_t* pRxQ;
   dataQueue_t* pTxQ;
   struct {
      uint8_t bAutoFlushIgnored:1;
      uint8_t bAutoFlushCrcErr:1;
      uint8_t bAutoFlushEmpty:1;
      uint8_t bIncludeLenByte:1;
      uint8_t bIncludeCrc:1;
      uint8_t bAppendRssi:1;
      uint8_t bAppendStatus:1;
      uint8_t bAppendTimestamp:1;
   } rxConfig;
   struct {
      uint8_t lastRxSn:1;
      uint8_t lastTxSn:1;
      uint8_t nextTxSn:1;
      uint8_t bFirstPkt:1;
      uint8_t bAutoEmpty:1;
      uint8_t bLlCtrlTx:1;
      uint8_t bLlCtrlAckRx:1;
      uint8_t bLlCtrlAckPending:1;
   } seqStat;
   uint8_t maxNack;
   uint8_t maxPkt;
   uint32_t accessAddress;
   uint32_t crcInit;
} rfc_bleMasterSlavePar_t;

typedef struct {
   dataQueue_t* pRxQ;
   dataQueue_t* pTxQ;
   struct {
      uint8_t bAutoFlushIgnored:1;
      uint8_t bAutoFlushCrcErr:1;
      uint8_t bAutoFlushEmpty:1;
      uint8_t bIncludeLenByte:1;
      uint8_t bIncludeCrc:1;
      uint8_t bAppendRssi:1;
      uint8_t bAppendStatus:1;
      uint8_t bAppendTimestamp:1;
   } rxConfig;
   struct {
      uint8_t lastRxSn:1;
      uint8_t lastTxSn:1;
      uint8_t nextTxSn:1;
      uint8_t bFirstPkt:1;
      uint8_t bAutoEmpty:1;
      uint8_t bLlCtrlTx:1;
      uint8_t bLlCtrlAckRx:1;
      uint8_t bLlCtrlAckPending:1;
   } seqStat;
   uint8_t maxNack;
   uint8_t maxPkt;
   uint32_t accessAddress;
   uint32_t crcInit;
   ratmr_t endTime;
} rfc_bleMasterPar_t;

typedef struct {
   dataQueue_t* pRxQ;
   dataQueue_t* pTxQ;
   struct {
      uint8_t bAutoFlushIgnored:1;
      uint8_t bAutoFlushCrcErr:1;
      uint8_t bAutoFlushEmpty:1;
      uint8_t bIncludeLenByte:1;
      uint8_t bIncludeCrc:1;
      uint8_t bAppendRssi:1;
      uint8_t bAppendStatus:1;
      uint8_t bAppendTimestamp:1;
   } rxConfig;
   struct {
      uint8_t lastRxSn:1;
      uint8_t lastTxSn:1;
      uint8_t nextTxSn:1;
      uint8_t bFirstPkt:1;
      uint8_t bAutoEmpty:1;
      uint8_t bLlCtrlTx:1;
      uint8_t bLlCtrlAckRx:1;
      uint8_t bLlCtrlAckPending:1;
   } seqStat;
   uint8_t maxNack;
   uint8_t maxPkt;
   uint32_t accessAddress;
   uint32_t crcInit;
   ratmr_t timeoutTime;
   uint16_t __dummy0;
   uint8_t __dummy1;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } endTrigger;
   ratmr_t endTime;
} rfc_bleSlavePar_t;

typedef struct {
   dataQueue_t* pRxQ;
   struct {
      uint8_t bAutoFlushIgnored:1;
      uint8_t bAutoFlushCrcErr:1;
      uint8_t bAutoFlushEmpty:1;
      uint8_t bIncludeLenByte:1;
      uint8_t bIncludeCrc:1;
      uint8_t bAppendRssi:1;
      uint8_t bAppendStatus:1;
      uint8_t bAppendTimestamp:1;
   } rxConfig;
   struct {
      uint8_t advFilterPolicy:2;
      uint8_t deviceAddrType:1;
      uint8_t peerAddrType:1;
      uint8_t bStrictLenFilter:1;
   } advConfig;
   uint8_t advLen;
   uint8_t scanRspLen;
   uint8_t* pAdvData;
   uint8_t* pScanRspData;
   uint16_t* pDeviceAddress;
   uint32_t* pWhiteList;
   uint16_t __dummy0;
   uint8_t __dummy1;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } endTrigger;
   ratmr_t endTime;
} rfc_bleAdvPar_t;

typedef struct {
   dataQueue_t* pRxQ;
   struct {
      uint8_t bAutoFlushIgnored:1;
      uint8_t bAutoFlushCrcErr:1;
      uint8_t bAutoFlushEmpty:1;
      uint8_t bIncludeLenByte:1;
      uint8_t bIncludeCrc:1;
      uint8_t bAppendRssi:1;
      uint8_t bAppendStatus:1;
      uint8_t bAppendTimestamp:1;
   } rxConfig;
   struct {
      uint8_t scanFilterPolicy:1;
      uint8_t bActiveScan:1;
      uint8_t deviceAddrType:1;
      uint8_t :1;
      uint8_t bStrictLenFilter:1;
      uint8_t bAutoWlIgnore:1;
      uint8_t bEndOnRpt:1;
   } scanConfig;
   uint16_t randomState;
   uint16_t backoffCount;
   struct {
      uint8_t logUpperLimit:4;
      uint8_t bLastSucceeded:1;
      uint8_t bLastFailed:1;
   } backoffPar;
   uint8_t scanReqLen;
   uint8_t* pScanReqData;
   uint16_t* pDeviceAddress;
   uint32_t* pWhiteList;
   uint16_t __dummy0;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } timeoutTrigger;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } endTrigger;
   ratmr_t timeoutTime;
   ratmr_t endTime;
} rfc_bleScannerPar_t;

typedef struct {
   dataQueue_t* pRxQ;
   struct {
      uint8_t bAutoFlushIgnored:1;
      uint8_t bAutoFlushCrcErr:1;
      uint8_t bAutoFlushEmpty:1;
      uint8_t bIncludeLenByte:1;
      uint8_t bIncludeCrc:1;
      uint8_t bAppendRssi:1;
      uint8_t bAppendStatus:1;
      uint8_t bAppendTimestamp:1;
   } rxConfig;
   struct {
      uint8_t bUseWhiteList:1;
      uint8_t bDynamicWinOffset:1;
      uint8_t deviceAddrType:1;
      uint8_t peerAddrType:1;
      uint8_t bStrictLenFilter:1;
   } initConfig;
   uint8_t __dummy0;
   uint8_t connectReqLen;
   uint8_t* pConnectReqData;
   uint16_t* pDeviceAddress;
   uint32_t* pWhiteList;
   ratmr_t connectTime;
   uint16_t __dummy1;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } timeoutTrigger;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } endTrigger;
   ratmr_t timeoutTime;
   ratmr_t endTime;
} rfc_bleInitiatorPar_t;

typedef struct {
   dataQueue_t* pRxQ;
   struct {
      uint8_t bAutoFlushIgnored:1;
      uint8_t bAutoFlushCrcErr:1;
      uint8_t bAutoFlushEmpty:1;
      uint8_t bIncludeLenByte:1;
      uint8_t bIncludeCrc:1;
      uint8_t bAppendRssi:1;
      uint8_t bAppendStatus:1;
      uint8_t bAppendTimestamp:1;
   } rxConfig;
   uint8_t bRepeat;
   uint16_t __dummy0;
   uint32_t accessAddress;
   uint32_t crcInit;
   ratmr_t endTime;
} rfc_bleGenericRxPar_t;

typedef struct {
   uint16_t numPackets;
   uint8_t payloadLength;
   uint8_t packetType;
   ratmr_t period;
   struct {
      uint8_t bOverrideDefault:1;
      uint8_t bUsePrbs9:1;
      uint8_t bUsePrbs15:1;
   } config;
   uint8_t byteVal;
   uint8_t __dummy0;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } endTrigger;
   ratmr_t endTime;
} rfc_bleTxTestPar_t;

typedef struct {
   uint8_t nTx;
   uint8_t nTxAck;
   uint8_t nTxCtrl;
   uint8_t nTxCtrlAck;
   uint8_t nTxCtrlAckAck;
   uint8_t nTxRetrans;
   uint8_t nTxEntryDone;
   uint8_t nRxOk;
   uint8_t nRxCtrl;
   uint8_t nRxCtrlAck;
   uint8_t nRxNok;
   uint8_t nRxIgnored;
   uint8_t nRxEmpty;
   uint8_t nRxBufFull;
   int8_t lastRssi;
   struct {
      uint8_t bTimeStampValid:1;
      uint8_t bLastCrcErr:1;
      uint8_t bLastIgnored:1;
      uint8_t bLastEmpty:1;
      uint8_t bLastCtrl:1;
      uint8_t bLastMd:1;
      uint8_t bLastAck:1;
   } pktStatus;
   ratmr_t timeStamp;
} rfc_bleMasterSlaveOutput_t;

typedef struct {
   uint16_t nTxAdvInd;
   uint8_t nTxScanRsp;
   uint8_t nRxScanReq;
   uint8_t nRxConnectReq;
   uint8_t __dummy0;
   uint16_t nRxNok;
   uint16_t nRxIgnored;
   uint8_t nRxBufFull;
   int8_t lastRssi;
   ratmr_t timeStamp;
} rfc_bleAdvOutput_t;

typedef struct {
   uint16_t nTxScanReq;
   uint16_t nBackedOffScanReq;
   uint16_t nRxAdvOk;
   uint16_t nRxAdvIgnored;
   uint16_t nRxAdvNok;
   uint16_t nRxScanRspOk;
   uint16_t nRxScanRspIgnored;
   uint16_t nRxScanRspNok;
   uint8_t nRxAdvBufFull;
   uint8_t nRxScanRspBufFull;
   int8_t lastRssi;
   uint8_t __dummy0;
   ratmr_t timeStamp;
} rfc_bleScannerOutput_t;

typedef struct {
   uint8_t nTxConnectReq;
   uint8_t nRxAdvOk;
   uint16_t nRxAdvIgnored;
   uint16_t nRxAdvNok;
   uint8_t nRxAdvBufFull;
   int8_t lastRssi;
   ratmr_t timeStamp;
} rfc_bleInitiatorOutput_t;

typedef struct {
   uint16_t nRxOk;
   uint16_t nRxNok;
   uint16_t nRxBufFull;
   int8_t lastRssi;
   uint8_t __dummy0;
   ratmr_t timeStamp;
} rfc_bleGenericRxOutput_t;

typedef struct {
   uint16_t nTx;
} rfc_bleTxTestOutput_t;

typedef struct {
   uint8_t size;
   struct {
      uint8_t bEnable:1;
      uint8_t addrType:1;
      uint8_t bWlIgn:1;
   } conf;
   uint16_t address;
   uint32_t addressHi;
} rfc_bleWhiteListEntry_t;

typedef struct {
   struct {
      uint32_t size:8;
      uint32_t conf:8;
      uint32_t addressLo:16;
   } entryLo;
   uint32_t addressHi;
} rfc_bleWhiteListEntryWords_t;

typedef struct {
   struct {
      uint8_t channel:6;
      uint8_t bIgnore:1;
      uint8_t bCrcErr:1;
   } status;
} rfc_bleRxStatus_t;

#endif
