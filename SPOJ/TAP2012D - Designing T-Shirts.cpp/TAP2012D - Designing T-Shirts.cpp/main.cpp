//
//  main.cpp
//  TAP2012D - Designing T-Shirts.cpp
//
//  Created by Nur Islam on 8/14/16.
//  Copyright © 2016 nur islam. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

int res = 0,len;

struct node
{
    int RepeatTeam1;
    int RepeatTeam2;
    int Team;
    node *Next[26+2];

    node()
    {
        RepeatTeam1 = 0;
        RepeatTeam2 = 0;
        Team = 1;
        for( int i = 0 ; i < 26 ; i++ ) Next[i] = NULL;
    }
}*root;


void Insert(char *str, int len , int team)
{
    node *curr = root;
    int Step = 0,temp = -10000,temp2 = -100;

    for(int i = 0 ; i < len ; i++)
    {
        int id = str[i] - 'A';
        if( curr->Next[id] == NULL ) curr->Next[id] = new node();

        curr = curr->Next[id];

        if( curr->Team < team )
        {
            curr->Team++;
            curr->RepeatTeam2++;
        }
        else curr->RepeatTeam1++;
        Step++;


        // calculation
        if( curr->Team < 2 )
        {
            if( curr->RepeatTeam1 > 1 && curr->RepeatTeam1 >= temp )
            {
                temp = Step * curr->RepeatTeam1;
            }
            temp2 = max( temp, temp2 );
        }
        else
        {
            if( curr->RepeatTeam1 == 1 && curr->RepeatTeam2 == 1 )
            {

            }
        }

    }
    if( temp2 > 0 ) res += temp;
}


void Search(char *str, int len , int team )
{
    node *curr = root;
    int Step = 0,temp = -10000,temp2 = -100;

    for( int i = 0 ; i < 26 ; i++ )
    {
        if( curr->Next[i] == NULL ) continue;
        else
        {
            curr = curr->Next[i];
            Step++;

        }



        // calculation
        if( curr->Team < 2 )
        {
            if( curr->RepeatTeam1 > 1 && curr->RepeatTeam1 >= temp )
            {
                temp = Step * curr->RepeatTeam1;
            }
            temp2 = max( temp, temp2 );
        }
        else
        {
            if( curr->RepeatTeam1 == 1 && curr->RepeatTeam2 == 1 )
            {

            }
        }

    }
    if( temp2 > 0 ) res += temp;
}




void del( node *curr )
{
    for( int i = 0 ; i < 26 ; i++ )
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
    int T;
    while(1)
    {
        scanf("%d",&T);
        if( T == -1 ) break;

        root = new node();
        char str[100+5];
        int team;
        res = 0;


        // team A
        for( int i = 1 ; i <= T ; i++ )
        {
            scanf("%s",str);
            team = 1;
            len = (int) strlen(str);
            Insert(str, len , team);
        }

        // team B
        for( int i = 1 ; i <= T ; i++ )
        {
            scanf("%s",str);
            team = 2;
            len = (int) strlen(str);
            Insert(str, len , team);
        }

        printf("%d\n",res);
        del(root);
    }
    return 0;
}
