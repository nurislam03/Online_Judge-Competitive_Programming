//
//  main.cpp
//  UVa 11875 Brick Game
//
//  Created by Nur Islam on 5/6/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int tt; cin >> tt;
    
    for( int t = 1 ;t <= tt ; t++ )
    {
        int n,ara[20],CaptainIndex,Captain = 0;
        cin >> n;
        
        CaptainIndex = ( n / 2 ) + 1;
        
        for( int i = 1 ; i <= n ; i++ )
        {
            cin >> ara[i];
            if( i == CaptainIndex ) Captain = ara[i];
        }
        
        cout<<"Case "<<t<<": "<<Captain<<endl;
    }
    return 0;
}
