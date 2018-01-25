//
//  main.cpp
//  25. A. IQ test 25 A. IQ test 25.A - IQ Test
//
//  Created by Nur Islam on 5/17/16.
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
    int n,x,OddNumberIndex  = 0,OddCount = 0,EvenNumberIndex = 0,EvenCount = 0;
    cin >> n;

    for( int i = 1 ; i <= n ; i++ )
    {
        cin >> x;
        if( x % 2 == 0 )
        {
            EvenCount++;
            EvenNumberIndex = i;
        }
        else
        {
            OddCount++;
            OddNumberIndex = i;
        }
    }
    if( EvenCount == 1 ) cout<<EvenNumberIndex<<endl;
    else cout<<OddNumberIndex<<endl;

    return 0;
}
