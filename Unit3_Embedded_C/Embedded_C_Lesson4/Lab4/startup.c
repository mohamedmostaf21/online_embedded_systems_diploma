/* Learn-in-depth
Mastering_Embedded
Eng. Mohamed Mostafa */
#include <stdint.h>

extern int main(void);
void Rest_Handler(void);

void Default_Handler()
{
	Rest_Handler();
}

void NMI_Handler(void)__attribute__((weak,alias("Default_Handler")));;
void H_Fault_Handler(void)__attribute__((weak,alias("Default_Handler")));;
void MM_Fault_Handler(void)__attribute__((weak,alias("Default_Handler")));;
void Bus_Fault(void)__attribute__((weak,alias("Default_Handler")));;
void Usage_Fault_Handler(void)__attribute__((weak,alias("Default_Handler")));;
//reserve stack size
static unsigned long Stack_top[256]; //256 * 4 =  1024B
//======================================
void ( * const g_p_fn_Vectors[])() __attribute__((section(".vectors"))) = 
{
	(void (*)()) ((unsigned long)Stack_top+ sizeof(Stack_top)),
	&Rest_Handler ,
	&NMI_Handler ,
	&H_Fault_Handler ,
	&MM_Fault_Handler ,
	&Bus_Fault ,
	&Usage_Fault_Handler
};
extern unsigned int _S_DATA;
extern unsigned int _E_DATA;
extern unsigned int _S_bss;
extern unsigned int _E_bss;
extern unsigned int _E_text;

void Rest_Handler(void){
	//copy Data from ROM to RAM
	unsigned int DATA_size = (unsigned char*)&_E_DATA - (unsigned char*)&_S_DATA;
	//pointer to points to source  and pointer to  point to destinatiom
	unsigned char* P_src = (unsigned char*)&_E_text; //char to copy byte by byte 
	unsigned char* P_dst = (unsigned char*)&_S_DATA;
	//loop on byte by byte copying .data
	for(int  i = 0; i < DATA_size; i++){
		*((unsigned char*)P_dst++) = *((unsigned char*)P_src++);
	}	//init the .bss with zeros
	unsigned int bss_size  = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss;
	P_dst = (unsigned char*)&_S_bss;
	for(int  i = 0; i < bss_size; i++){
		*((unsigned char*)P_dst++) = (unsigned char)0;
	}

	//jumo to main (learn-in-depth ;)
	main();
}
