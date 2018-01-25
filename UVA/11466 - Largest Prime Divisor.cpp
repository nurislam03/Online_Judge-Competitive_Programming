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

#define sz 10001000
vector <long long> primes;
bool is_prime[sz+100];


void PrimeGenerate()
{
    memset(is_prime, true, sizeof(is_prime));
    is_prime[1] = false;

    for (long long i = 2; i <= sz; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            for (long long j = i*i; j <= sz; j += i)
                is_prime[j] = false;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //read("input.txt");
    //write("output.txt");

    long long num;
    PrimeGenerate();

    while (scanf("%lld", &num))
    {
        if(num == 0) break;
        if(num < 0) num *= -1;

        long long LargestPrime, cnt = 0, pos;
        for (pos = 0, cnt =0; ((pos < primes.size()) && (num > 1) && (primes[pos] <= num)); ++pos)
        {
            if(num%primes[pos] == 0)
            {
                cnt++;
                while ((num > 1) && (num % primes[pos] == 0))
                    num /= primes[pos];

                LargestPrime = primes[pos];
            }
            if(num == 1) break;

        }

        if(num == 1)
        {
            if(cnt > 1) printf("%lld\n",LargestPrime);
            else printf("-1\n");

        }
        else
        {
            if(cnt > 0) printf("%lld\n",num);
            else printf("-1\n");
        }

    }
}
