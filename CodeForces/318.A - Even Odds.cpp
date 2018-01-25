//
//  main.cpp
//  318.A - Even Odds
//
//  Created by Nur Islam on 5/15/16.
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
    long long Number,Position,MidPoint,res;
    cin >> Number >> Position;
    
    MidPoint = ( Number + 1 ) / 2;
    
    if( Position <= MidPoint ) res = ( Position * 2 ) - 1;
    else res = ( Position  - MidPoint ) * 2;
    
    cout<<res<<endl;
    
    return 0;
}




