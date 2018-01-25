//
//  main.cpp
//  1.1Your Ride Is Here
//
//  Created by Nur Islam on 6/20/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//
/*
 ID: nurisla1
 PROG: ride
 LANG: C++
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //ofstream cout ("ride.out");
    //ifstream cin ("ride.in");
    
    string Comet,Group;
    cin >> Comet;
    cin >> Group;
    
    long long res1 = 1,res2 = 1;
    for( int i = 0 ; i < Comet.size() ; i++ )
    {
        res1 *= ( Comet[i] - 64 );
    }
    
    for( int i = 0 ; i < Group.size() ; i++ )
    {
        res2 *= ( Group[i] - 64);
    }
    
    if( res1 % 47 == res2 % 47 ) cout << "GO" << endl;
    else cout << "STAY" << endl;
    return 0;
}
