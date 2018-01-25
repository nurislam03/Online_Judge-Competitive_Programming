//
//  main.cpp
//  12578 - 10:6:2
//
//  Created by Nur Islam on 6/18/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

#define PI acos(-1)

int main() {
    int tt,x;
    double weidth,rec,r,AreaOfRead;
    scanf("%d",&tt);
    
    for( int i = 1 ; i <= tt ; i++ )
    {
        scanf("%d",&x);
        weidth = (6.0*x)/10.0;
        r = (1/5.0)*x;
        AreaOfRead = PI*(r*r);
        rec = x * weidth;
        
        printf("%.2f %.2f\n",AreaOfRead,rec-AreaOfRead);
    }
    return 0;
}