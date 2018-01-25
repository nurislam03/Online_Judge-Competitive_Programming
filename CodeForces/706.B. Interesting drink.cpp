//
//  main.cpp
//  B
//
//  Created by Nur Islam on 8/11/16.
//  Copyright © 2016 nur islam. All rights reserved.


//==================================================================//
// Name        : nurislam03                                         //
// Codeforces  : nurislam                                           //
// Topcoder    : nurislam                                           //
// Hackerrank  : nurislam                                           //
// Codechef    : nurislam                                           //
// UVa         : Nur Islam                                          //
// Spoj        : nurislam                                           //
// Email       : nurislam0333@gmail.com                             //
// University  : North South University                             //
// Facebook    : nurislam.503                                       //
// Copyright © 2016 Nur Islam. All rights reserved.                 //
//==================================================================//

//==================================================================//
#include <iostream>                                                 //
#include <cstdio>                                                   //
#include <sstream>                                                  //
#include <cstdlib>                                                  //
#include <cctype>                                                   //
#include <cmath>                                                    //
#include <climits>                                                  //
#include <iomanip>                                                  //
#include <cassert>                                                  //
#include <algorithm>                                                //
#include <set>                                                      //
#include <queue>                                                    //
#include <deque>                                                    //
#include <stack>                                                    //
#include <list>                                                     //
#include <fstream>                                                  //
#include <numeric>                                                  //
#include <string>                                                   //
#include <vector>                                                   //
#include <cstring>                                                  //
#include <map>                                                      //
#include <iterator>                                                 //
#include <functional>                                               //
                                         //
using namespace std;                                                //
//==================================================================//
//=======// Done With The Shortcut Stuffs! Now Let's Code! //=======//
#define PI acos(-1.0)
#define Size 100005
#define INF (1<<30)
#define MOD 1000000007
//========================= Lets Start :) ==========================//

vector<long long >V;
long long  BinarySearch( long long Target, long long Min, long long Max )
{
    long long Mid;
    while( Min < Max )
    {
        Mid = ( Min + Max ) / 2;
        if( V[Mid] > Target ) Max = Mid;
        else Min = Mid + 1;
    }
    if( V[Max] == Target ) Max++;
    return Max;
}

int main()
{
    long long  n,x,q;
    long long m,Min = 100000000,Max = -100000,res = 0;

    cin >> n;
    for( int i = 1 ; i <= n ; i++ )
    {
        cin >> x;
        if( x <= Min ) Min = x;
        if( x >= Max ) Max = x;
        V.push_back(x);
    }
    sort( V.begin(),V.end() );

    cin >> q;
    for( int i = 1 ; i <= q ; i++ )
    {
        cin >> m;
        if( m < Min ) printf("0\n");
        else
        {
            res = BinarySearch(m,0,V.size() );
            cout << res << endl;
        }
    }
    return 0;
}
