#ifndef __IAP_H__
#define __IAP_H__
#include "main.h"

////////////////////////////////////////////////////////////////////////////////// 
extern int shengji_en;
typedef  void (*iapfun)(void);				//����һ���������͵Ĳ���.   
#define FLASH_APP1_ADDR		0x08020000  	//��һ��Ӧ�ó�����ʼ��ַ(�����FLASH)
											//����0X08000000~0X0801FFFF�Ŀռ�ΪBootloaderʹ��(��128KB)	   
void iap_load_app(uint32_t appxaddr);			//��ת��APP����ִ��
#endif
