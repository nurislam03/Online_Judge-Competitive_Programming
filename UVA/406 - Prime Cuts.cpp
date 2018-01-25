

//
//  406 - Prime Cuts
//
//  Created by Nur Islam on 1/14/17.
//  Copyright © 2017 Nur Islam. All rights reserved.
//


#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)



#define sz 1000
vector <int> primes;
vector <int> primeList;
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

    for(int i = 1; i <= sz; i++)
    {
        if(is_prime[i] == true)
            primes.push_back(i);
    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    //read("input.txt");
    //write("output.txt");

    int n,c;
    PrimeGenerate();

    while(scanf("%d %d",&n,&c) != EOF)
    {
        int k = 0;
        primeList.clear();

        while(k < primes.size() && primes[k] <= n)
        {
            primeList.push_back(primes[k]);
            k++;
        }


        int cuts = (primeList.size()%2 == 0)? 2*c : c*2-1;
        if(cuts > primeList.size()) cuts = primeList.size();

        int begin = (primeList.size() - cuts)/2;
        if(begin < 0) begin = 0;

        printf("%d %d:",n,c);
        for(int i = begin; i < begin+cuts; ++i)
        {
            printf(" %d",primeList[i]);
        }
        printf("\n\n");
    }


    return 0;
}
