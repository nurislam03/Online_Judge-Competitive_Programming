//==================================================================//
// Name : nurislam03
// Codeforces : nurislam
// Topcoder : nurislam
// Hackerrank : nurislam
// Codechef : nurislam
// UVa : Nur Islam
// Spoj : nurislam
// Email : nurislam0333@gmail.com
// University : North South University
// Facebook : nurislam.503
// Copyright © 2016 Nur Islam. All rights reserved.
//==================================================================//

//==================================================================//
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
//#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t = 0;
    while( 1 )
    {
        scanf("%d",&n);
        if( n == 0 ) break;
        vector < int > V[n+5];
        int length[n+5];

        memset( length , 0 , sizeof(length) );

        int s,p,q,len = 0;
        t++;
        scanf("%d",&s);
        length[s] = -1;

        while(1)
        {
            cin >> p >> q;
            if( p == 0 && q == 0 ) break;
            V[p].push_back(q);
        }

        queue < int > qq;
        qq.push(s);

        while( !qq.empty() )
        {
            int x = qq.front();
            qq.pop();
            for( int j = 0 ; j < V[x].size() ; j++ )
            {

                if( x == s ) len = 0;
                else len = length[x];

                if( length[V[x][j]] <= len && length[V[x][j]] != -1 )
                {
                    length[V[x][j]] = len + 1;
                    qq.push( V[x][j] );
                }
            }
        }
        int maxx = length[1];
        int fin = 1;

        for(int k = 2 ; k <= n ; k++ )
        {
            if( length[k] > maxx )
            {
                maxx = length[k];
                fin = k;
            }
        }
        printf("Case %d: The longest path from %d has length %d, finishing at %d.\n",t,s,maxx,fin);
        printf("\n");
    }
}
