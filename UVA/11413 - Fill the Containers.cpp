//
//  main.cpp
//  11413 - Fill the Containers
//
//  Created by Nur Islam on 6/18/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
vector < long long > V;
long long NumOfContainer;

int IsValidContainer( long long Capacity )
{
    int cnt = NumOfContainer;
    int Cap = Capacity;
    for( int i = 0 ; i < V.size() ; i++ )
    {
        if( Cap - V[i] < 0 )
        {
            cnt--;
            Cap = Capacity;
            if( cnt < 1 ) return 0;
        }
        
        if( ( Cap - V[i] ) >=  0 )
        {
            Cap -= V[i];
        }else{
            return 0;
        }
    }
    return 1;
}

long long BinarySearch()
{
    long long Mid,Min = 1,Max = 10000000000,res;
    
    while( Min <= Max )
    {
        Mid = ( Min + Max ) / 2 ;
        int x = IsValidContainer( Mid );
        
        if( x )
        {
            //printf("For X: %d\n",Mid);
            res = Mid;
            Max = Mid - 1;
        }
        else Min = Mid + 1;
    }
    return res;
}


int main()
{
    
    long long Conveyor,x;
    
    while( ( scanf("%lld %lld",&Conveyor,&NumOfContainer) ) != EOF )
    {
        V.clear();
        for( int t = 1 ; t <= Conveyor ; t++ )
        {
            cin >> x;
            V.push_back(x);
        }
        int res = BinarySearch();
        cout << res << endl;
    }
    
    return 0;
}

