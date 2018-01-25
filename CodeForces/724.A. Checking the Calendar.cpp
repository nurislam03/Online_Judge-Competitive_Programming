#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

string week[] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};

int main()
{
	string a,b;
	int p,q;
	cin >> a >> b;

	for(int i = 0; i < 7; ++i) if (week[i] == a) p = i;
	for(int i = 0; i < 7; ++i) if (week[i] == b) q = i;

	if (p==q || (p+2)%7 == q || (p+3)%7 == q)
		puts("YES");

	else
		puts("NO");

	return 0;
}
