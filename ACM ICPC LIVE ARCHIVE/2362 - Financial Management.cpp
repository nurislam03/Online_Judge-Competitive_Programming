//
//  main.cpp
//  2362 - Financial Management  2362 - Financial Management 2362 - Financial Management
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
    double x,Sum = 0.0,Average;
    
    for( int i = 1 ; i <= 12 ; i++ )
    {
        scanf("%lf",&x);
        Sum += x;
    }
    
    Average = Sum / 12.0;
    //if( Average - (int)Average >= .5 ) cout <<"$"<< (int)(Average + 1) <<".00";
    printf("$%.2lf\n",Average);
    
    return 0;
}
