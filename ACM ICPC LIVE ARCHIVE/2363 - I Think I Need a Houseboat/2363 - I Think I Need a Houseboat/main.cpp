//
//  main.cpp
//  2363 - I Think I Need a Houseboat
//
//  Created by Nur Islam on 5/22/16.
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

#define PI acos(-1)


int main()
{
    //freopen("output.txt","w",stdout);
    int tt;
    cin >> tt;
    
    double SemiCircleArea,Radius,x,y;
    int Years;
    
    
    for( int i = 1 ; i <= tt ; i++ )
    {
        cin >> x >> y;
        
        Radius = sqrt( ( x * x ) + ( y * y ) );
        SemiCircleArea = ( PI * Radius * Radius ) / 2 ;
        Years = ceil( SemiCircleArea / 50 );
        
        cout <<"Property "<<i<<": This property will begin eroding in year "<<Years<<"."<< endl;
    }
    cout << "END OF OUTPUT."<<endl;
    
    return 0;
}
