#pragma once
class dictionary
{
public:
	dictionary(int mod);
	~dictionary();

	char text() {
		return letter;
	}
private:
	char letter;
};

