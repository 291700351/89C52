/***************************************************
**�ļ���		��DigitalTube.c
**����   	 	���������ʾ��ص�c����Դ�����ṩ����ܶ�̬��ʾ�;�̬��ʾ��ʹ��ʱ�����DigitalTube.hͷ�ļ�ʹ��
**��������	��07/10/28
**�汾    		��Ver1.0
**����		��Ice Lee
**�޸ļ�¼	��
*****************************************************/

#include "include/DigitalTube.h"
/*����ܾ�̬��ʾ*/
void static_display(uchar wei,uchar showText){
	WEI = 1;
	P0 = wei;
	WEI = 0;
	DUAN = 1;
	P0 = showText;
	DUAN = 0;
}
/*����ܶ�̬��ʾ*/
void dynamic_display(struct Tube tubes[],uchar len ){
	uchar i ,j;
	for (i=0;i<len;i++){
		P0 = 0xff;
		WEI = 1;
		P0 =tubes[i].wei;
		WEI = 0;
		P0 = 0;
		DUAN = 1;
		P0 = tubes[i].showText;
		DUAN = 0;
		for (j=100;j>0;j--)
			_nop_();
	}
}
