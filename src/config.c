/***************************************************
**�ļ���  		��config.c
**����   		��һЩ���õ�C����Դ����
**��������	��07/10/28
**�汾    		��Ver1.0
**����		��Ice Lee
**�޸ļ�¼	��
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
//���뼶�����ʱ����
void delay_ms(uint ms){
	uint i;
	while (ms--)
		for (i=112;i>0;i--);
}