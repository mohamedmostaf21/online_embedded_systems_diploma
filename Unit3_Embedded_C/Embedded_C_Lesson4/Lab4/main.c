/*Learn-in-depth
Eng. Moahmed Mostafa Shaban
Mastering Embedded System online diploma*/

#include "Platform_Types.h"



// register addresses

#define SYSCTL_RCGC2_R			(*((volatile unsigned long *)0x400FE108))
#define GPIO_PORTF_DATA_R 		(*((volatile unsigned long *)0x400253FC))
#define GPIO_PORTF_DIR_R 		(*((volatile unsigned long *)0x40025400))
#define GPIO_PORTF_DEN_R 		(*((volatile unsigned long *)0x4002551C))

int main(){
	volatile unsigned long delay_count; //volatile to turn off optimization of delay
	SYSCTL_RCGC2_R = 0x00000020;
	//certain delay for cpu to enable portf
	for(delay_count = 0; delay_count < 200; delay_count++);
	GPIO_PORTF_DIR_R |= 1 << 3;
	GPIO_PORTF_DEN_R |= 1 << 3;
	while(1){
		GPIO_PORTF_DATA_R |= 1 << 3;
		for(delay_count = 0; delay_count < 200000; delay_count++);
		GPIO_PORTF_DATA_R &= ~(1 << 3);
		for(delay_count = 0; delay_count < 200000; delay_count++);

	} 
	return 0;
}