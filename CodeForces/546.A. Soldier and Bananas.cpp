//
//  main.cpp
//  546.A. Soldier and Bananas
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
    long long  CostPerBanana,MoneyHeHas,BananasHeWants;
    cin >> CostPerBanana >> MoneyHeHas >> BananasHeWants;
    
    long long x,TotalCost,MoneyHeBorrow;
    x = ( BananasHeWants * ( BananasHeWants + 1 ) ) / 2; // if series like that ( 1,2,3.....n ) then Formula : ( n * ( n + 1 ) )
    
    TotalCost = x * CostPerBanana ;
    
    if( TotalCost <= MoneyHeHas ) MoneyHeBorrow = 0;
    else MoneyHeBorrow = TotalCost - MoneyHeHas;
    
    cout<<MoneyHeBorrow<<endl;
    return 0;
}
