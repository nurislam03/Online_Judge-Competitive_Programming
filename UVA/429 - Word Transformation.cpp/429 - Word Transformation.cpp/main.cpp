//
//  main.cpp
//  429 - Word Transformation.cpp
//
//  Created by Nur Islam on 7/29/16.
//  Copyright © 2016 nur islam. All rights reserved.
//

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cstring>
#include <queue>
#include <sstream>
using namespace std;

int Visited[205];
int Steps[205];
string Dictionary[205];
map < string , int > Id;
vector < int > List[205];

void initialization()
{
    for( int k = 0 ; k <= 200 ; k++ )
    {
        List[k].clear();
    }
}

int BFS( int Source , int Destination )
{
    
    memset( Visited, 0, sizeof(Visited) );
    memset( Steps, 0, sizeof(Steps) );
    
    queue < int > Q;
    Q.push(Source);
    Visited[Source]++;
    Steps[Source] = 0;
    int u,v;
    while( !Q.empty() )
    {
        u = Q.front();
        Q.pop();
        if( u == Destination ) break;
        
        for( int i = 0 ; i < List[u].size() ; i++ )
        {
            v = List[u][i];
            if( !Visited[v] )
            {
                Q.push(v);
                Visited[v]++;
                Steps[v] = Steps[u] + 1;
            }
        }
    }
    return Steps[u];
}


int main()
{
    int tt;
    cin >> tt;
    
    for( int t = 1 ; t <= tt ; t++ )
    {
        int ind = 0;
        string Word,FirstWord,LastWord;
        
        while(1)
        {
            cin >> Word;
            if( Word == "*" ) break;
            
            Dictionary[ind] = Word;
            Id[Word] = ind;
            ind++;
        }
        
        for( int i = 0 ; i < ind ; i++ )
        {
            for( int j = 0 ; j < ind ; j++ )
            {
                if( i == j ) continue;
                int cnt = 0;
                if( Dictionary[i].size() == Dictionary[j].size() )
                {
                    for( int c = 0 ; c < Dictionary[i].size() ; c++ )
                    {
                        if(Dictionary[i][c] != Dictionary[j][c]) cnt++;
                    }
                }
                
                if( cnt == 1 )
                {
                    List[i].push_back(j);
                    List[j].push_back(i);
                }
            }
        }
        
        getline(cin,Word);
        if( t != 1 ) cout << endl;
        
        while( getline(cin,Word) )
        {
            if( Word.size() == 0 ) break;
            stringstream FullLine;
            FullLine.clear();
            FullLine << Word;
            
            FullLine >> FirstWord;
            FullLine >> LastWord;
            
            int res;
            if( FirstWord.size() != LastWord.size() ) res = -1;
            else res = BFS( Id[FirstWord] , Id[LastWord] );
            
            cout << FirstWord << " " << LastWord << " " << res << endl;
        }
        initialization();
    }
    return 0;
}
