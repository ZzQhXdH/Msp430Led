/**
 * 作者:灼灼其华
 * @brief: Uart驱动程序
 */

#include <msp430.h>
#include <stdint.h>


class UartClass
{
public:
	enum Parity
	{
		None,
		Odd,
		Even,
	};

	enum BaudRate
	{
		BaudRate_2400 = 2400,
		BaudRate_4800 = 4800,
		BaudRate_9600 = 9600,
		BaudRate_19200 = 19200,
		BaudRate_38400 = 38400,
		BuadRate_115200 = 115200,
	};
	
	enum StopBits
	{
		StopBits_1 = 0,
		StopBits_1_5 = 3,
		StopBites_2 = 2,
	};

public:
	UartClass(void);
	
	void sendByte(uint8_t byte) const;
	void sendString(const char *string) const;
	void sendNumber(int number, int base = 10) const;
	
	const UartClass& operator<<(char c) const;
	const UartClass& operator<<(const char *string) const;
	const UartClass& operator<<(int number) const;

private:
	void setBaudrate(BaudRate baudRate = BaudRate_115200);
	void setParity(Parity parity = None);
	void setStopBits(StopBits stopBits = StopBits_1);
};


