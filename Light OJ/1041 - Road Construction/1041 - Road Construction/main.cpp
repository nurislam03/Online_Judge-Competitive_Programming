//
//  main.cpp
//  1041 - Road Construction
//
//  Created by Nur Islam on 5/14/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

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
#include <iostream>
#include <fstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <iterator>
#include <functional>
using namespace std;

map < string , int > Map;
int Count,Parent[1000],Rank[1000];



struct cities
{
    int st,en,cost;
};

bool operator<(cities a,cities b)
{
    if( a.cost != b.cost ) return a.cost<b.cost;
    return false;
}

void Initial(int n)
{
    for( int i = 0 ; i <= n ; i++ )
    {
        Rank[i] = 0;
        Parent[i] = i;
    }
}

int Find( int x )
{
    if( Parent[x] == x ) return x;
    Parent[x] = Find( Parent[x] );
    return Parent[x];
}


int MST(vector < cities > &V)
{
    int x,y,cost = 0;
    for( int i = 0 ; i < V.size() ; i++ )
    {
        x = Find(V[i].st);
        y = Find(V[i].en);
        
        if( x != y )
        {
            if( Rank[x] > Rank[y] ) Parent[y] = x;
            else if( Rank[x] < Rank[y] ) Parent[x] = y;
            else
            {
                Parent[y] = x;
                Rank[x]++;
            }
            cost = cost + V[i].cost;
            Count++;
        }
    }
    return cost;
}


int main()
{
    
    //freopen("output.txt","r",stdin);
    int TT;
    cin >> TT;
    
    for( int T = 1 ; T <= TT ; T++ )
    {
        vector < cities > V;
        Map.clear();
        cities C;
        
        string city1,city2;
        int Roads,Value,id = 0,x,y,res;
        Count = 0;
        
        cin >> Roads;
        for( int i = 1 ; i <= Roads ; i++ )
        {
            cin >> city1 >> city2 >> Value;
            
            if( Map.count(city1) == 0 )
            {
                Map[city1] = ++id;
                x = Map[city1];
            }
            else x = Map[city1];
            
            if( Map.count(city2) == 0 )
            {
                Map[city2] = ++id;
                y = Map[city2];
            }
            else y = Map[city2];
            
            C.st = x; C.en = y; C.cost = Value;
            V.push_back(C);
        }
        
        sort( V.begin(),V.end() );
        Initial(id);
        res = MST(V);
        
        int ValidEdge = id - 1;
        if( ValidEdge != Count )
        {
            cout<<"Case "<<T<<": "<<"Impossible"<<endl;
        }
        else cout << "Case "<<T<<": "<<res<<endl;
    }
    return 0;
}