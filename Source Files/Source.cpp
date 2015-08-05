#include <iostream>
#include <locale>
#include <conio.h>
#include <time.h>
#include "Crypt.h"
#include "Dictionary.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "Turkish"); // Set language

	char uncrypt[32];			// Enter uncrypt text 32 bit distance
	int cryptText[32];			// Crypt text
	char ch;					// char value
	int count = 0;				// Count


	//Array values is NULL
	for (int i = 0; i < 32; i++)
	{
		uncrypt[i] = NULL;
	}

	//information for to do prosses for user
	cout << "L�tfen metni giriniz ard�ndan ESC tu�una bas�n�z:" << endl;

	// if user put a key, while keep this a key.
	while ((ch = _getch()) != 27)
	{
		// This control is array limit
		if (count < 32)
		{
			uncrypt[count] = ch;
			cout << uncrypt[count];
			count++;
		}
		else
		{
			cout << endl << "32 karakter doldu ESC basiniz" << endl; // Attention for user
		}
	}

	// crypt
	int valueTemp = 0;
	for (int i = 0; i < 32; i++) // Crypt array elements
	{
		if (uncrypt[i] == 0 && i == 0)
		{
			for (int i = 0; i < 32; i++)
			{
				srand(time(NULL));
				//test
				uncrypt[i] = rand() % 100;
				Crypt cry(uncrypt[i], i);
				Dictionary letter(cry.result() % 62);
				cout << letter.text();
			}
			break;
		}
		else
		{

			if (i == 0)
			{
				Crypt n(uncrypt[i], i);
				int k = n.result() * n.result();
				k = k % 62;
				Dictionary let(k);
				cout << let.text();
			}
			else
			{
				Crypt n((uncrypt[i] + valueTemp), i);
				int k = n.result() % 62;
				Dictionary let(k);
				cout << let.text();
			}
		}
		
	}
	cout << endl;
	system("PAUSE");
	return 0;
}