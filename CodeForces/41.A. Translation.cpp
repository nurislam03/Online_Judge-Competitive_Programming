//
//  main.cpp
//  41.A. Translation
//
//  Created by Nur Islam on 6/20/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s,t;
    cin >> s >> t;
    
    if( s.size() != t.size() )
    {
        cout << "NO" << endl;
        return 0;
    }
    
    int l = (int) t.size() - 1;
    for( int i = 0 , j = l ; i < s.size() ; i++ , j-- )
    {
        if( s[i] != t[j] )
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    
    cout << "YES" << endl;
    return 0;
}