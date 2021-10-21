/*
 * My_STM32_unique_Id.c
 *
 *  Created on: Oct 21, 2021
 *      Author: sjkim
 */


#include "My_STM32_unique_Id.h"


uint32_t idAddr[]={0x1FFFF7AC,  	//STM32F0
                  0x1FFFF7E8,  		//STM32F1
                  0x1FFF7A10,  		//STM32F2
                  0x1FFFF7AC,  		//STM32F3
                  0x1FFF7A10,  		//STM32F4
                  0x1FF0F420,  		//STM32F7
                  0x1FF80050,  		//STM32L0
                  0x1FF80050,  		//STM32L1
                  0x1FFF7590,  		//STM32L4
                  0x1FF0F420}; 		//STM32H7


void f_STM32_get_unique_id_with_MCU_Ty (TU_STM32_UNIQUE_ID *uid, STM32_MCU_Ty type)
{
	//In the case of STM32H, it does not accurately get the value --> Error, 
	//Not recommended

	if(uid!=NULL)
	{
	    uid->u32_id[0]	=	*(uint32_t*)(idAddr[type]);
      	uid->u32_id[1]	=	*(uint32_t*)(idAddr[type]+4);
      	uid->u32_id[2]	=	*(uint32_t*)(idAddr[type]+8);
    }
	else
	{
	    uid->u32_id[0]	=	0;
      	uid->u32_id[1]	=	0;
      	uid->u32_id[2]	=	0;
	}
}

void f_STM32_get_unique_id_with_HAL_LIB (TU_STM32_UNIQUE_ID *uid)
{
	uid->u32_id[0] = HAL_GetUIDw0();
	uid->u32_id[1] = HAL_GetUIDw1();
	uid->u32_id[2] = HAL_GetUIDw2();
}