
//
//  main.cpp
//  686 - Goldbach's Conjecture(II)
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



#define sz 50000
vector < int > PrimeNumber;
int primes[sz+10];
int cntCheck[sz+10];


void PrimeGenerate()
{
    memset(primes, 0, sizeof(primes));
    for(int i = 2; i*i <= sz; i++)
    {
        if(primes[i] == 0)
        {
            for (int j = i * i; j <= sz; j += i)
                primes[j] = 1;
        }
    }

    for(int i = 2; i <= sz; i++)
    {
        if(primes[i] == 0)
            PrimeNumber.push_back(i);
    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    //read("input.txt");
    //write("output.txt");

    int n;
    PrimeGenerate();

    while(scanf("%d",&n) && n)
    {
        int pairCnt = 0,p1 = 0,p2 = PrimeNumber.size()-1;
        while(PrimeNumber[p2] > n) p2--;
        memset(cntCheck, 0, sizeof(cntCheck));


        while(1)
        {
            if(p1 >= p2) break;
            
            if(PrimeNumber[p1]+PrimeNumber[p2] == n)
            {
                pairCnt++;
                cntCheck[p1] = 1; cntCheck[p2] = 1;

                p1++;
                if((PrimeNumber[p1]+PrimeNumber[p1] == n) && cntCheck[p1] == 0)
                    pairCnt++,cntCheck[p1] = 1;

                p2--;
                if((PrimeNumber[p2]+PrimeNumber[p2] == n) && cntCheck[p2] == 0)
                    pairCnt++,cntCheck[p2] = 1;
            }
            else if(PrimeNumber[p1]+PrimeNumber[p2] > n)
            {
                p2--;
                if(PrimeNumber[p2]+PrimeNumber[p2] == n && cntCheck[p2] == 0)
                    pairCnt++, cntCheck[p2] = 1;
            }
            else if(PrimeNumber[p1]+PrimeNumber[p2] < n)
            {
                p1++;
                if(PrimeNumber[p1]+PrimeNumber[p1] == n && cntCheck[p1] == 0)
                    pairCnt++,cntCheck[p1] = 1;
            }
        }
        printf("%d\n",pairCnt);
    }


    return 0;
}
