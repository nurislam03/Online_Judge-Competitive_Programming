
//
//  Problem Name : 10948 - The primary problem
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
    int n;
    PrimeGenerate();
    while(scanf("%d",&n) && n)
    {
        bool flag = true;
        int left = 0, right = primes.size()-1;

        printf("%d:\n",n);
        while(left <= right)
        {
            int tmp = primes[left]+primes[right];
            if(tmp == n)
            {
                printf("%d+%d\n",primes[left], primes[right]);
                flag = false;
                break;
            }
            else if(tmp > n) right--;
            else left++;
        }
        if(flag) printf("NO WAY!\n");
    }


    return 0;
}
