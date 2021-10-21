#include "main.h"
#include "My_STM32_unique_Id.h"


int main(void)
{
	TU_STM32_UNIQUE_ID uid;
	f_STM32_get_unique_id_with_MCU_Ty (&uid, MCU_Type_STM32H7);

	f_STM32_get_unique_id_with_HAL_LIB(&uid);

}