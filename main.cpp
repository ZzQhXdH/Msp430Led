/**
 * 作者:灼灼其华	
 * @brif:Msp430G2553
 */

#include <msp430g2553.h>

class LedClass
{
public: 
	LedClass(void)
	{
		P1DIR |= 0x01;
		P1OUT &= ~0x01;
	}

	inline void lightUp(void) const
	{
		P1OUT |= 0x01;
	}

	inline void quench(void) const 
	{
		P1OUT &= ~0x01;
	}
	
	inline void toggle(void) const
	{
		P1OUT ^= 0x01;
	}

	static const LedClass& getInstance(void)
	{
		return Led;
	}

private:
	static LedClass Led;
};


int main(void)
{
	const LedClass& Led = LcdClass::getInstance();
	Led.lightUp();

	while (true)
	{

	}
}

