//
//  main.cpp
//  294 - Divisors
//
//  Created by Nur Islam on 6/5/16.
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


long long  Divisiors( long long n )
{
    long long TotalDivisors = 0,k;
    
    for( long long i = 1 ; i*i <= n ; i++ )
    {
        if( n % i == 0 )
        {
            TotalDivisors++;
            
            k = n / i ;
            if( i != k ) TotalDivisors++;
        }
    }
    return TotalDivisors;
}


int main()
{
    int t ;
    cin >> t ;
    
    while(t--)
    {
        long long FirstNum,LastNum,NumOfDivisor = 0,MaxDivisior = 0,Num = 0;
        cin >> FirstNum >> LastNum ;
        
        for( long long i = FirstNum ; i <= LastNum ; i++ )
        {
            NumOfDivisor = Divisiors(i);
            if( NumOfDivisor > MaxDivisior )
            {
                MaxDivisior = NumOfDivisor;
                Num = i;
            }
        }
        cout <<"Between "<<FirstNum<<" and "<<LastNum<<", "<<Num<<" has a maximum of "<<MaxDivisior<<" divisors."<<endl;
    }
    return 0;
}


