#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    scanf("%d",&tt);
    char a[12];

    for( int t = 1 ; t <= tt ; t++ )
    {
        scanf("%s",&a);
        int flag = 0,length = 0;
        for( int i = 0 ; a[i] != '\0' ; i++) length++;

        for( int i = 0 , j = length - 1 ; i < (length / 2) ; i++ ,j--)
        {
            if( a[i] != a[j] )
            {
                printf("Case %d: No\n",t);
                flag++;
                break;
            }
        }
        if( flag == 0 ) printf("Case %d: Yes\n",t);
    }
    return 0;
}
