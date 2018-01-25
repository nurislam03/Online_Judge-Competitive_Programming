#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>


using namespace std;
#define LL long long
#define ULL unsigned long long
#define sz 10000
vector <int> primes;
int isPrime[sz+10];


void PrimeGenerate()
{
    memset(isPrime, 0, sizeof(isPrime));

    for (int i = 2; i*i <= sz ; i++)
        if(isPrime[i] == 0)
        {
            for (int j = i * i; j <= sz; j += i)
                isPrime[j] = 1;
        }
}


int main()
{
    PrimeGenerate();
    isPrime[1] = 1;

    int q,x,y,ans;
    scanf("%d",&q);

    for(int i = 1; i <= q; i++)
    {
        scanf("%d %d",&x,&y);
        ans = 0;
        while(y >= x)
        {
            if(isPrime[y] == 0)
            {
                ans = y;
                break;
            }
            y--;
        }
        if(ans == 0) printf("-1\n");
        else printf("%d\n",ans);
    }

    return 0;
}
