
// new code .
// status : accepted.


#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
#define ll long long
vector <ll> v;



ll BS(ll t, ll Min, ll Max)
{
    ll Mid;int cnt=0;
    while(Min < Max)
    {
        Mid = (Min + Max) / 2;
        cnt++;
        if(cnt>100)
        {
            break;
        }
        if(v[Mid] > t) Max = Mid;
        else if(v[Mid] < t) Min = Mid;
        else return v[Mid];
    }
    return v[Mid];
}




int main()
{
    int n,tc = 1;
    
    
    while(scanf("%d",&n) != EOF)
    {
        ll m,a,b,x,dif = -1,tmp;
        v.clear();
        
        for(int i = 0; i < n; i++)
        {
            scanf("%lld",&x);
            v.push_back(x);
        }
        scanf("%lld",&m);
        
        
        ll aa,bb;
        sort(v.begin(), v.end());
        
        for(int i = 0; i < v.size(); i++)
        {
            a = v[i];
            b = m - a;
            
            
            ll bs = BS(b,0,n);
            if(bs == b)
            {
                if(dif == -1)
                {
                    dif = abs(a-b);
                    aa = a;
                    bb = b;
                }
                else if(abs(a-b) < dif)
                {
                    dif = abs(a-b);
                    aa = a;
                    bb = b;
                }
                
            }
        }
        aa = min(aa,bb); bb = max(aa,bb);
        printf("Peter should buy books whose prices are %lld and %lld.\n",aa,bb);
        printf("\n");
    }
    
    return 0;
}





/*
 
 //
 //  main.cpp
 //  11057 - Exact Sum
 //
 //  Created by Nur Islam on 6/18/16.
 //  Copyright © 2016 Nur Islam. All rights reserved.
 //

 //  Status : Accepted
 //
 
#include <iostream>
#include <cstdio>
using namespace std;

long long a[10000100];

int main()
{
    int tt;
    long long x,res,B1,B2;
    unsigned long long Money;
    while( scanf("%d",&tt) != EOF )
    {
        int flag = 0;
        res = 1000010;
        for( long long i = 0 ; i < 1000005 ; i++ ) a[i] = 0;
        for( int i = 1 ; i <= tt ; i++ )
        {
            scanf("%lld",&x);
            a[x]++;
        }
        
        scanf("%llu",&Money);
        long long Mid = Money / 2;
        
        if( Money % 2 == 0  )
        {
            if(a[Mid] >= 2)
            {
                flag++;
                B1 = Mid;
                B2 = Mid;
            }
            else
            {
                for( long long i = 1 ; i < Mid ; i++ )
                {
                    if( (a[Mid + i] >= 1) && (a[Mid - i] >= 1) )
                    {
                        flag++;
                        B1 = Mid-i;
                        B2 = Mid+i;
                        break;
                    }
                }
            }
        }
        
        if( flag == 0 )
        {
            for( long long i = 1,j = 0 ; i <= Mid ; i++,j++ )
            {
                long long s = Mid + i;
                long long LL = ( Mid - j ) ;
                unsigned long long dd = s + LL;
                if( (a[LL] >= 1) && (a[s]) >= 1 && ( dd == Money ) )
                {
                    long long k;
                    k = abs( s - LL );
                    
                    if( k <= res )
                    {
                        B1 = LL;
                        B2 = s;
                        res = k;
                    }
                }
            }
        }
        
        printf("Peter should buy books whose prices are %lld and %lld.\n",B1,B2);
        printf("\n");
        
        
    }
    return 0;
}

 */



