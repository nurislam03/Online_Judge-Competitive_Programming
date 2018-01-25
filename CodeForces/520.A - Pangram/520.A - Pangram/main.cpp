//
//  main.cpp
//  520.A - Pangram
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
    int n,UpperCase[100],Count = 0;
    cin >> n;
    string S;
    cin >> S;

    for( int i = 50 ; i < 100 ; i++ ) UpperCase[i] = 0;
    
    if( n < 26 ) cout<<"NO"<<endl;
    else
    {
        for( int i = 0 ; i < S.size() ; i++ )
        {
            if( islower(S[i]) ) S[i] = toupper(S[i]);
            UpperCase[S[i]] = 1;
        }
        for( int i = 65 ; i <= 90 ; i++ ) if( UpperCase[i] == 1 ) Count++;
        if( Count == 26 ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
