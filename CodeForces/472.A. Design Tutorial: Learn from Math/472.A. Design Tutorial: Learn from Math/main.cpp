//
//  main.cpp
//  472.A. Design Tutorial: Learn from Math
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
    int n;
    cin >> n;
    
    if( n % 2 == 0 ) cout<<"4 "<< n - 4 <<endl;
    else cout<< n - 9 <<" 9"<<endl;
    
    return 0;
}
