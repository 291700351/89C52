/***************************************************
**文件名  		：config.c
**功能   		：一些配置的C语言源程序
**建立日期	：07/10/28
**版本    		：Ver1.0
**作者		：Ice Lee
**修改记录	：
*****************************************************/

#include "include/config.h"

void delay_5us(){
	_nop_();
}
void delay_us(uint us){
	uint i;
	while (us--)
		delay_5us();
}
//毫秒级别的延时函数
void delay_ms(uint ms){
	uint i;
	while (ms--)
		for (i=112;i>0;i--);
}