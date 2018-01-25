#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	for(int t = 1; t <= n; t++)
	{
		cin >> s;
		int len = (s.size()/2);
		for(int i = 0; i < len; i++)
		{
			if(i%2 == 0) printf("%c",s[i]);
		}
		printf("\n");
	}
	return 0;
}
