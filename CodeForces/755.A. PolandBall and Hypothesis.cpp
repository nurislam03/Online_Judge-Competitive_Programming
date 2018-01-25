#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>

using namespace std;
#define mod 1000003
#define sz 1000000
#define LL long long
#define ULL unsigned long long

bool is_prime[sz+10];


void PrimeGenerate()
{
    memset(is_prime, true, sizeof(is_prime));
    for(int i = 2; i*i <= sz; i++)
    {
        if(is_prime[i] == true)
        {
            for (int j = i*i; j <= sz; j += i)
                is_prime[j] = false;
        }
    }
/*
    for(int i = 2; i <= sz; i++)
    {
        if(is_prime[i] == true)
            primes.push_back(i);
    }
    */
}

int main()
{
    int n;
    cin >> n;
    PrimeGenerate();

    for(int i = 1; i <= 1000; i++)
    {
        int tmp = (n*i)+1;
        if(is_prime[tmp] == false)
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
