//
//  main.cpp
//  1114 - Easily Readable.cpp
//
//  Created by Nur Islam on 8/13/16.
//  Copyright © 2016 nur islam. All rights reserved.
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
//#include <bits/stdc++.h>
using namespace std;


int Next[100000+10][60];
int endCount[100000+10];
int column;

void init()
{
    memset(Next[0], 0, sizeof(Next[0]));
    endCount[0] = 0;
    column = 1;
}

int findID( char c )
{
    int id;
    if( c >= 'A' && c <= 'Z' )
    {
        id = c - 'A';
    }
    else id = ( c - 'a' ) + 26;
    return id;
}


void Insert( char *str , int len )
{
    int curr = 0;
    for( int i = 0 ; i < len ; i++ )
    {
        int id = findID( str[i]);
        
        if( Next[curr][id] == 0 )
        {
            memset(Next[column], 0, sizeof(Next[column]));
            endCount[column] = 0;
            Next[curr][id] = column++;
            curr = Next[curr][id];
        }
        else curr = Next[curr][id];
    }
    endCount[curr]++;
}


int Search( char *str , int len )
{
    int curr = 0;
    for( int i = 0 ; i < len ; i++ )
    {
        int id = findID( str[i]);
        
        if( Next[curr][id] == 0 ) return 0;
        else curr = Next[curr][id];
    }
    return endCount[curr];
}

int main()
{
    int T,n;
    scanf("%d",&T);
    
    for( int t = 1 ; t <= T ; t++ )
    {
        scanf("%d",&n);
        init();
        
        for( int i = 1 ; i <= n ; i++ )
        {
            char str[100+5];
            scanf("%s",str);
            
            int len = (int) strlen(str);
            if( len > 3 ) sort( str+1, str+(len-1) );
            Insert( str, len );
        }
        
        int q;
        long long res;
        char Sentence[10000+5],word[10000+5];
        scanf("%d\n",&q);
        
        
        printf("Case %d:\n",t);
        for( int i = 1 ; i <= q ; i++ )
        {
            res = 1;
            gets(Sentence);
            stringstream ss( Sentence );
            
            while( ss >> word )
            {
                int len2 = (int)strlen(word);
                if( len2 > 3 ) sort( word+1, word+(len2-1) );
                
                int temp = Search( word,len2 );
                res *= temp;
            }
            printf("%lld\n",res);
        }
    }
    return 0;
}


