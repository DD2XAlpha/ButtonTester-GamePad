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
		uprintf("Haz presionado el boton A");
		
		
		//Press Button B 
		if(isPressed(VPAD_BUTTON_B));
		uprintf("\n");
        uprintf("Haz preisionado el boton B");
		
		//Touch buttton ucls
		if(isPressed(VPAD_BUTTON_TOUCH));
		ucls(); break;
		
		}
		
		
		if(isPressed(VPAD_BUTTON_HOME)) break; //Check if home is pressed
	}
	uprintf("\n");
	
	uprintf("Saliendo...");
	return 0;
}

