#pragma once
class crypt
{
public:
	crypt(int value, int method);
	~crypt();

	int result() {
		return _result;
	}
private:
	int _result;
};

