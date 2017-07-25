#ifndef TEM_USER_H_
#define TEM_USER_H_
#include "string.h"
#include <stdio.h>
#include <stdlib.h>
#include "stm32f10x.h"
#include "JSON_Service/cJSON.h"
#include "stdlib.h"

#include "usart1/usart1.h"
#include "Usart_string/Usart_string.h"
#include "JSON_Service/json_infer.h"
#include "usart1/usart1.h"
#include "AT24C128/24cxx.h" 
#include "Lock_Driver.h"
#include "Door_Control/Door_Control.h"
#include "Administrator/Admin.h"

//uint32_t FindThisTemUserBase_Name(char *RX_name);
uint32_t FindThisTemUserBase_Name_Logpwd(char *RX_name,char *RX_log);
void Tem_set(cJSON *object);

#endif