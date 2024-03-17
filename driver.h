#ifndef DRIVER

#define DRIVER


void check_registers();


#ifdef PORTB
void set_PORTB(char *, char *);

#endif
#ifdef PORTC
void set_PORTC(char);

#endif
#ifdef PORTD
void set_PORTD(char);

#endif

#endif