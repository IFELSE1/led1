/**
  ******************************************************************************
  * @file    
  * @author  
  * @version 
  * @date    
  * @brief   
  *
  ******************************************************************************
  * @attention
  *
  *
  ******************************************************************************
  */
  
/* Includes ------------------------------------------------------------------*/
#include "led.h"
  
/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/




/* Private function prototypes -----------------------------------------------*/


/* Private functions ---------------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/

/**
  * @brief  Configures LED GPIO.
  * @retval None
  */
void 
LED_Init(void)
{
    PLT_DeactivatePort(LED2);
}



/******************************* IFELSE **************************END OF FILE****/