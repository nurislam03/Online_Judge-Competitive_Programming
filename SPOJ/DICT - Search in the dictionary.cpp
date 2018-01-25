//
//  main.cpp
//  DICT - Search in the dictionary.cpp
//
//  Created by Nur Islam on 8/14/16.
//  Copyright © 2016 nur islam. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
using namespace std;
int len;
bool noMatch;
struct node
{
    bool endMark;
    node *Next[26];
    
    node()
    {
        endMark = false;
        for( int i = 0 ; i < 26 ; i++ ) Next[i] = NULL;
    }
}*root;


void composedWords( char *res ,int pos, node *curr)
{
    res[pos] = '\0';
    if( curr->endMark == true && len != strlen(res) )
    {
        printf("%s\n",res);
    }
    
    
    for( int i = 0 ; i < 26 ; i++ )
    {
        int id = i;
        if( curr->Next[id] == NULL ) continue;
        else
        {
            res[pos] = ('a' + i);
            composedWords(res, pos+1, curr->Next[id]);
        }
    }
}


void Insert( char *str, int len )
{
    node *curr = root;
    for( int i = 0 ; i < len ; i++ )
    {
        int id = str[i] - 'a';
        if( curr->Next[id] == NULL ) curr->Next[id] = new node();
        curr = curr->Next[id];
    }
    curr->endMark = true;
}


void Search( char *str , int len )
{
    node *curr = root;
    char prefixWord[26];
    strcpy(prefixWord, str);
    
    
    for( int i = 0 ; i < len ; i++ )
    {
        int id = str[i] - 'a';
        if( curr->Next[id] == NULL )
        {
            noMatch = true;
            break;
        }
        else curr = curr->Next[id];
    }
    if( noMatch ) printf("No match.\n");
    else composedWords( prefixWord, len , curr);
}



int main()
{
    int n,q;
    char word[25];
    
    scanf("%d",&n);
    root = new node();
    
    for( int i = 1 ; i <= n ; i++ )
    {
        scanf("%s",word);
        
        len = (int)strlen(word);
        Insert(word,len);
    }
    
    scanf("%d",&q);
    for( int i = 1 ; i <= q ; i++ )
    {
        noMatch = false;
        scanf("%s",word);
        len = (int)strlen(word);
        
        printf("Case #%d:\n",i);
        Search(word , len);
    }
    return 0;
}


