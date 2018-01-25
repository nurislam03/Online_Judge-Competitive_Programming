#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
#define SIZE 1000000
vector <int> primes;
int isPrime[SIZE+10];


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


int main()
{
    PrimeGenerate();
    int n,cnt = 0;

    while(scanf("%d",&n) && n)
    {
        cnt = 0;
        for(int i = 0; i < primes.size(); i++)
        {
            if(primes[i] > n)
                break;

            if(n % primes[i] == 0)
                cnt++;
        }
        cout << n << " : " << cnt << endl;
    }

    return 0;
}
