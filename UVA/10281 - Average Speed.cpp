#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	char buffer[1000];
	int previousTime = 0;
	int hour, min, sec, newSpeed = 0;
	double distance = 0;

	while(scanf("%s",buffer) != EOF)
	{
		sscanf(buffer, "%d:%d:%d", &hour, &min, &sec);
		int currentTime = hour * 3600 + min * 60 + sec;

		distance += (currentTime - previousTime) * newSpeed;
		previousTime = currentTime;

		char ch = getchar();
		if(ch == ' ')
			scanf("%d",&newSpeed);

		else if(ch == '\n')
			printf("%02d:%02d:%02d %.2lf km\n", hour, min, sec, distance/3600);
	}

	return 0;
}
