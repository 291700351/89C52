#89C52单片机C语言程序简单封装
<hr/> 
- ###DS1302实时时钟芯片的封装
		
		/***************************************************
		** 向DS1302时钟芯片写入一个byte的数据，包括写指令和写数据都可以使用此方法
		**	参数：
		**		byte：需要写入的数据或者指令
		*****************************************************/
		void write_1302_byte(uchar byte);

		void write_1302(uchar address,uchar dat);
		/***************************************************
		** 从DS1302时钟芯片指定的地址读取一个字节数据
		**	参数：
		**		address：需要读取的数据的地址
		**
		**	返回值：
		**		返回指定地址的数据
		*****************************************************/
		uchar read_1302(uchar address);

- ###1602液晶显示器
	
		/***************************************************
		** 读取1602状态
		**	返回值：
		**		true	：忙状态
				false	：空闲状态
		*****************************************************/
		bit read_1602_state();
		/***************************************************
		** 向1602液晶显示器写入指令
		**	参数：
		**		command：1602液晶显示器控制命令
		*****************************************************/
		void write_1602_command(uchar command);
		/***************************************************
		** 向1602液晶显示器写入数据显示
		**	参数：
		**		dat：需要显示的字符
		*****************************************************/
		void write_1602_data(uchar dat);
		
		/***************************************************
		** 初始化1602，不显示光标，自动写入数据位置加1设置首地址为第一行第一列
		*****************************************************/
		void init_1602();
		/***************************************************
		**设置光标坐标
		**	 参数：
		** 		x		：	x坐标
		**		y		：	y坐标
		*****************************************************/
		void set1602XY(uchar x ,uchar y);
		
		/***************************************************
		**向1602液晶输出字符串显示
		** 	参数：
		** 		x		：	x坐标
		**		y		：	y坐标
		**  		str		：	字符串
		**		delayMs	：	每次显示延时毫秒值
		*****************************************************/
		void write_1602_str(uchar x,uchar y,const char*str,uchar delayMs);
		
		/***************************************************
		** 在显示器指定的坐标显示指定的char字符
		** 	参数：
		** 		x		：	x坐标
		**		y		：	y坐标
		**  		c		：	需要显示的字符
		*****************************************************/
		void write_1602_char(uchar x,uchar y,uchar c);

- ###DigitalTube.h数码管显示相关

		/***************************************************
		**	数码管静态显示
		**	参数
		**		wei		：P0口需要显示的数码管位置
		**		showText	：需要显示的字
		*****************************************************/
		void static_display(uchar wei,uchar showText);
		
		
		/***************************************************
		**	数码管动态显示
		**	参数
		**		tubes	：需要显示的数码管的数组
		**		len		：数组长度
		*****************************************************/
		void dynamic_display(struct Tube tubes[],uchar len);

- ###define 一些宏定义
		支持在c语言中直接使用二进制的定义

##License

	Copyright (c) 2017 291700351

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:
	
	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.
	
	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE