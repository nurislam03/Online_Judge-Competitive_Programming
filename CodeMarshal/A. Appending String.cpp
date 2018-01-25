#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    int T,q,k;
    scanf("%d",&T);


    while(T--)
    {
        string y = "";
        char x[1000+6];
        //cin >> x;
        scanf("%s",x);

        //scanf("%s",x);
        for( int i = 0; i < strlen(x) ; i++ )
        {
            if(x[i] >= 'a' && x[i] <= 'z')
            {
                //temp = "";
                //temp = x[i];
                //y = y + temp;
                //y[y.size()] = x[i];
                y += x[i];
            }
            else if( x[i] >= '0' && x[i] <= '9')
            {
                int num = (x[i] - '0') - 1;

                string temp = "";
                temp = y;
                while(num--) y = y + temp;
            }
        }
        scanf("%d",&q);
        while(q--)
        {
            scanf("%d",&k);
            if( k <= y.size() ) printf("%c\n",y[k-1]);
            else printf("-1\n");
        }
    }
    return 0;
}
