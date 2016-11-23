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

  
/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/




/* Private function prototypes -----------------------------------------------*/


/* Private functions ---------------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/
void
PLT_Port_Init(PLT_InitModeTypedef eMode){
    if (eMode == PLT_MODE_NORMAL ){
        GPIOA->MODER   = PLT_INIT_GPIOA_MODER;
        GPIOA->OTPER   = PLT_INIT_GPIOA_OTYPER;
        GPIOA->OSPEEDR = PLT_INIT_GPIOA_OSPEEDR;
        GPIOA->PUPDR   = PLT_INIT_GPIOA_PUPDR;
        GPIOA->BSSR    = PLT_INIT_GPIOA_BSSR;
        GPIOA->AFRL    = PLT_INIT_GPIOA_AFRL;
        GPIOA->AFRH    = PLT_INIT_GPIOA_AFRH;
        GPIOA->ASCR    = PLT_INIT_GPIOA_ASCR;
    }

}




/******************************* IFELSE **************************END OF FILE****/
