//
//  main.cpp
//  10611 - The Playboy Chimp
//
//  Created by Nur Islam on 6/18/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

vector < long long > V;

long long LowerBound( long long Target, long long Min, long long Max )
{
    long long Mid,Flag;
    Flag = Max;
    while( Min < Max )
    {
        Mid = ( Min + Max ) / 2 ;
        if( V[Mid] >= Target ) Max = Mid - 1;
        else Min = Mid + 1;
    }
    if( V[Min] >= Target ) Min = Min - 1;
    if( Min < 0 || Min > Flag )  Min = -1;
    return Min;
}

long long UpperBound( long long Target, long long Min, long long Max )
{
    long long Mid;
    while( Min < Max )
    {
        Mid = ( Min + Max ) / 2 ;
        if( V[Mid]  > Target ) Max = Mid;
        else Min = Mid + 1;
    }
    if( V[Max] <= Target ) Max = -1;
    return Max;
}

int main()
{
    long long LadyChimps,Queries,x;
    cin >> LadyChimps;
    
    for( int i = 1 ; i <= LadyChimps ; i++)
    {
        cin >> x;
        V.push_back(x);
    }
    
    cin >> Queries;
    for( int i = 1 ; i <= Queries ; i++ )
    {
        cin >> x;
        long long ShortLady,TallLady;
        
        ShortLady = LowerBound(x,0,LadyChimps-1 );
        TallLady = UpperBound(x,0,LadyChimps-1 );
        
        if( ShortLady == -1 ) cout << "X ";
        else cout << V[ShortLady] <<" ";
        
        if( TallLady == -1 ) cout << "X" <<endl;
        else cout << V[TallLady] << endl;
    }
    return 0;
}