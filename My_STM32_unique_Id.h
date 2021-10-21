/*
 * My_STM32_unique_Id.h
 *
 *  Created on: Oct 21, 2021
 *      Author: sjkim
 */

#ifndef INC_MY_STM32_UNIQUE_ID_H_
#define INC_MY_STM32_UNIQUE_ID_H_

#include "stm32h7xx_hal.h"

typedef union
{
	uint32_t 	u32_id[3];
	uint8_t 	u8_id[12];
}TU_STM32_UNIQUE_ID;


typedef enum {
	MCU_Type_STM32F0 	= 0,
    MCU_Type_STM32F1	= 1,
    MCU_Type_STM32F2	= 2,
    MCU_Type_STM32F3	= 3,
    MCU_Type_STM32F4	= 4,
    MCU_Type_STM32F7	= 5,
    MCU_Type_STM32L0	= 6,
    MCU_Type_STM32L1	= 7,
    MCU_Type_STM32L4	= 8,
    MCU_Type_STM32H7	= 9
}STM32_MCU_Ty;


void f_STM32_get_unique_id_with_MCU_Ty (TU_STM32_UNIQUE_ID *uid, STM32_MCU_Ty type);
void f_STM32_get_unique_id_with_HAL_LIB (TU_STM32_UNIQUE_ID *uid);

#endif /* INC_MY_STM32_UNIQUE_ID_H_ */
