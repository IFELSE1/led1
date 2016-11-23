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
  
/* Define to prevent recursive inclusion -------------------------------------*/ 
#ifndef __LED_H
#define __LED_H	 
/* Includes ------------------------------------------------------------------*/
#include "includes.h"


/* Private types -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private constants ---------------------------------------------------------*/
/* Private macros ------------------------------------------------------------*/



/* Exported types ------------------------------------------------------------*/
/** @defgroup LED Exported Types
  
typedef enum 
{
  LED0 = 0,

  LED_GREEN = LED0
} Led_TypeDef;
/* Exported constants --------------------------------------------------------*/
/** @defgroup  LED Constants
  */
/* The number of led 
#define LEDn                               1

#define LED0_PIN                           GPIO_PIN_5
#define LED0_GPIO_PORT                    GPIOA
#define LED2_GPIO_CLK_ENABLE()             __HAL_RCC_GPIOA_CLK_ENABLE()  
#define LED2_GPIO_CLK_DISABLE()            __HAL_RCC_GPIOA_CLK_DISABLE()
  
#define LEDx_GPIO_CLK_ENABLE(__LED__)      do { if((__LED__) == LED2) { LED2_GPIO_CLK_ENABLE(); } } while(0)

#define LEDx_GPIO_CLK_DISABLE(__LED__)     do { if((__LED__) == LED2) { LED2_GPIO_CLK_DISABLE(); } } while(0)
/* Exported macro ------------------------------------------------------------*/




/* Exported functions --------------------------------------------------------*/










#endif /* __LED_H */
/******************************* IFELSE **************************END OF FILE****/