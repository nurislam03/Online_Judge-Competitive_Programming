//
//  main.cpp
//  543 - Goldbach's Conjecture
//
//  Created by Nur Islam on 5/26/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <sstream>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <climits>
#include <iomanip>
#include <cassert>
#include <algorithm>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <fstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <iterator>
#include <functional>

using namespace std;

#define SIZE 1000010
vector < int > PrimeNumber;
int primes[SIZE];


void PrimeGenerate()
{
    
    memset( primes, 0, sizeof(primes) );
    
    for ( int i = 2; i*i <= 1000000; i++ )
    {
        if( primes[i] == 0 )
        {
            for ( int j = i * i; j <= 1000000; j += i ) primes[j] = 1;
        }
    }
    
    
    for( int i = 2 ; i <= 1000000 ; i++ )
    {
        if( primes[i] == 0 ) PrimeNumber.push_back(i);
    }
}


int main()
{
    PrimeGenerate();
    
    while(1)
    {
        long long n,sum = 0,p1,p2;
        cin >> n ;
        if( n == 0 ) break;
        
        if( n % 2 != 0 ) cout <<"Goldbach's conjecture is wrong."<< endl;
        else
        {
            p1 = 0; p2 = PrimeNumber.size() - 1;
            while( PrimeNumber[p2] > n ) p2--;
            
            while (1)
            {
                sum = PrimeNumber[p1] + PrimeNumber[p2] ;
                
                if( sum == n )
                {
                    cout << n << " = " << PrimeNumber[p1] << " + " << PrimeNumber[p2] << endl;
                    break;
                }
                else if( p1 == p2 ) cout <<"Goldbach's conjecture is wrong."<< endl;
                else if( sum > n ) p2--;
                else if( sum < n ) p1++;
                
            }
        }
    }
    return 0;
}


