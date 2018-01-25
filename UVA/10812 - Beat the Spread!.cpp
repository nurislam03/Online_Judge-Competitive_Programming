
#include <stdio.h>
int main()
{
    long int t,dif,sum;
    scanf("%ld",&t);

    while(t--)
    {
        scanf("%ld%ld",&sum,&dif);

        if(dif > sum || (sum-dif) % 2 == 1)
            printf("impossible\n");

        else
        {
            long int x =(sum - dif) / 2;
            long int  y = x + dif;

            printf("%ld %ld\n",x,y);
        }
    }
    return 0;
}
