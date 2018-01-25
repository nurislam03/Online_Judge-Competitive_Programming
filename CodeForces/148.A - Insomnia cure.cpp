//
//  main.cpp
//  148.A - Insomnia cure
//
//  Created by Nur Islam on 5/15/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

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
    int k,l,m,n,d,Count = 0;
    cin >> k >> l >> m >> n >> d;
    
    int ara[d+5];
    for( int i = 1 ; i <= d ; i++ ) ara[i] = 0;
    
    if( k == 1 || l == 1 || m == 1 || n == 1 )
    {
        cout<<d<<endl;
        return 0;
    }
    else
    {
        for( int i = k ; i <= d ; i += k ) ara[i] = 1;
        for( int i = l ; i <= d ; i += l ) ara[i] = 1;
        for( int i = m ; i <= d ; i += m ) ara[i] = 1;
        for( int i = n ; i <= d ; i += n ) ara[i] = 1;
    }
    for( int i = 1 ; i <= d ; i++ )
    {
        if( ara[i] == 1 ) Count++;
    }
    cout<<Count<<endl;
    return 0;
}
