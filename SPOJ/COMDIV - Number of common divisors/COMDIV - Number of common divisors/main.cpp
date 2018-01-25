//
//  main.cpp
//  COMDIV - Number of common divisors
//
//  Created by Nur Islam on 5/25/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

#define SIZE 100010
vector < int > PrimeNumber;
int primes[SIZE+10];

void PrimeGenerate()
{
    memset( primes, 0, sizeof(primes) );
    for( int i = 2; i*i <= 100000 ; i++ )
    {
        if( primes[i] == 0 )
        {
            for( int j = i * i ; j <= 100000 ; j += i ) primes[j] = 1;
        }
    }

    for( int i = 2 ; i <= 100000 ; i++ )
    {
        if( primes[i] == 0 ) PrimeNumber.push_back(i);
    }
}

int gcd( int a , int b )
{
    if( b == 0 ) return a;
    else gcd( b , a % b );
}

int Divisiors( int n )
{
    int Limit = n;
    int res = 1;
    for( int i = 0 ;  i < PrimeNumber.size() && PrimeNumber[i]*PrimeNumber[i] <= Limit ; i++ )
    {
        int Pn = PrimeNumber[i];
        if(  n % Pn == 0 )
        {
            int cnt = 0;
            while( n % Pn == 0 )
            {
            	cnt++;
        	    n /= Pn;
            }
            res = res*(cnt+1);
        }
    }
    if( n > 1)
    {
        int cnt = 1;
    	res *= (cnt+1);
    }
    return res;
}

int main()
{
    int tt;
    scanf("%d",&tt);

    PrimeGenerate();

    for( int i = 1 ; i <= tt ; i++ )
    {
        int a,b;
        scanf("%d %d",&a,&b);

        int GCD = gcd(a,b); //cout << "GCD : " << GCD << endl;
        if( GCD == 1 )
        {
            printf("1\n");
            continue;
        }
        int res = Divisiors( GCD );
        printf("%d\n",res);
    }
    return 0;
}
