//
//  main.cpp
//  540.A - Combination Lock
//
//  Created by Nur Islam on 5/16/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

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
#include <iostream>
#include <fstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <iterator>
#include <functional>
using namespace std;

int main()
{
    int n,MinDistance,res = 0;
    cin >> n;
    string InitialPattern,ExpectedPattern;
    cin >> InitialPattern >> ExpectedPattern;
    
    int l = (int)InitialPattern.size();
    
    for( int i = 0 ; i < l ; i++ )
    {
        int x = InitialPattern[i] - 48;//ASSCI value of Zero is 48,subtraction by 48 returns the ASSCI value of this (i)th specific number
        int y = ExpectedPattern[i] - 48;
        
        MinDistance = abs(x - y);
        if( MinDistance >= (10 - MinDistance) ) MinDistance = ( 10 - MinDistance );
        res += MinDistance;
    }
    cout<<res<<endl;
    
    return 0;
}