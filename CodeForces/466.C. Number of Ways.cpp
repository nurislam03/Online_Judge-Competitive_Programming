#include <iostream>
#include <cstdio>
using namespace std;
int Array[500000+10];

int main()
{
    int n,x;
    long long res = 0,tot = 0;
    scanf("%d",&n );

    for( int i = 0 ; i < n ; i++ )
    {
        scanf("%d",&Array[i] );
        tot += Array[i];
    }

    if( tot % 3 != 0 || n < 3 ) res = 0;
    else
    {
        long long Num,temp = 0,T = 0;
        Num = tot / 3;

        for( int i = 0 ; i < n-1 ; i++ )
        {
            temp += Array[i];
            if( temp == Num * 2 ) res += T;
            if( temp == Num ) T++;

        }
    }
    cout << res << endl;
    return 0;
}
