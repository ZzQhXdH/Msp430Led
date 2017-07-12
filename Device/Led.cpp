#include "Device/Led.h"


LedClass::LedClass(void)
{
	P1DIR |= Led1 | Led2 | Led3;
	
}

void LedClass::lightUp(LedPin pin)
{
	P1OUT |= pin;
}

void LedClass::quench(LedPin pin)
{
	P1OUT &= ~pin;
}









