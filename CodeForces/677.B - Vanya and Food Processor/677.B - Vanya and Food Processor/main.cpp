//
//  main.cpp
//  codeforcesTest2
//
//  Created by Nur Islam on 6/1/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
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
    long long n,h,k,x, min = 0, Remainder,Remain = 0 ;
    cin >> n >> h >> k;
    
    for( int i = 1 ; i <= n ; i++ )
    {
        cin >> x;
        
        while( x + Remain > h )
        {
            Remain -= k;
            if( Remain < 0 ) Remain = 0;
            min++;
        }
        
        Remain += x;
        
        Remainder = Remain % k;
        min = min + ( Remain / k );
        Remain = Remainder;
        
    }
    if( Remain != 0 ) min++;
    cout << min << endl;
    return 0;
}