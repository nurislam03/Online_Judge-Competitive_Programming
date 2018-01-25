//
//  main.cpp
//  12032 - The Monkey and the Oiled Bamboo
//
//  Created by Nur Islam on 6/18/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
vector < int > V;

int ValidOrNot( int k )
{
    int distance,PreviousValue;
    PreviousValue = 0;
    for( int i = 0 ; i < V.size() ; i++ )
    {
        distance = V[i] - PreviousValue;
        PreviousValue = V[i];
        if( distance == k ) k--;
        else if( distance > k ) return 0;
    }
    return 1;
}


int BinarySearch()
{
    int Min = 0,Max = 10000000,Mid,res,res1;
    
    while( Min <= Max )
    {
        Mid = ( Min + Max ) / 2 ;
        res = ValidOrNot( Mid );
        if( res )
        {
            Max = Mid - 1;
            res1 = Mid;
        }
        else
        {
            Min = Mid + 1;
        }
        
    }
    return res1;
}

int main()
{
    int tt,n,x;
    cin >> tt;
    for( int t = 1 ; t <= tt ; t++ )
    {
        cin >> n;
        V.clear();
        
        for( int i = 0 ; i < n ; i++ )
        {
            cin >> x ;
            V.push_back(x);
        }
        int res = BinarySearch();
        cout << "Case "<< t << ": " << res << endl;
    }
    
    return 0;
}