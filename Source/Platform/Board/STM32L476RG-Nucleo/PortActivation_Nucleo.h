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
#ifndef __PORTACTIVATION_NUCLEO_H
#define __PORTACTIVATION_NUCLEO_H

/* Includes ------------------------------------------------------------------*/
#include "common.h"
#include "includes.h"


/* Private types -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private constants ---------------------------------------------------------*/
/* Private macros ------------------------------------------------------------*/

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/

/*--For LED--*/
//#define  LED
#define  LED_GPIO       GPIOA
#define  LED_PORT       5
#define  LED_ACTIVE     HIGH

/* Exported macro ------------------------------------------------------------*/

#define PLT_ActivatePort(portname)    do{((portname##_GPIO) -> BSRR |= (portname##_ACTIVE)<<(portname##_PORT));}while(0)

#define PLT_DeactivatePort(portname)  do{((portname##_GPIO) -> BSRR |= ((portname##_ACTIVE)?TRUE:FALSE)<<(portname##_PORT + 16));}while(0)

#define PLT_CheckPortActivation(portname)	(((portname##_GPIO ->IDR) & (1<<portname##_PORT))==(portname##_ACTIVE))?FALSE:TRUE


#define PLT_SetPort(portname)    do{((portname##_GPIO) -> BSRR |= 1<<(portname##_PORT));}while(0)

#define PLT_ResetPort(portname)  do{((portname##_GPIO) -> BSRR |= 1<<(portname##_PORT + 16));}while(0)

#define PLT_CheckPortState(portname)	(((portname##_GPIO ->IDR) & (1<<portname##_PORT))==0)?FALSE:TRUE



#endif /* __PORTACTIVATION_NUCLEO_H */
/******************************* IFELSE **************************END OF FILE****/
