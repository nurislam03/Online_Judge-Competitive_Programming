#include <iostream>
using namespace std;

int main()
{
	int T, e, f, c, emptyBottle, soda;
    scanf("%d",&T);

    for( int t = 1 ; t <= T ; t++ )
	{
        scanf("%d %d %d", &e, &f, &c);
        emptyBottle = e + f;
        soda = 0;

        while(emptyBottle >= c)
		{
            soda += emptyBottle / c;
            emptyBottle = (emptyBottle / c) + (emptyBottle % c);
        }
        printf("%d\n",soda);
    }
	return 0;
}
