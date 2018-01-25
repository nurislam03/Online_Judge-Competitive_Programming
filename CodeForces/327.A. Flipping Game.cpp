

//==================================================================//
// Name        : NUR ISLAM                                         //
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

//==================================================================//
/*void make_unique(vector<int> &a){ sort(a.begin(), a.end());         //
    a.erase(unique(a.begin(), a.end()), a.end()); }                 //
void printDouble(double f,int p){ cout << fixed;                    //
    cout << setprecision(p) << f <<endl; }                          //
int  Set(int N,int cur){ return N = N | (1<<cur); }                 //
int  Reset(int N,int cur){ return N = N & ~(1<<cur); }              //
bool Check(int N,int cur){ return (bool)(N & (1<<cur)); }           //
LL   GCD(LL a,LL b){ if(b == 0) return a; return GCD(b,a%b);}       //
LL   LCM(LL a,LL b){ return a*b/GCD(a,b);}                          //
LL   POW(LL a,LL p){ LL res = 1,x = a;while(p){if(p&1)              //
    res = (res*x); x = (x*x);p >>= 1;} return res;}*/               //
//==================================================================//

//==================================================================//
//int knightDir[8][2] = {{-2,1},{-1,2},{1,2},{2,1},                 //
//                      {2,-1},{-1,-2},{1,-2},{-2,-1}};             //
//int dir8[4][2]      = {{-1,0},{0,1},{1,0},{0,-1},                 //
//                      {-1,-1},{1,1},{1,-1},{-1,1}};               //
//int dir4[4][2]      = {{-1,0},{0,1},{1,0},{0,-1}};                //
//==================================================================//

/*
 #ifdef forthright48
 #include <ctime>
 clock_t tStart = clock();
 #define debug(args...) {dbg,args; cerr<<endl;}
 #define timeStamp printf("Exc Time: %.2fs\n",(double)(clock()-tStart)/CLOCKS_PER_SEC)
 #else
 #define debug(args...)  //Just strip off all debug tokens
 #define timeStamp
 #endif

 struct debugger{
 template<typename T> debugger& operator , (const T& v){
 cerr << v << " ";
 return *this;
 }
 }dbg;
 */
//========================  :) ===================//

/*
#Success is a journey not a destination a year from now
you may wish you had started today.Every beginner is
a winner. Success is not escaping problems but facing
them creatively.There is no success without sacrifice.
Great success always calls for great sacrifice.Even
failure can become an important ingredient to success.
Failure just means that you have not yet succeeded.


#Every Succesful person has a painful story and
Every painful story has a succesful ending.
So accept the pain and get ready for success.:)


 #  "I love You" is not a question..!
 so why do we expect answer after telling this?


 #  Water water everywhere, but nor any drop to drink.


 সিগারেটের সংজ্ঞা:
 "এটা একটা শলাকা, যার এক পাশে থাকে জ্বলন্ত আগুন
 আরেক পাশে একটা আহাম্মক।" (Y)


 # " History repeats itself "


 # যদি সত্যিই নিজের দুনিয়ায় সফল হতে চাও এবং সুখী থাকতে চাও
 তবে নিজের পছন্দ বা ইচ্ছার সাথে কখনোই Sacrifice করো না


 # বোকারা বুঝে না,যাবার মানুষ বলে কয়ে যায় না..
 বলে যাওয়া মানেই আমাকে আঁকড়ে ধর !

 # Do before Die


 # Mahatma Gandhi -
 "First they ignore you,
 then they laugh at you, then they fight you
 and then, you win".


 #ফেলিসন -
 "Bad programming is easy.
 Idiots can learn it in 21 days,
 even if they are dummies."


 #এরিক রেমন্ড -
 "Computer science education cannot make anybody
 an expert programmer any more than studying brushes
 and pigment can make somebody an expert painter"


 # The fool didn't know it was impossible.So, he/she did it!

*/

//=======// Done With The Shortcut Stuffs! Now Let's Code! //=======//
#define PI acos(-1.0)
#define Size 100005
#define INF (1<<30)
#define MOD 1000000007

//========================= Lets Start :) ==========================//

int arr[100+10];
int main()
{
    int n,Zero = 0 , One = 0;
    cin >> n;
    for( int i = 0 ; i < n ; i++ )
    {
        sf("%d",&arr[i]);
        if( arr[i] == 0 ) Zero++;
        else One++;
    }
    int temp,res = -100000;
    for( int i = 0 ; i < n ; i++ )
    {
        temp = One;
        for( int j = i ; j < n ; j++ )
        {
            if( arr[j] == 1 ) temp--;
            if( arr[j] == 0 ) temp++;
            if( temp >= res ) res = temp;
        }
    }
    cout << res << endl;
    return 0;
}
