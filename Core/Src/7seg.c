/*
 * 7seg.c
 *
 *  Created on: Oct 31, 2022
 *      Author: anvua
 */
#include "7seg.h"
void display7SEG ( int counter )
   {
   switch ( counter )
   {
   case 0:
   HAL_GPIO_WritePin ( LED_1_GPIO_Port , LED_1_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_2_GPIO_Port , LED_2_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_3_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_4_GPIO_Port , LED_4_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_5_GPIO_Port , LED_5_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_6_GPIO_Port , LED_6_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_7_GPIO_Port , LED_7_Pin , SET ) ;

   break ;
   case 1:
   HAL_GPIO_WritePin ( LED_1_GPIO_Port , LED_1_Pin , SET ) ;
   HAL_GPIO_WritePin ( LED_2_GPIO_Port , LED_2_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_3_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_4_GPIO_Port , LED_4_Pin , SET ) ;
   HAL_GPIO_WritePin ( LED_5_GPIO_Port , LED_5_Pin , SET ) ;
   HAL_GPIO_WritePin ( LED_6_GPIO_Port , LED_6_Pin , SET ) ;
   HAL_GPIO_WritePin ( LED_7_GPIO_Port , LED_7_Pin , SET ) ;
   break ;
   case 2:
   HAL_GPIO_WritePin ( LED_1_GPIO_Port , LED_1_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_2_GPIO_Port , LED_2_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_3_Pin , SET ) ;
   HAL_GPIO_WritePin ( LED_4_GPIO_Port , LED_4_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_5_GPIO_Port , LED_5_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_6_GPIO_Port , LED_6_Pin , SET ) ;
   HAL_GPIO_WritePin ( LED_7_GPIO_Port , LED_7_Pin , RESET ) ;
   break ;
   case 3:
   HAL_GPIO_WritePin ( LED_1_GPIO_Port , LED_1_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_2_GPIO_Port , LED_2_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_3_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_4_GPIO_Port , LED_4_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_5_GPIO_Port , LED_5_Pin , SET ) ;
   HAL_GPIO_WritePin ( LED_6_GPIO_Port , LED_6_Pin , SET ) ;
   HAL_GPIO_WritePin ( LED_7_GPIO_Port , LED_7_Pin , RESET ) ;
   break ;
   case 4:
   HAL_GPIO_WritePin ( LED_1_GPIO_Port , LED_1_Pin , SET ) ;
   HAL_GPIO_WritePin ( LED_2_GPIO_Port , LED_2_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_3_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_4_GPIO_Port , LED_4_Pin , SET ) ;
   HAL_GPIO_WritePin ( LED_5_GPIO_Port , LED_5_Pin , SET ) ;
   HAL_GPIO_WritePin ( LED_6_GPIO_Port , LED_6_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_7_GPIO_Port , LED_7_Pin , RESET ) ;
   break ;
   case 5:
   HAL_GPIO_WritePin ( LED_1_GPIO_Port , LED_1_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_2_GPIO_Port , LED_2_Pin , SET ) ;
   HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_3_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_4_GPIO_Port , LED_4_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_5_GPIO_Port , LED_5_Pin , SET ) ;
   HAL_GPIO_WritePin ( LED_6_GPIO_Port , LED_6_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_7_GPIO_Port , LED_7_Pin , RESET ) ;
   break ;
   case 6:
   HAL_GPIO_WritePin ( LED_1_GPIO_Port , LED_1_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_2_GPIO_Port , LED_2_Pin , SET ) ;

   HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_3_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_4_GPIO_Port , LED_4_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_5_GPIO_Port , LED_5_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_6_GPIO_Port , LED_6_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_7_GPIO_Port , LED_7_Pin , RESET ) ;
   break ;
   case 7:
   HAL_GPIO_WritePin ( LED_1_GPIO_Port , LED_1_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_2_GPIO_Port , LED_2_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_3_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_4_GPIO_Port , LED_4_Pin , SET ) ;
   HAL_GPIO_WritePin ( LED_5_GPIO_Port , LED_5_Pin , SET ) ;
   HAL_GPIO_WritePin ( LED_6_GPIO_Port , LED_6_Pin , SET ) ;
   HAL_GPIO_WritePin ( LED_7_GPIO_Port , LED_7_Pin , SET ) ;
   break ;
   case 8:
   HAL_GPIO_WritePin ( LED_1_GPIO_Port , LED_1_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_2_GPIO_Port , LED_2_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_3_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_4_GPIO_Port , LED_4_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_5_GPIO_Port , LED_5_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_6_GPIO_Port , LED_6_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_7_GPIO_Port , LED_7_Pin , RESET ) ;
   break ;
  case 9:
   HAL_GPIO_WritePin ( LED_1_GPIO_Port , LED_1_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_2_GPIO_Port , LED_2_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_3_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_4_GPIO_Port , LED_4_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_5_GPIO_Port , LED_5_Pin , SET ) ;
   HAL_GPIO_WritePin ( LED_6_GPIO_Port , LED_6_Pin , RESET ) ;
   HAL_GPIO_WritePin ( LED_7_GPIO_Port , LED_7_Pin , RESET ) ;
   break ;
   }
   }
