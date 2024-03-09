#include <driver.h>


void check_registers(){

    asm("LDI r0, 0xFF");
    asm("MOV r1, r0");
    asm("MOV r2, r1");
    asm("MOV r3, r2");
    asm("MOV r4, r3");
    asm("MOV r5, r4");
    asm("MOV r6, r5");
    asm("MOV r7, r6");
    asm("MOV r8, r7");
    asm("MOV r9, r8");
    asm("MOV r10, r9");



}