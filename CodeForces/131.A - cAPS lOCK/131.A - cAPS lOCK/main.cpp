//
//  main.cpp
//  131.A - cAPS lOCK
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
    string s;
    cin >> s;
    
    int l, Count = 0;
    l = (int)s.size();
    
    for( int i = 1 ; i < l ; i++ )
    {
        if( isupper(s[i]) ) Count++;
        //else break;
    }
    
    if( l - 1 == Count )
    {
        if( isupper(s[0]) )      s[0] = tolower(s[0]);
        else if( islower(s[0]) ) s[0] = toupper(s[0]);
        
        for( int i = 1 ; i < l ; i++ ) s[i] = tolower(s[i]);
    }
    cout<<s<<endl;
    
    return 0;
}




