/*
 ============================================================================
 Name        : Linked_List_Driver.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "Linked_List.h"
int main(void) {
	char temp_text[40];

	while(1){
		DPRINTF("\n =========================");
		DPRINTF("\n\t Choose one of the following Options\n");
		DPRINTF("\n 1: Add_Student ");
		DPRINTF("\n 2: Delete_Student ");
		DPRINTF("\n 3: View_Students ");
		DPRINTF("\n 4: Delete_All ");
		DPRINTF("\n 5: Get_Nth ");
		DPRINTF("\n 6: Show_Length_Iterative ");
		DPRINTF("\n 7: Show_Length_Recursive ");
		DPRINTF("\n 8: Get_Nth_From_End ");
		DPRINTF("\n 9: Get_Middle_Of_List ");
		DPRINTF("\n 10: Detect_Loop ");
		DPRINTF("\n 11: Reverse_List");
		DPRINTF("\n Enter Option Number: ");

		gets(temp_text);
		DPRINTF("\n =========================");
		switch(atoi(temp_text)){
		case 1:
			Add_Student();
			break;
		case 2:
			Delete_Student();
			break;
		case 3:
			View_Students();
			break;
		case 4:
			Delete_All();
			break;
		case 5:
			Get_Nth();
			break;
		case 6:
			Show_Length_Iterative();
			break;
		case 7:
			Show_Length_Recursive();
			break;
		case 8:
			Get_Nth_From_End();
			break;
		case 9:
			Get_Middle_Of_List();
			break;
		case 10:
			Detect_Loop();
			break;
		case 11:
			Reverse_List();
			break;
		default:
			DPRINTF("\n wrong option!!");
			break;
		}
	}
	return 0;
}
