#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string str;
	int temp;

	while(getline(cin, str) && sizeof(str))
	{
		temp = 0;
		char c;

		for (int i = 0; str[i]; i++)
		{
			c = str[i];
			if (c >= '1' && c <= '9')
			{
				temp += c - 48;
				continue;
			}

			if(c == 'b')
			{
				for (int j = 0; j < temp; j++)
					cout << " ";

				temp = 0;
				continue;
			}

			else if(c == '!' || c == '\n')
			{
				cout << endl;
				continue;
			}

			else
			{
				for (int j = 0; j < temp; j++)
					cout << c;

				temp = 0;
			}
		}
		cout << endl;
	}

	return 0;
}
