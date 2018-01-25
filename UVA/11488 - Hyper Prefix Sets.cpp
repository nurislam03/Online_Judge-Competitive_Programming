//
//  main.cpp
//  11488 - Hyper Prefix Sets.cpp
//
//  Created by Nur Islam on 8/14/16.
//  Copyright © 2016 nur islam. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

int res,len;

struct node
{
    int Repeat;
    node *Next[2+2];
    
    node()
    {
        Repeat = 0;
        for( int i = 0 ; i <= 2 ; i++ ) Next[i] = NULL;
    }
}*root;


void Insert(char *str, int len )
{
    node *curr = root;
    int Step = 0;
    
    for( int i = 0 ; i < len ; i++ )
    {
        int id = str[i] - '0';
        if( curr->Next[id] == NULL )
        {
            curr->Next[id] = new node();
            curr = curr->Next[id];
            curr->Repeat++;
            Step++;
            res = max( res , (Step*curr->Repeat));
        }
        else
        {
            curr = curr->Next[id];
            curr->Repeat++;
            Step++;
            res = max( res , (Step*curr->Repeat));
        }
    }
}

void del( node *curr )
{
    for( int i = 0 ; i <= 2 ; i++ )
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
        root = new node();
        
        for( int i = 1 ; i <= n ; i++ )
        {
            char str[200+5];
            scanf("%s",str);
            
            len = (int) strlen(str);
            Insert( str, len );
        }
        
        cout << res << endl;
        del(root);
        res = -1000000;
    }
    return 0;
}