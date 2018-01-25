//NSU Joint Mock Programming Training 1 (For Beginner)
//link : http://acm.hust.edu.cn/vjudge/contest/view.action?cid=113769#problem/B

#include<iostream>
#include <cstring>
#include<cstdio>
using namespace std;
int x,n,ara[210],arr[20];

int main()
{
    while( 1 )
    {
        memset(ara , 0 , sizeof(ara) );
        int i = 0,res = 0;
        scanf("%d",&x);

        if( x == -1 ) break;
        ara[x]++;
        arr[i] = x;

        while( 1 )
        {
            i++;
            scanf("%d",&x);
            if( x == 0 ) break;
            ara[x]++;
            arr[i] = x;
        }
        for( int k = 0 ; k < i ; k++ )
        {
            n = arr[k];
            if( ( ara[n*2] ) != 0 ) res++;
        }
        cout<<res<<endl;
    }
    return 0;
}
