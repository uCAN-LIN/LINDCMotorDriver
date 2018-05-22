/**
  LIN Slave Driver
	
  Company:
    Microchip Technology Inc.

  File Name:
    lin_slave.h

  Summary:
    LIN Slave Driver

  Description:
    This header file provides the driver for LIN slave nodes

 */

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#ifndef LIN_H
#define	LIN_H
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

typedef enum {
    LIN_RX_IDLE,
    LIN_RX_BREAK,
    LIN_RX_SYNC,
    LIN_RX_PID,
    LIN_RX_DATA,
    LIN_RX_CHECKSUM,
    LIN_RX_TX_DATA,
    LIN_RX_RDY,
    LIN_RX_ERROR,
    LIN_RX_WAIT
}lin_rx_state_t;

typedef enum {
    TRANSMIT,
    RECEIVE,
    ERROR
}lin_packet_type_t;

typedef enum {
    CMD,
    TYPE,
    LENGTH
}lin_sch_param_t;

typedef union {
    struct {
        uint8_t PID;
        uint8_t data[8];
        uint8_t checksum;
        lin_packet_type_t type;
        int8_t length;
    };
    uint8_t rawPacket[13];
}lin_packet_t;

typedef struct {
    uint8_t cmd;
    lin_packet_type_t type;
    uint8_t length;
    uint8_t* data;
}lin_rx_cmd_t;

typedef union {
    struct {
        unsigned ID0: 1;
        unsigned ID1: 1;
        unsigned ID2: 1;
        unsigned ID3: 1;
        unsigned ID4: 1;
        unsigned ID5: 1;
        unsigned P0: 1;
        unsigned P1: 1;
    };
    uint8_t rawPID;
}lin_pid_t;

//Set up schedule table timings
void LIN_init(uint8_t tableLength, const lin_rx_cmd_t* const command, void (*processData));

void LIN_queuePacket(uint8_t cmd);

void LIN_sendPacket(uint8_t length, uint8_t pid, uint8_t* data);

uint8_t LIN_getPacket(uint8_t* data);

uint8_t LIN_getFromTable(uint8_t cmd, lin_sch_param_t param);

lin_rx_state_t LIN_handler(void);

bool LIN_checkPID(uint8_t pid);

uint8_t LIN_getChecksum(uint8_t length, uint8_t pid, uint8_t* data);

uint8_t LIN_calcParity(uint8_t CMD);

//Timer Functions
void LIN_startTimer(uint8_t timeout);

void LIN_timerHandler(void);

void LIN_setTimerHandler(void);

void LIN_stopTimer(void);

void LIN_enableRx(void);

void LIN_disableRx(void);

bool LIN_breakCheck(void);

#endif	/* LIN_H */

