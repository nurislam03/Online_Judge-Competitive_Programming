
//
//  Problem Name : 10852 - Less Prime
//  Online judge : UVa
//  Tag          : Number Theory
//  Created by Nur Islam.
//


#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define all(ar) ar.begin(), ar.end()


#define SIZE 10000
vector <int> primes;
int isPrime[SIZE+10];
int t,n;

void PrimeGenerate()
{
    memset(isPrime, 0, sizeof(isPrime));
    for (int i = 2; i*i <= SIZE ; i++)
        if(isPrime[i] == 0)
        {
            for (int j = i * i; j <= SIZE; j += i)
                isPrime[j] = 1;
        }
    for(int i = 2; i <= SIZE ; i++)
    {
        if(isPrime[i] == 0)
            primes.push_back(i);
    }
}


int Less_Prime(int n)
{
    int res, dif = 0;
    for(int i = 0; i < primes.size(); i++)
    {
        int p = primes[i];
        if(p > n) break;
        int x = n/p;

        if(n-(p*x) > dif)
        {
            dif = n - (p*x);
            res = p;
        }
    }
    return res;
}

int main()
{
    scanf("%d",&t);
    PrimeGenerate();

    while(t--)
    {
        scanf("%d",&n);

        int ans = Less_Prime(n);
        printf("%d\n",ans);
    }


    return 0;
}
