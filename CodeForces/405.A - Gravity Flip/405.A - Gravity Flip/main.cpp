//
//  main.cpp
//  405.A - Gravity Flip
//
//  Created by Nur Islam on 5/16/16.
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
    int n,x;
    cin >> n;
    vector<int>V;
    
    for( int i = 1 ; i <= n ; i++ )
    {
        cin >> x; V.push_back(x);
    }
    sort( V.begin(),V.end() );
    
    int l = (int) V.size();
    for( int i = 0  ; i < l - 1 ; i++ ) cout<<V[i]<<" ";
    cout<<V[l-1]<<endl;
    return 0;
}
