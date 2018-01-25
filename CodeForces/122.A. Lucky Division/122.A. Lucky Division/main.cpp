//
//  main.cpp
//  122.A. Lucky Division
//
//  Created by Nur Islam on 6/19/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
vector < int > V;

bool isLucky( string x )
{
    for( int i = 0 ; i < x.size() ; i++ )
    {
        if( x[i] != '4' && x[i] != '7' ) return false;
    }
    return true;
}



int main()
{
    string s;
    cin >> s;
    int realNum ;
    
    if( isLucky(s) ) cout << "YES" << endl;
    else
    {
        realNum = stoi(s);
        if( realNum % 4 == 0 || realNum % 7 == 0 ) cout << "YES" << endl;
        else
        {
            V.push_back(4); V.push_back(7);
            for( int i = 0 ; i < 30 ; i++ )
            {
                int LuckyNum1 = ( V[i] * 10 ) + 4; V.push_back(LuckyNum1);
                if( ( LuckyNum1 <= 1000 && realNum % LuckyNum1 == 0 ) )
                {
                    cout << "YES" << endl;
                    return 0;
                }
                
                int LuckyNum2 = ( V[i] * 10 ) + 7; V.push_back(LuckyNum2);
                if( ( LuckyNum2 <= 1000  && realNum % LuckyNum2 == 0 ) )
                {
                    cout << "YES" << endl;
                    return 0;
                }
            }
            cout << "NO" << endl;
        }
    }
    return 0;
}
