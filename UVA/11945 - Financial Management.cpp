//
//  main.cpp
//  11945 - Financial Management
//
//  Created by Nur Islam on 5/20/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for( int t = 1; t <= n; t++ )
    {
        double x,Sum = 0.0,Average;
        for( int i = 1; i <= 12; ++i )
        {
            scanf("%lf",&x);
            Sum += x;
        }

        Average = Sum / 12.0;
        if( Average > 999 ) printf("%d $%ld,%.2lf\n",t,(long)(Average/1000.0),fmod(Average,1000.0));
        else printf("%d $%.2lf\n",t,Average);
    }

    return 0;
}
