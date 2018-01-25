//
//  main.cpp
//  2787 - Doubles
//
//  Created by Nur Islam on 5/20/16.
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
    int n,number[210],ara[210],x;
    
    while( cin >> n )
    {
        if( n == -1 ) break;
        for( int i = 0 ; i < 205 ; i++ )
        {
            number[i] = 0;
            ara[i] = 0;
        }
        
        int Count = 0,i = 0;
        
        while( n != 0 )
        {
            number[n] = 1;
            ara[i++] = n;
            cin >> n;
        }
        
        for( int i = 0 ; i < 16 ; i++ )
        {
            x = ara[i];
            if( number[x*2] != 0 ) Count++;
        }
        cout << Count << endl;
    }
    
    return 0;
}