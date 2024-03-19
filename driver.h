#ifndef DRIVER

#define DRIVER

#include <define.h>

typedef union {

	uchar Bitmask;
	uchar D0 : 1;
	uchar D1 : 1;
	uchar D2 : 1;
	uchar D3 : 1;
	uchar D4 : 1;
	uchar D5 : 1;
	uchar D6 : 1;
	uchar D7 : 1;
	
}Port;

void check_registers();

#ifdef PORTB
void set_PORTB(Port, uchar);

#endif
#ifdef PORTC
void set_PORTC(char);

#endif
#ifdef PORTD
void set_PORTD(char);

#endif

#endif