#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <cctype>
#include <sstream>

using namespace std;

long long Reverse( long long n )
{
    long long rev = 0;
    while(n)
    {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    return rev;
}


int main()
{
    int T;
    cin >> T;

    for( int t = 1; t <= T; t++ )
    {
        long long Num,revNum,Count = 0;
        cin >> Num;

        revNum = Reverse(Num);

        if( Num == revNum ) printf("0 %lld\n",Num);
        else
        {
            while(Num != revNum)
            {
                Num += revNum;
                revNum = Reverse(Num);
                Count++;
            }
            printf("%lld %lld\n",Count,Num);
        }

    }
    return 0;
}
