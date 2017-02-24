/***************************************************
**文件名  		：define.h
**功能   		：宏定义有关的配置，定义数据类型 、八位数据的二进制表现形式、CUP相关的晶振频率，时钟周期
**建立日期	：07/10/28
**版本		：Ver1.0
**作者		：Ice Lee
**修改记录	：添加二进制表现形式
*****************************************************/
/********************************************/
#ifndef DEFINE_H_
#define DEFINE_H_

#include<reg52.h>

#ifndef true
#define true 1
#endif

#ifndef false
#define false 0
#endif

#define uchar unsigned char
#define uint unsigned int

/*type define*/
typedef unsigned char boolean;
typedef unsigned char uint8;
typedef signed char sint8;
typedef unsigned int uint16;
typedef signed int   sint16;
typedef unsigned long uint32;
typedef signed long  sint32;
typedef float        fp32;

/*系统时钟*/
#define Fosc   11059200 		/*HZ					*/
#define PER_INS_CYC    12  	/*12时钟周期为一个机器周期*/

/*定义十六进制数的二进制表现形式*/
#define b0000_0000 0x00
#define b0000_0001 0x01
#define b0000_0010 0x02
#define b0000_0011 0x03
#define b0000_0100 0x04
#define b0000_0101 0x05
#define b0000_0110 0x06
#define b0000_0111 0x07
#define b0000_1000 0x08
#define b0000_1001 0x09
#define b0000_1010 0x0A
#define b0000_1011 0x0B
#define b0000_1100 0x0C
#define b0000_1101 0x0D
#define b0000_1110 0x0E
#define b0000_1111 0x0F

#define b0001_0000 0x10
#define b0001_0001 0x11
#define b0001_0010 0x12
#define b0001_0011 0x13
#define b0001_0100 0x14
#define b0001_0101 0x15
#define b0001_0110 0x16
#define b0001_0111 0x17
#define b0001_1000 0x18
#define b0001_1001 0x19
#define b0001_1010 0x1A
#define b0001_1011 0x1B
#define b0001_1100 0x1C
#define b0001_1101 0x1D
#define b0001_1110 0x1E
#define b0001_1111 0x1F

#define b0010_0000 0x20
#define b0010_0001 0x21
#define b0010_0010 0x22
#define b0010_0011 0x23
#define b0010_0100 0x24
#define b0010_0101 0x25
#define b0010_0110 0x26
#define b0010_0111 0x27
#define b0010_1000 0x28
#define b0010_1001 0x29
#define b0010_1010 0x2A
#define b0010_1011 0x2B
#define b0010_1100 0x2C
#define b0010_1101 0x2D
#define b0010_1110 0x2E
#define b0010_1111 0x2F

#define b0011_0000 0x30
#define b0011_0001 0x31
#define b0011_0010 0x32
#define b0011_0011 0x33
#define b0011_0100 0x34
#define b0011_0101 0x35
#define b0011_0110 0x36
#define b0011_0111 0x37
#define b0011_1000 0x38
#define b0011_1001 0x39
#define b0011_1010 0x3A
#define b0011_1011 0x3B
#define b0011_1100 0x3C
#define b0011_1101 0x3D
#define b0011_1110 0x3E
#define b0011_1111 0x3F

#define b0100_0000 0x40
#define b0100_0001 0x41
#define b0100_0010 0x42
#define b0100_0011 0x43
#define b0100_0100 0x44
#define b0100_0101 0x45
#define b0100_0110 0x46
#define b0100_0111 0x47
#define b0100_1000 0x48
#define b0100_1001 0x49
#define b0100_1010 0x4A
#define b0100_1011 0x4B
#define b0100_1100 0x4C
#define b0100_1101 0x4D
#define b0100_1110 0x4E
#define b0100_1111 0x4F

#define b0101_0000 0x50
#define b0101_0001 0x51
#define b0101_0010 0x52
#define b0101_0011 0x53
#define b0101_0100 0x54
#define b0101_0101 0x55
#define b0101_0110 0x56
#define b0101_0111 0x57
#define b0101_1000 0x58
#define b0101_1001 0x59
#define b0101_1010 0x5A
#define b0101_1011 0x5B
#define b0101_1100 0x5C
#define b0101_1101 0x5D
#define b0101_1110 0x5E
#define b0101_1111 0x5F

#define b0110_0000 0x60
#define b0110_0001 0x61
#define b0110_0010 0x62
#define b0110_0011 0x63
#define b0110_0100 0x64
#define b0110_0101 0x65
#define b0110_0110 0x66
#define b0110_0111 0x67
#define b0110_1000 0x68
#define b0110_1001 0x69
#define b0110_1010 0x6A
#define b0110_1011 0x6B
#define b0110_1100 0x6C
#define b0110_1101 0x6D
#define b0110_1110 0x6E
#define b0110_1111 0x6F

#define b0111_0000 0x70
#define b0111_0001 0x71
#define b0111_0010 0x72
#define b0111_0011 0x73
#define b0111_0100 0x74
#define b0111_0101 0x75
#define b0111_0110 0x76
#define b0111_0111 0x77
#define b0111_1000 0x78
#define b0111_1001 0x79
#define b0111_1010 0x7A
#define b0111_1011 0x7B
#define b0111_1100 0x7C
#define b0111_1101 0x7D
#define b0111_1110 0x7E
#define b0111_1111 0x7F

#define b1000_0000 0x80
#define b1000_0001 0x81
#define b1000_0010 0x82
#define b1000_0011 0x83
#define b1000_0100 0x84
#define b1000_0101 0x85
#define b1000_0110 0x86
#define b1000_0111 0x87
#define b1000_1000 0x88
#define b1000_1001 0x89
#define b1000_1010 0x8A
#define b1000_1011 0x8B
#define b1000_1100 0x8C
#define b1000_1101 0x8D
#define b1000_1110 0x8E
#define b1000_1111 0x8F

#define b1001_0000 0x90
#define b1001_0001 0x91
#define b1001_0010 0x92
#define b1001_0011 0x93
#define b1001_0100 0x94
#define b1001_0101 0x95
#define b1001_0110 0x96
#define b1001_0111 0x97
#define b1001_1000 0x98
#define b1001_1001 0x99
#define b1001_1010 0x9A
#define b1001_1011 0x9B
#define b1001_1100 0x9C
#define b1001_1101 0x9D
#define b1001_1110 0x9E
#define b1001_1111 0x9F

#define b1010_0000 0xA0
#define b1010_0001 0xA1
#define b1010_0010 0xA2
#define b1010_0011 0xA3
#define b1010_0100 0xA4
#define b1010_0101 0xA5
#define b1010_0110 0xA6
#define b1010_0111 0xA7
#define b1010_1000 0xA8
#define b1010_1001 0xA9
#define b1010_1010 0xAA
#define b1010_1011 0xAB
#define b1010_1100 0xAC
#define b1010_1101 0xAD
#define b1010_1110 0xAE
#define b1010_1111 0xAF

#define b1011_0000 0xB0
#define b1011_0001 0xB1
#define b1011_0010 0xB2
#define b1011_0011 0xB3
#define b1011_0100 0xB4
#define b1011_0101 0xB5
#define b1011_0110 0xB6
#define b1011_0111 0xB7
#define b1011_1000 0xB8
#define b1011_1001 0xB9
#define b1011_1010 0xBA
#define b1011_1011 0xBB
#define b1011_1100 0xBC
#define b1011_1101 0xBD
#define b1011_1110 0xBE
#define b1011_1111 0xBF

#define b1100_0000 0xC0
#define b1100_0001 0xC1
#define b1100_0010 0xC2
#define b1100_0011 0xC3
#define b1100_0100 0xC4
#define b1100_0101 0xC5
#define b1100_0110 0xC6
#define b1100_0111 0xC7
#define b1100_1000 0xC8
#define b1100_1001 0xC9
#define b1100_1010 0xCA
#define b1100_1011 0xCB
#define b1100_1100 0xCC
#define b1100_1101 0xCD
#define b1100_1110 0xCE
#define b1100_1111 0xCF

#define b1101_0000 0xD0
#define b1101_0001 0xD1
#define b1101_0010 0xD2
#define b1101_0011 0xD3
#define b1101_0100 0xD4
#define b1101_0101 0xD5
#define b1101_0110 0xD6
#define b1101_0111 0xD7
#define b1101_1000 0xD8
#define b1101_1001 0xD9
#define b1101_1010 0xDA
#define b1101_1011 0xDB
#define b1101_1100 0xDC
#define b1101_1101 0xDD
#define b1101_1110 0xDE
#define b1101_1111 0xDF

#define b1110_0000 0xE0
#define b1110_0001 0xE1
#define b1110_0010 0xE2
#define b1110_0011 0xE3
#define b1110_0100 0xE4
#define b1110_0101 0xE5
#define b1110_0110 0xE6
#define b1110_0111 0xE7
#define b1110_1000 0xE8
#define b1110_1001 0xE9
#define b1110_1010 0xEA
#define b1110_1011 0xEB
#define b1110_1100 0xEC
#define b1110_1101 0xED
#define b1110_1110 0xEE
#define b1110_1111 0xEF

#define b1111_0000 0xF0
#define b1111_0001 0xF1
#define b1111_0010 0xF2
#define b1111_0011 0xF3
#define b1111_0100 0xF4
#define b1111_0101 0xF5
#define b1111_0110 0xF6
#define b1111_0111 0xF7
#define b1111_1000 0xF8
#define b1111_1001 0xF9
#define b1111_1010 0xFA
#define b1111_1011 0xFB
#define b1111_1100 0xFC
#define b1111_1101 0xFD
#define b1111_1110 0xFE
#define b1111_1111 0xFF



#endif