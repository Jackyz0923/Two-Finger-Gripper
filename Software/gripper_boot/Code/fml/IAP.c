#include "IAP.h"

iapfun jump2app; 

//__asm void MSR_MSP(uint32_t addr) 
//{
//    MSR MSP, r0 			//set Main Stack value
//    BX r14
//}

//��ת��Ӧ�ó����
//appxaddr:�û�������ʼ��ַ.
void iap_load_app(uint32_t appxaddr)
{ 
//	if(((*(volatile uint32_t*)appxaddr)&0x2FF00000)==0x24000000)	//���ջ����ַ�Ƿ�Ϸ�.  // Ŀǰû��ô�ã���ʱ����
	{ 
		jump2app=(iapfun)*(volatile uint32_t*)(appxaddr+4);		//�û��������ڶ�����Ϊ����ʼ��ַ(��λ��ַ)		
//		MSR_MSP(*(volatile uint32_t*)appxaddr);					//��ʼ��APP��ջָ��(�û��������ĵ�һ�������ڴ��ջ����ַ)
//		__set_PSP(*(volatile uint32_t*) appxaddr);

 		__set_MSP(*(volatile uint32_t*) appxaddr);
		jump2app();									//��ת��APP.
	}
}		 


