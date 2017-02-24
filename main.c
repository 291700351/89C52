#include "include/define.h"
#include "include/1602.h"
#include "include/1302.h"

void test_1602();
void showTime();
void setShowText();
uchar temp;
int h,l;
/**************************************

**************************************/
void main(void){
	//变量定义
	//初始化
	init_1602();
	write_1302(0x81,b0000_0000);
	showTime();
	while(1){
		setShowText();//读取时钟芯片上面的时间，并修改1602显示器显示，这样1602显示器不会出现闪烁现象
	}
 
}

//===测试函数编写=========================================================================
//测试1602液晶显示器显示
void test_1602(){
	init_1602();
	while (1){
		write_1602_command(0x01);//清屏
		write_1602_str(0,0,"Hello Wrold!!!",50);
		write_1602_str(16-7,1,"Ice Lee",50);
		delay_ms(500);
	}
}

void showTime(){
	write_1602_command(0x01);
	write_1602_command(0x80);
	//显示年
	write_1602_data(h+'0');
	write_1602_data(l+'0');
	write_1602_data('/');
	//显示月
	write_1602_data(h+'0');
	write_1602_data(l+'0');
	write_1602_data('/');
	//显示日
	write_1602_data(h+'0');
	write_1602_data(l+'0');
	write_1602_data(' ');
	write_1602_data(' ');
	//显示星期
	write_1602_data(l+'0');

	set1602XY(0,1);
	//显示小时
	write_1602_data(h+'0');
	write_1602_data(l+'0');
	write_1602_data(':');
	//显示分钟
	write_1602_data(h+'0');
	write_1602_data(l+'0');
	write_1602_data(':');
	//显示秒
	write_1602_data(h+'0');
	write_1602_data(l+'0'); 
}

void setShowText(){
	
	//修改秒显示
		temp = read_1302(0x81);
		h = temp/16;
		l = temp%16;
		//00:00:00 
		write_1602_char(6,1,h+'0'); 
		write_1602_char(7,1,l+'0');
		
		temp = read_1302(0x83);
		h = temp/16;
		l = temp%16;
		//00:00
		write_1602_char(3,1,h+'0'); 
		write_1602_char(4,1,l+'0');
		
		temp = read_1302(0x85);
		h = temp/16;
		l = temp%16;
		//00:
		write_1602_char(0,1,h+'0'); 
		write_1602_char(1,1,l+'0');
		
		//11/11/11  1
		temp = read_1302(0x8b);
		l = temp%16;
		write_1602_char(10,0,l+'0');
		
		temp = read_1302(0x87);
		h = temp/16;
		l = temp%16;
		write_1602_char(6,0,h+'0'); 
		write_1602_char(7,0,l+'0');
		
		temp = read_1302(0x89);
		h = temp/16;
		l = temp%16;
		//00:00:00 
		write_1602_char(3,0,h+'0'); 
		write_1602_char(4,0,l+'0');
		
		temp = read_1302(0x8d);
		h = temp/16;
		l = temp%16;
		//00:00:00 
		write_1602_char(0,0,h+'0'); 
		write_1602_char(1,0,l+'0');
}