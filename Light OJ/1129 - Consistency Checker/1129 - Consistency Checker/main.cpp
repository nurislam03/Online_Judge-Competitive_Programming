//
//  main.cpp
//  1129 - Consistency Checker
//
//  Created by Nur Islam on 8/12/16.
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
using namespace std;

bool isConsistent;
int len;

struct node
{
    bool endMark;
    node *Next[10+1];
    
    node()
    {
        endMark = false;
        for( int i = 0 ; i < 10 ; i++ ) Next[i] = NULL;
    }
}*root;


void Insert( char *str , int len )
{
    node *curr = root;
    bool newPath = false;
    
    for( int i = 0 ; i < len ; i++ )
    {
        int id = str[i] - '0';
        if(curr->Next[id] == NULL)
        {
            curr->Next[id] = new node();
            curr = curr->Next[id];
            newPath = true;
        }
        else
        {
            curr = curr->Next[id];
            if( curr->endMark ) isConsistent = false;
        }
    }
    curr->endMark = true;
    if( newPath == false ) isConsistent = false;
}


void del( node *curr )
{
    for( int i = 0 ; i < 10 ; i++ )
    {
        if( curr->Next[i] != NULL )
        {
            del( curr->Next[i] );
        }
    }
    delete(curr);
}


int main()
{
    int T,n;
    cin >> T;
    
    for( int t = 1 ; t <= T ; t++ )
    {
        cin >> n;
        isConsistent = true;
        root = new node();
        
        for( int i = 1 ; i <= n ; i++ )
        {
            char str[10+2];
            scanf("%s",str);
            
            len = (int) strlen(str);
            Insert( str, len );
        }
        if( isConsistent ) printf("Case %d: YES\n",t);
        else printf("Case %d: NO\n",t);
        del(root);
    }
    return 0;
}



