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

#define sz 100000
vector <long long> primes;
bool is_prime[100000+100];


void PrimeGenerate()
{
    memset(is_prime, true, sizeof(is_prime));

    for (long long i = 2; i < 100000; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            for (long long j = i*i; j < 100000; j += i)
                is_prime[j] = false;
        }
    }
}


int main()
{
    long long num;
    PrimeGenerate();
    while (scanf("%lld", &num))
    {
        if(num < 0) break;

        for (int pos = 0; ((primes[pos]*primes[pos] <= num) && (pos < primes.size())); ++pos)
        {
            while (num % primes[pos] == 0)
            {
                printf("    %lld\n", primes[pos]);
                num /= primes[pos];
            }
        }

        if (num > 1) printf("    %lld\n", num);
        printf("\n");
    }
}
