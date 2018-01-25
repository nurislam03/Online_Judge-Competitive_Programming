#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
char s[201];
int Sum[201] = {0};


int main()
{

	while(gets(s))
	{
		int length = strlen(s);
		if(length == 1 && s[0] == '0')
			break;

		for(int i = 0, j = length-1; i < length; i++, j--)
			Sum[i] += s[j] - '0';
	}


	for(int i = 0; i < 200; i++)
		if(Sum[i] >= 10)
		{
			Sum[i+1] += Sum[i]/10;
			Sum[i] %= 10;
		}


	int k = 200;
	while(Sum[k] == 0 && k >= 0)
		k--;


	if(k == -1)	printf("0");

	for(; k >= 0; k--)
		printf("%d", Sum[k]);

	puts("");

    return 0;
}
