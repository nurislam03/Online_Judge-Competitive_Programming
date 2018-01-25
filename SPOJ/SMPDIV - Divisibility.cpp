#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;



int main()
{
    int t,n,x,y;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d",&n,&x,&y);

        bool flag = true;
        for(int i = 1; i < n; i++)
        {
            if((i%x == 0) && (i%y != 0))
            {
                if(flag)
                {
                    printf("%d",i);
                    flag = false;
                }
                else printf(" %d",i);
            }
        }
        printf("\n");

    }
    return 0;
}
