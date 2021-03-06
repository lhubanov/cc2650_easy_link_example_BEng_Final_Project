//------------------------------------------------------------------------------
// TI Confidential - NDA Restrictions
//
// Copyright (c) 2013 Texas Instruments, Inc.
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
/// \file            hs_cmd.h
/// \brief           Definitions of API for high-speed mode commands
///
///                  This file is generated by create_command.pl
///
/// \author          Low Power RF Wireless Business Unit
///                  Helge Coward (h.coward@ti.com)
///
/// \date            Mon Nov  4 15:49:22 CET 2013
///
//------------------------------------------------------------------------------

#ifndef __HS_CMD_H
#define __HS_CMD_H

#include <stdint.h>
#include "mailbox.h"

#define CMD_HS_TX                                               0x3841
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
      uint8_t bFsOff:1;
      uint8_t bUseCrc:1;
      uint8_t bVarLen:1;
      uint8_t bCheckQAtEnd:1;
   } pktConf;
   uint8_t __dummy0;
   dataQueue_t* pQueue;
} rfc_CMD_HS_TX_t;

#define CMD_HS_RX                                               0x3842
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
      uint8_t bFsOff:1;
      uint8_t bUseCrc:1;
      uint8_t bVarLen:1;
      uint8_t bRepeatOk:1;
      uint8_t bRepeatNok:1;
      uint8_t addressMode:2;
   } pktConf;
   struct {
      uint8_t bAutoFlushCrcErr:1;
      uint8_t bIncludeLen:1;
      uint8_t bIncludeCrc:1;
      uint8_t bAppendStatus:1;
      uint8_t bAppendTimestamp:1;
   } rxConf;
   uint16_t maxPktLen;
   uint16_t address0;
   uint16_t address1;
   uint8_t __dummy0;
   struct {
      uint8_t triggerType:4;
      uint8_t bEnaCmd:1;
      uint8_t triggerNo:2;
      uint8_t pastTrig:1;
   } endTrigger;
   ratmr_t endTime;
   dataQueue_t* pQueue;
   uint8_t* pOutput;
} rfc_CMD_HS_RX_t;

typedef struct {
   uint16_t nRxOk;
   uint16_t nRxNok;
   uint16_t nRxAborted;
   uint8_t nRxBufFull;
   int8_t lastRssi;
   ratmr_t timeStamp;
} rfc_hsRxOutput_t;

typedef struct {
   struct {
      uint16_t rssi:8;
      uint16_t bCrcErr:1;
      uint16_t addressInd:2;
   } status;
} rfc_hsRxStatus_t;

#endif
