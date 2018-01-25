//
//  main.cpp
//  709.A. Juicer.cpp
//
//  Created by Nur Islam on 8/25/16.
//  Copyright © 2016 nur islam. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    int n,a,b,d;
    long long res = 0,tot = 0;
    scanf("%d %d %d",&n,&b,&d);
    
    for( int i = 1; i <= n; i++ )
    {
        scanf("%d",&a);
        if( a <= b )
        {
            tot += a;
            
            if( tot > d )
            {
                res++;
                tot = 0;
            }
        }
    }
    cout << res << endl;
    return 0;
}