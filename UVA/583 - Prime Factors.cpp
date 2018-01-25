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

//#define sz 2147483648 // 2^31 - 1
vector <int> primes;
bool is_prime[46340+100];


void PrimeGenerate()
{
    memset(is_prime, true, sizeof(is_prime));
    primes.push_back(2);

    for (int i = 3; i < 46340; i += 2)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            for (int j = i*i; j < 46340; j += i)
                is_prime[j] = false;
        }
    }
}


int main()
{
    int num;
    PrimeGenerate();
    
    while (scanf("%d", &num) && num != 0)
    {
        printf("%d =", num);
        bool anotherOccurance(false);

        if (num < 0)
        {
            num *= -1;
            printf(" -1");
            anotherOccurance = true;
        }
        else if (num == 1) printf(" 1");


        for (int pos = 0; ((primes[pos]*primes[pos] <= num) && (pos < primes.size())); ++pos)
        {
            while (num % primes[pos] == 0)
            {
                if (anotherOccurance)
                    printf(" x %d", primes[pos]);
                else
                    printf(" %d", primes[pos]);

                anotherOccurance = true;
                num /= primes[pos];
            }
        }

        if (num > 1)
        {
            if (anotherOccurance)
                printf(" x %d", num);
            else
                printf(" %d", num);
        }

        printf("\n");
    }
}
