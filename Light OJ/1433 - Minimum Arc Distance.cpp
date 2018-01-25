//
//  main.cpp
//  1433 - Minimum Arc Distance
//
//  Created by Nur Islam on 5/2/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int tt,Ox,Oy,Ax,Ay,Bx,By;
    double AB,OA,OB,ArcAngle,ArcDistance;
    cin >> tt;
    
    for( int t = 1 ; t <= tt ; t++ )
    {
        cin >> Ox >> Oy >> Ax >> Ay >> Bx >> By;
        
        AB = sqrt( (Ax-Bx)*(Ax-Bx) + (Ay-By)*(Ay-By) );
        OA = sqrt( (Ox-Ax)*(Ox-Ax) + (Oy-Ay)*(Oy-Ay) );
        OB = OA; // all radius will be always same in a circle
        
        ArcAngle = acos( (OA*OA+OB*OB - AB*AB)/(2*OA*OB) );
        ArcDistance = OA * ArcAngle;
        printf("Case %d: %f\n",t,ArcDistance);
    }
    return 0;
}