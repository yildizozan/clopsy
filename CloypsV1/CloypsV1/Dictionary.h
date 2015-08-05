#pragma once
class Dictionary
{
public:
	Dictionary(int mod);
	~Dictionary();

	char text() {
		return letter;
	}
private:
	char letter;
};

