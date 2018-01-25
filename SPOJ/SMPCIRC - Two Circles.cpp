#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;



int distanceSquare(int x1, int y1, int x2, int y2)
{
	int X = x2-x1;
	int Y = y2-y1;

	return (X*X + Y*Y);
}

int diffSquare(int x, int y)
{
	return ((y-x)*(y-x));
}



int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int x1,y1,r1,x2,y2,r2;
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);

        int SquareDist = distanceSquare(x1, y1, x2, y2);
        int SquareDiff = diffSquare(r1, r2);

        if(SquareDist <= SquareDiff)
        {
            if(SquareDist == SquareDiff)
            {
                printf("E\n");
            }
            else printf("I\n");
        }
        else printf("O\n");
    }


    return 0;
}
