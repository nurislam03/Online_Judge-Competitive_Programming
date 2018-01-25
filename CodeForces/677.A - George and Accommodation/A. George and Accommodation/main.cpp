//
//  main.cpp
//  A. George and Accommodation
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
    
    int TotalRoom,PeopleLiving,Capacity,Count = 0;
    cin >> TotalRoom;
    for( int i = 1 ; i <= TotalRoom ; i++ )
    {
        cin >> PeopleLiving >> Capacity;
        if( ( Capacity - PeopleLiving ) >= 2 ) Count++;
    }
    cout<<Count<<endl;
    return 0;
}
