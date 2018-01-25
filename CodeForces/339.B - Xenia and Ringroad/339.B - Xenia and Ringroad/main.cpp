//
//  main.cpp
//  339.B - Xenia and Ringroad
//
//  Created by Nur Islam on 5/11/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <functional>
#include <cstdlib>
using namespace std;

int main()
{
    int n,m,task1,task2;
    long long Count = 0;
    
    cin >> n >> m;
    
    task1 = 1;
    for( int i = 1 ; i <= m ; i++ )
    {
        cin >> task2;
        
        if( task2 >= task1 ) Count += task2 - task1;
        else Count += ( n - task1 ) + task2;
        
        task1 = task2;
    }
    cout<<Count<<endl;
    return 0;
}