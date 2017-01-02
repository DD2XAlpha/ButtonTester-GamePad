#include "lib_easy.h"

int Menu_Main(void) {
	uprintf("--------------------------------------------Button tester-------------------------------------------------");
	uprintf("\n\n");
	uprintf("Touch the screen to clean screen");
	
	while(1) { 
		updatePressedButtons(); //Update buttons state
		while(1) {
		
		
		//Press Button A
		if(isPressed(VPAD_BUTTON_A));
		uprintf("\n");
		uprintf("A button pressed");
		
		
		//Press Button B 
		if(isPressed(VPAD_BUTTON_B));
		uprintf("\n");
        uprintf("B button Pressed");
		
		//Touch buttton ucls
		if(isPressed(VPAD_BUTTON_TOUCH));
		ucls(); break;
		
		}
		
		
		if(isPressed(VPAD_BUTTON_HOME)) break; //Check if home is pressed
	}
	uprintf("\n");
	
	uprintf("Exiting...");
	return 0;
}

