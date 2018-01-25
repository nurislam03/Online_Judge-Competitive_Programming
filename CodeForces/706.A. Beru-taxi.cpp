//
//  main.cpp
//  A
//
//  Created by Nur Islam on 8/11/16.
//  Copyright © 2016 nur islam. All rights reserved.
//

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
//#include <bits/stdc++.h>                                          //
using namespace std;                                                //
//==================================================================//
//==================================================================//
#define read(nm)        freopen(nm, "r", stdin)                     //
#define write(nm)       freopen(nm, "w", stdout)                    //
#define LL              long long                                   //
#define LLU             long long unsigned int                      //
#define pf              printf                                      //
#define sf              scanf                                       //
#define FOR(i,x,y)      for(int i = (x) ; i <= (y) ; ++i)           //
#define ROF(i,x,y)      for(int i = (y) ; i >= (x) ; --i)           //

#define MIN(a,b)        ((a)<(b)?(a):(b))                           //
#define MAX(a,b)        ((a)>(b)?(a):(b))                           //
#define SQ(x)           ((x)*(x))                                   //
#define NUMDIGIT(x,y)   (((int)(log10((x))/log10((y))))+1)          //
#define LCM(x,y)        (((x)/gcd((x),(y)))*(y))                    //

#define pb              push_back                                   //
#define pii             pair<int,int>                               //
#define mp              make_pair                                   //
#define F               first                                       //
#define S               second                                      //
#define SZ(x)           ((int)(x).size())                           //
#define mems(x,v)       memset(x,v,sizeof(x))                       //
#define fills(v,n)      fill(v.begin(),v.end(),n)                   //
#define vsort(v)        sort(v.begin(),v.end())                     //
#define asort(v,n)  	sort(a,a+n)                                 //
#define UNIQUE(V)       (V).erase(unique((V).begin(),(V).end()),(V).end())//sorted (V)

#define PI              acos(-1.0)                                  //
#define eps             1e-9                                        //
#define FABS(x)         ((x)+eps<0?-(x):(x))                        //
#define ABS(x)          ((x)<0?-(x):(x))                            //
#define NORM(x)         if(x>=mod)x-=mod;                           //
#define phl printf      ( "hello\n" )                               //
#define POPCOUNT        __builtin_popcountll                        //
#define RIGHTMOST       __builtin_ctzll                             //
#define LEFTMOST(x)     (63-__builtin_clzll((x)))                   //
#define NUMDIGIT(x,y)   (((int)(log10((x))/log10((y))))+1)          //

#define debug1(v1)      cout<<"1@ Debug Val 1 = "<<v1<<endl;        //
#define debug2(v2)      cout<<"   2@ Debug Num 2 = "<<v2<<endl;     //
#define debug3(v3)      cout<<"      3@ Debug Res 3 = "<<v3<<endl;  //
#define UB(v,a)   upper_bound(v.begin(),v.end(),a)-v.begin()        //
#define LB(v,a)   lower_bound(v.begin(),v.end(),a)-v.begin()        //
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL)     //
//==================================================================//

//=======// Done With The Shortcut Stuffs! Now Let's Code! //=======//
#define PI acos(-1.0)
#define Size 100005
#define INF (1<<30)
#define MOD 1000000007
//======================== Lets Start :) ==========================//


int main()
{
    int a,b,n,x,y,v;
    double res = 100000000.0;
    cin >> a >> b;
    cin >> n;

    for( int i = 1 ; i <= n ; i++ )
    {
        cin >> x >> y >> v;

        int temp1 = pow((x - a),2);
        int temp2 = pow((y - b),2);

        double dist = sqrt( temp1 + temp2 );
        double time  = dist / v;
        if( time <= res ) res = time;
    }
    printf("%.8f",res);
    return 0;
}
