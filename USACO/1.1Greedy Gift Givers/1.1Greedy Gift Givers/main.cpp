//
//  main.cpp
//  1.1Greedy Gift Givers
//
//  Created by Nur Islam on 6/22/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//
/*
 ID: nurisla1
 PROG: gift1
 LANG: C++
 */



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

map < string , pair < int , int > > Map;
pair < int , int > Pr;
vector < string > V;

int main()
{
    //ofstream cout ("gift1.out");
    //ifstream cin ("gift1.in");
    
    int NumOfGroupMem,InitBalance,NumOfReceiver;
    string GroupMemName;
    //Map.clear();
    //V.clear();
    
    cin >> NumOfGroupMem;
    for( int i = 1 ; i <= NumOfGroupMem ; i++ )
    {
        cin >> GroupMemName;
        V.push_back(GroupMemName);
        Map[GroupMemName] = make_pair( 0 , 0 );
    }
    
    for( int i = 1 ; i <= NumOfGroupMem ; i++ )
    {
        cin >> GroupMemName;
        cin >> InitBalance >> NumOfReceiver;
        if( InitBalance == 0 && NumOfReceiver == 0 ) break;
        
        int AmountOfGift,Rem;
        if( NumOfReceiver == 0 )
        {
            AmountOfGift = InitBalance;
            Rem = NumOfReceiver;
        }
        else
        {
            AmountOfGift = ( InitBalance / NumOfReceiver );
            Rem = InitBalance % NumOfReceiver;
        }
        
        
        Map[GroupMemName].first += InitBalance;
        Map[GroupMemName].second += Rem;
        
        for( int i = 1 ; i <= NumOfReceiver ; i++ )
        {
            cin >> GroupMemName;
            Map[GroupMemName].second += AmountOfGift;
        }
    }
    
    for( int i = 0 ; i < V.size() ; i++ )
    {
        int res = Map[ V[i] ].second - Map[ V[i] ].first;
        cout << V[i] << " " << res <<endl;
    }
    
    return 0;
}


