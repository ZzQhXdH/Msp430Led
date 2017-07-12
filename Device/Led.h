/**
 * 作者:灼灼其华
 * @brief: Led驱动程序
 */

#include <msp430.h>


class LedClass
{
public:
	enum LedPin
	{
		Led1 = 0x01,
		Led2 = 0x02,
		Led3 = 0x04,
	};

public:
	LedClass(void);
	void lightUp(LedPin pin) const;
	void quench(LedPin pin) const;
	void toggle(LedPin pin) const;

	static const LedClass& getInstance(void);

private:
	static void LedClass Led;

};







