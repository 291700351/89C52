/***************************************************
**文件名  		：1602.c
**功能   		：1602液晶显示器的C语言源程序，提供向1602写指令、写数据显示的方法，配合1602.h头文件使用
**建立日期	：07/10/28
**版本    		：Ver1.0
**作者		：Ice Lee
**修改记录：
*****************************************************/
#include"include/1602.h"

//读取1602状态
bit read_1602_state(){
	uchar temp;
	LCD_1602_EN=0;
	LCD_1602_RS =0;
	_nop_();
	LCD_1602_RW=1;
	//保持最少30ns
	_nop_();
	LCD_1602_EN = 1;
	_nop_();
	//读取P0口数据
	temp = P0;
	LCD_1602_EN = 0;
	if ((temp&b1000_0000) ==0){
		return false;
	}else{
		return true;
	}
}
//向1602液晶显示器写入指令
void write_1602_command(uchar command){
	//检测状态,等待
	while(!read_1602_state);
	//写命令：输入RS=0，RW=0，E=高脉冲。输出：无。
	//LCD_1602_EN = 0;
	_nop_();
	LCD_1602_RS =0;//设置为写命令模式
	_nop_();
	LCD_1602_RW = 0;//设置为读数据模式
	_nop_();
	P0 = command;
	//拉高使能IO口开始写数据
	LCD_1602_EN = 1;
	delay_ms(1);
	LCD_1602_EN=0;
	_nop_();
}

//向1602写入数据显示
void write_1602_data(uchar dat){
	//检测状态,等待
	while(!read_1602_state);
	//写数据：输入RS=1，RW=0，E=高脉冲。输出：无。
	//LCD_1602_EN = 0;
	_nop_();
	LCD_1602_RS = 1;
	_nop_();
	LCD_1602_RW = 0;
	_nop_();
	P0 = dat;
	_nop_();
	LCD_1602_EN = 1;
	delay_ms(1);
	LCD_1602_EN = 0;
	_nop_();
}
//初始化1602，不显示光标，自动写入数据位置加1设置首地址为第一行第一列
void init_1602(){
	write_1602_command(0x38);//设置显示模式 5*7
	write_1602_command(0x0c);  // - - 整体显示，关光标，不闪烁
	write_1602_command(0x06); // - - 设定输入方式，增量不移位
	write_1602_command(0x01); // - - 清除屏幕显示
	write_1602_command(0x80);//
}

//设置光标坐标
void set1602XY(uchar x ,uchar y){
	write_1602_command(0x80+0x40*y+x);
}

//向1602液晶输出字符串显示
void write_1602_str(uchar x,uchar y,const char*str,uchar delayMs){
	uchar i;
	set1602XY(x,y);
	while(*str!='\0'){//只要不到字符串的结束标志，就一直循环写出数据显示
		delay_ms(delayMs);
		write_1602_data(*str);
		str++;
	}
}
//在显示器指定的坐标显示指定的char字符
void write_1602_char(uchar x,uchar y,uchar c){
	set1602XY(x,y);
	write_1602_data(c);
}

