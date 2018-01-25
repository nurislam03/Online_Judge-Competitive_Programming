//
//  main.cpp
//  409.A - The Great Game
//
//  Created by Nur Islam on 5/11/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <functional>
#include <cstdlib>
using namespace std;

int main()
{
    string a,b;
    int Length,Team1 = 0,Team2 = 0;
    
    cin >> a;
    cin >> b;
    
    Length = (int) a.length();
    
    for (int i = 0 ; i < Length ; i += 2 )
    {
        if( a[i] == '8' )
        {
            if( b[i] == '[' ) Team1++;
            else if( b[i] == '(' ) Team2++;
        }
        
        else if( a[i] == '(' )
        {
            if( b[i] == '8' ) Team1++;
            else if( b[i] == '[' ) Team2++;
        }
        
        else if( a[i] == '[' )
        {
            if( b[i] == '(' ) Team1++;
            else if( b[i] == '8' ) Team2++;
        }
        
    }
    if( Team1 == Team2 ) cout<<"TIE"<<endl;
    else if( Team1 > Team2 ) cout<<"TEAM 1 WINS"<<endl;
    else cout<<"TEAM 2 WINS"<<endl;
    
    return 0;
}


