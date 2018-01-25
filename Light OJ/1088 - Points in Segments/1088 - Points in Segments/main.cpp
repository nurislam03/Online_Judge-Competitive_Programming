//
//  main.cpp
//  1088 - Points in Segments
//
//  Created by Nur Islam on 6/4/16.
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
vector < int > V;

int LowerBound( int Target, int Min, int Max )
{
    int Mid;
    while( Min < Max )
    {
        Mid = ( Min + Max ) / 2;
        if( V[Mid] >= Target ) Max = Mid;
        else Min = Mid + 1;
    }
    if( V[Min] < Target ) Min++;
    return Min;
}

int UpperBound( int Target, int Min, int Max )
{
    int Mid;
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
    int tt;
    scanf("%d",&tt);
    
    
    for( int t = 1 ; t <= tt ; t++ )
    {
        int n,Q,q1,q2,p;
        
        scanf("%d %d",&n,&Q);
        V.clear();
        
        for( int i = 1 ; i <= n ; i++ )
        {
            scanf("%d",&p);
            V.push_back(p);
        }
        
        printf("Case %d:\n",t);
        for( int i = 1 ; i <= Q ; i++ )
        {
            int res;
            scanf("%d %d",&q1,&q2);
            
            int Min,Max,x,y;
            Min = 0;
            Max = n;
            x = LowerBound(q1,Min,Max);
            y = UpperBound(q2,Min,Max);
            res = y - x;
            
            printf("%d\n",res);
        }
    }
    return 0;
}