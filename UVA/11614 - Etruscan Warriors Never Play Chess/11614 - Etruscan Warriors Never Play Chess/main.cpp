//
//  main.cpp
//  11614 - Etruscan Warriors Never Play Chess
//
//  Created by Nur Islam on 6/18/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
using namespace std;

long long BinarySearch( long long min, long long max,long long Target )
{
    long long mid,res,TotalWarrior;
    while( min <= max )
    {
        mid = ( max + min ) / 2;
        TotalWarrior = ( ( mid * ( mid + 1 ) ) / 2 );
        
        if( TotalWarrior > Target ) max = mid - 1 ;
        else
        {
            res = mid;
            min = mid + 1;
        }
    }
    return res;
}

int main()
{
    long long n,tt,res;
    cin >> tt;
    while(tt--)
    {
        cin >> n;
        
        res = BinarySearch(0,10000000000,n);
        cout << res << endl;
    }
    return 0;
}