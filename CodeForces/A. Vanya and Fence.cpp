//
//  main.cpp
//  A. Vanya and Fence
//
//  Created by Nur Islam on 6/2/16.
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
    int n,h,x,res = 0;
    cin >> n >> h ;
    for( int i = 1 ; i <= n ; i++ )
    {
        cin >> x ;
        if( x > h ) res += 2;
        else res++;
    }
    cout << res << endl;
    return 0;
}

