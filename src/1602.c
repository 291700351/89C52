/***************************************************
**�ļ���  		��1602.c
**����   		��1602Һ����ʾ����C����Դ�����ṩ��1602дָ�д������ʾ�ķ��������1602.hͷ�ļ�ʹ��
**��������	��07/10/28
**�汾    		��Ver1.0
**����		��Ice Lee
**�޸ļ�¼��
*****************************************************/
#include"include/1602.h"

//��ȡ1602״̬
bit read_1602_state(){
	uchar temp;
	LCD_1602_EN=0;
	LCD_1602_RS =0;
	_nop_();
	LCD_1602_RW=1;
	//��������30ns
	_nop_();
	LCD_1602_EN = 1;
	_nop_();
	//��ȡP0������
	temp = P0;
	LCD_1602_EN = 0;
	if ((temp&b1000_0000) ==0){
		return false;
	}else{
		return true;
	}
}
//��1602Һ����ʾ��д��ָ��
void write_1602_command(uchar command){
	//���״̬,�ȴ�
	while(!read_1602_state);
	//д�������RS=0��RW=0��E=�����塣������ޡ�
	//LCD_1602_EN = 0;
	_nop_();
	LCD_1602_RS =0;//����Ϊд����ģʽ
	_nop_();
	LCD_1602_RW = 0;//����Ϊ������ģʽ
	_nop_();
	P0 = command;
	//����ʹ��IO�ڿ�ʼд����
	LCD_1602_EN = 1;
	delay_ms(1);
	LCD_1602_EN=0;
	_nop_();
}

//��1602д��������ʾ
void write_1602_data(uchar dat){
	//���״̬,�ȴ�
	while(!read_1602_state);
	//д���ݣ�����RS=1��RW=0��E=�����塣������ޡ�
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
//��ʼ��1602������ʾ��꣬�Զ�д������λ�ü�1�����׵�ַΪ��һ�е�һ��
void init_1602(){
	write_1602_command(0x38);//������ʾģʽ 5*7
	write_1602_command(0x0c);  // - - ������ʾ���ع�꣬����˸
	write_1602_command(0x06); // - - �趨���뷽ʽ����������λ
	write_1602_command(0x01); // - - �����Ļ��ʾ
	write_1602_command(0x80);//
}

//���ù������
void set1602XY(uchar x ,uchar y){
	write_1602_command(0x80+0x40*y+x);
}

//��1602Һ������ַ�����ʾ
void write_1602_str(uchar x,uchar y,const char*str,uchar delayMs){
	uchar i;
	set1602XY(x,y);
	while(*str!='\0'){//ֻҪ�����ַ����Ľ�����־����һֱѭ��д��������ʾ
		delay_ms(delayMs);
		write_1602_data(*str);
		str++;
	}
}
//����ʾ��ָ����������ʾָ����char�ַ�
void write_1602_char(uchar x,uchar y,uchar c){
	set1602XY(x,y);
	write_1602_data(c);
}

