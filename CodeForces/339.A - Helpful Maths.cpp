//
//  main.cpp
//  339.A - Helpful Maths
//
//  Created by Nur Islam on 5/9/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    vector<int>Math;
    string s;
    cin >> s;
    
    for( int i = 0 ; i < s.size() ; i++ )
    {
        if( s[i] != '+' ) Math.push_back(s[i] - '0');
    }
    
    sort( Math.begin(),Math.end() );
    
    cout<<Math[0];
    for( int i = 1 ; i < Math.size() ; i++ ) cout<<"+"<<Math[i];
    cout<<endl;
    
    return 0;
}
