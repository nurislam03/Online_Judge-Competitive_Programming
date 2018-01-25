//
//  main.cpp
//  313.A - Ilya and Bank Account
//
//  Created by Nur Islam on 5/11/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <functional>
#include <cstdlib>
using namespace std;

int main()
{
    int Length;
    string a;
    cin >> a;
    Length = (int) a.length();
    
    if( a[0] != '-' ) cout<<a<<endl;
    else if( Length == 3 && a[2] == '0' ) cout<<0<<endl;
    else
    {
        if( a[Length - 2] >= a[Length - 1] )
        {
            for( int i = 0 ;i < Length-2 ; i++ ) cout<<a[i];
            cout<<a[Length-1]<<endl;
        }
        else
        {
            for( int i = 0 ;i < Length-2 ; i++ ) cout<<a[i];
            cout<<a[Length-2]<<endl;
        }
    }
    return 0;
}