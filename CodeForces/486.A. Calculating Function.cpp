//
//  main.cpp
//  486.A. Calculating Function
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
    long long  n,res;
    
    cin >> n;
    
    if( n % 2 == 0 ) res = n / 2;
    else res = ( n / 2 ) - n;
    
    cout<<res<<endl;
    return 0;
}
