/***************************************************
**文件名  		：config.h
**功能   		：一些配置的C语言源程序
**建立日期	：07/10/28
**版本    		：Ver1.0
**作者		：Ice Lee
**修改记录：
*****************************************************/
#ifndef CONFIG_H_
#define CONFIG_H_

#include<reg52.h>
#include<intrins.h>
#include "include/define.h"


void delay_5us();
//纳秒级别的延时，延时5us的倍数
void delay_us(uint us);
//毫秒级别的延时函数
void delay_ms(uint ms);

 
#endif