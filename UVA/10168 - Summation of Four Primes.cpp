
//
//  Problem Name : 10168 - Summation of Four Primes
//  Online judge : UVa
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

#define sz 10000000
vector <int> primes;
bool is_prime[sz+10];
map <int, int> Map;


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

    for(int i = 2; i <= sz; i++)
    {
        if(is_prime[i] == true)
            primes.push_back(i);
    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //read("input.txt");
    //write("output.txt");

    int n;
    PrimeGenerate();


    while(scanf("%d",&n) != EOF)
    {
        int tmp;
        if(n % 2 == 0) tmp = n-4;
        else tmp = n-5;

        bool flag = false;
        for(int i = 0; (i < primes.size() && tmp >= 4); ++i)
        {
            int k = tmp - primes[i];

            if(is_prime[k] == true)
            {
                if(n%2 == 0) printf("2 2 %d %d\n",k, primes[i]);
                else printf("2 3 %d %d\n",k, primes[i]);

                flag = true; break;
            }
        }
        if(flag == false) printf("Impossible.\n");

    }

    return 0;
}
