
/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"


// delay funtion //
void Delay(__IO uint32_t num)
{
__IO uint32_t index = 0; 
/* default system clock is 72MHz */
for(index = (72000 * num); index != 0; index--) {}

}
 

GPIO_InitTypeDef GPIO_InitStructure;


int main(void)
{
  
  /* GPIOD Periph clock enable */
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);

  /* Configure PD0 and PD2 in output pushpull mode */
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8 | GPIO_Pin_9;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_Init(GPIOB, &GPIO_InitStructure);

 
  while (1)
  {
    GPIO_ResetBits(GPIOB,GPIO_Pin_8);                                 
    Delay(25); 
		GPIO_SetBits(GPIOB,GPIO_Pin_8);
		Delay(25);
    // them vao//
GPIO_ResetBits(GPIOB,GPIO_Pin_8);                                 
    Delay(25); 
		GPIO_SetBits(GPIOB,GPIO_Pin_8);
		Delay(25);
GPIO_ResetBits(GPIOB,GPIO_Pin_8);                                 
    Delay(25); 
		GPIO_SetBits(GPIOB,GPIO_Pin_8);
		Delay(25);
GPIO_ResetBits(GPIOB,GPIO_Pin_8);                                 
    Delay(25); 
		GPIO_SetBits(GPIOB,GPIO_Pin_8);
		Delay(25);		
  }
}

#ifdef  USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{ 
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}

#endif

/**
  * @}
  */

/**
  * @}
  */

/******************* (C) COPYRIGHT 2011 STMicroelectronics *****END OF FILE****/
