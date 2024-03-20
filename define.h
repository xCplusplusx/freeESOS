#ifndef DEFINE
#define  DEFINE

typedef unsigned char uchar; // 8 Bit 
typedef unsigned short ushort; // 16 Bit
typedef unsigned int  uint; // 32 Bit
typedef unsigned long long uint64;
typedef long long int64;

#ifdef DRIVER

//For the Ports 
#define INPUT (uchar) 0
#define OUTPUT (uchar) 2
#define PULLUP_INPUT (uchar) 1

#define LOW (uchar) 0
#define HIGH (uchar) 1

#endif

#endif

