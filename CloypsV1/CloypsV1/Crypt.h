#pragma once
class Crypt
{
public:
	Crypt(int value, int method);
	~Crypt();

	int result() {
		return _result;
	}
private:
	int _result;
};

