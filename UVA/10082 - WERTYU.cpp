#include <iostream>
#include <string>
using namespace std;

int main()
{
	string keyboard = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	char c;
    cout << keyboard[0] << " " << keyboard[1] << endl;
	while (cin.get(c))
    {
		if (c == '\n' || c == ' ') cout << c;
		else
        {
            int k = 0;
            while (c != keyboard[k]) k++;

            printf("%c",keyboard[k-1]);
		}
	}

	return 0;
}
