/***************************************************
**文件名		：DigitalTube.c
**功能   	 	：数码管显示相关的c语言源程序，提供数码管动态显示和静态显示，使用时请配合DigitalTube.h头文件使用
**建立日期	：07/10/28
**版本    		：Ver1.0
**作者		：Ice Lee
**修改记录	：
*****************************************************/

#include "include/DigitalTube.h"
/*数码管静态显示*/
void static_display(uchar wei,uchar showText){
	WEI = 1;
	P0 = wei;
	WEI = 0;
	DUAN = 1;
	P0 = showText;
	DUAN = 0;
}
/*数码管动态显示*/
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
