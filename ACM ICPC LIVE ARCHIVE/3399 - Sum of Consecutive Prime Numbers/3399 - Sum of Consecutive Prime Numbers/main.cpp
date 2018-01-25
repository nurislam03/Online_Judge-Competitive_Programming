//
//  main.cpp
//  3399 - Sum of Consecutive Prime Numbers
//
//  Created by Nur Islam on 5/20/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

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
#include <iostream>
#include <fstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <iterator>
#include <functional>
using namespace std;

#define SIZE 10010
vector < int > PrimeNumber;
int primes[SIZE];


void PrimeGenerate()
{
    
    int d = sqrt(10010);
    memset( primes, 0, sizeof(primes) );
    
    
    for ( int i = 2; i <= d; i++ )
    {
        if( primes[i] == 0 )
        {
            for ( int j = i * i; j <= 10000; j += i ) primes[j] = 1;
        }
    }
    
    
    for( int i = 2 ; i <= 10000 ; i++ )
    {
        if( primes[i] == 0 ) PrimeNumber.push_back(i);
    }
}


int main()
{
    int n;
    PrimeGenerate();
    
    while(1)
    {
        int Count = 0,x,sum = 0;
        cin >> n;
        if( n == 0 ) break;
        
        x = 0;
        for( int i = 0 ; i < PrimeNumber.size() ; i++ )
        {
            sum += PrimeNumber[i];
            
            while( sum > n )
            {
                sum -= PrimeNumber[x];
                x++;
            }
            
            if( sum == n )
            {
                Count++;
                sum -= PrimeNumber[x];
                x++;
            }
        }
        
        cout << Count << endl;
    }
    return 0;
}
