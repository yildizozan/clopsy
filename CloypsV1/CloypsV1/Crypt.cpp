#include "Crypt.h"



Crypt::Crypt(int value, int method)
{
	if (method == 0)
	{
		_result = value * value * 23;
	}
	else if (method == 1)
	{
		_result = value * value * 98;
	}
	else if (method == 2)
	{
		_result = value * value * 13;
	}
	else if (method == 3)
	{
		_result = value * value * 75;
	}
	else if (method == 4)
	{
		_result = value * value * 22;
	}
	else if (method == 5)
	{
		_result = value * value * 55;
	}
	else if (method == 6)
	{
		_result = value * value * 63;
	}
	else if (method == 7)
	{
		_result = value * value * 17;
	}
	else if (method == 8)
	{
		_result = value * value * 20;
	}
	else if (method == 9)
	{
		_result = value * value * 80;
	}
	else if (method == 10)
	{
		_result = value * value * 117;
	}
	else if (method == 11)
	{
		_result = value * value * 40;
	}
	else if (method == 12)
	{
		_result = value * value * 5;
	}
	else if (method == 13)
	{
		_result = value * value * 49;
	}
	else if (method == 14)
	{
		_result = value * value * 98;
	}
	else if (method == 15)
	{
		_result = value * value * 6;
	}
	else if (method == 16)
	{
		_result = value * value * 28;
	}
	else if (method == 17)
	{
		_result = value * value * 76;
	}
	else if (method == 18)
	{
		_result = value * value * 82;
	}
	else if (method == 19)
	{
		_result = value * value * 27;
	}
	else if (method == 20)
	{
		_result = value * value * 58;
	}
	else if (method == 21)
	{
		_result = value * value * 95;
	}
	else if (method == 22)
	{
		_result = value * value * 17;
	}
	else if (method == 23)
	{
		_result = value * value * 67;
	}
	else if (method == 24)
	{
		_result = value * value * 5;
	}
	else if (method == 25)
	{
		_result = value * value * 65;
	}
	else if (method == 26)
	{
		_result = value * value * 12;
	}
	else if (method == 27)
	{
		_result = value * value * 43;
	}
	else if (method == 28)
	{
		_result = value * value * 73;
	}
	else if (method == 29)
	{
		_result = value * value * 37;
	}
	else if (method == 30)
	{
		_result = value * value * 13;
	}
	else if (method == 31)
	{
		_result = value * value * 24;
	}

}


Crypt::~Crypt()
{
}
