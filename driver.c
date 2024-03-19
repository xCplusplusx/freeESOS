#include "driver.h"
#include "define.h"

void check_registers(){

    asm("SER r16");
    asm("MOV r17, r16");
    asm("MOV r18, r17");
    asm("MOV r19, r18");
    asm("MOV r20, r19");
    asm("MOV r21, r20");
    asm("MOV r22, r21");
    asm("MOV r23, r22");
    asm("MOV r24, r23");
    asm("MOV r25, r24");
    asm("MOV r26, r25");
    asm("MOV r27, r26");
    asm("MOV r28, r27");
    asm("MOV r29, r27");
    asm("MOV r30, r29");
    asm("MOV r31, r30");
    asm("CPSE r16, r31");
    asm("JMP 0x00"); // Springt zum Anfang zurück
}



void set_PORTB(Port portB, uchar setup){
		
	switch (setup)
	{
		case INPUT:
		break;
		case OUTPUT:
		break;
		case PU_INPUT:
			
		break; 
		default:
			return;
	}
	

}
