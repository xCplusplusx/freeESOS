#ifndef DRIVER

#define DRIVER

#include <define.h>

typedef struct {	
	union set
	{
	ushort Bitmask;
	ushort D0 : 2;
	ushort D1 : 2;
	ushort D2 : 2;
	ushort D3 : 2;
	ushort D4 : 2;
	ushort D5 : 2;
	ushort D6 : 2;
	ushort D7 : 2;
	};
	union
	{
	uchar Bitmask;
	uchar D0 : 1;
	uchar D1 : 1;
	uchar D2 : 1;
	uchar D3 : 1;
	uchar D4 : 1;
	uchar D5 : 1;
	uchar D6 : 1;
	uchar D7 : 1;
	};

}Port;

void check_registers();

#ifdef PUD

void force_Pullup();
void earse_Pillup();

#endif

#ifdef PORTB
void set_PORTB(Port *);
void setup_PORTB(Port *);
#endif
#ifdef PORTC
void set_PORTC(Port *);
void setup_PORTC(Port *);
#endif
#ifdef PORTD
void set_PORTD(Port *);
void setup_PORTD(Port *);
#endif

#endif