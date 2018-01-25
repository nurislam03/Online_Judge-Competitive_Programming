#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;


int main()
{
    long long A,L,tC = 0;
    while(scanf("%lld %lld",&A,&L) == 2)
    {
        if(A < 0 && L < 0) break;

        printf("Case %lld: A = %lld, limit = %lld, number of terms = ",++tC,A,L);
        long long cnt = 0;

        while(A <= L)
        {
            if(A == 1)
            {
                cnt++;
                break;
            }
            else if(A%2 == 0)
            {
                cnt++;
                A/=2;
            }
            else if(A%2 == 1)
            {
                cnt++;
                A = A*3+1;
            }
        }

        printf("%lld\n",cnt);
    }

    return 0;
}
