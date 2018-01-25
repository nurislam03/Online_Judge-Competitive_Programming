//
//  main.cpp
//  1311 - Unlucky Bird
//
//  Created by Nur Islam on 5/2/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    int tt; cin >> tt;
    double v1,v2,v3,a1,a2,t1,t2,T,S1,S2,InitialDistanceOfTrains,DistanceCoveredByBird;
    
    for( int t = 1 ; t <= tt ; t++ )
    {
        cin >> v1 >> v2 >> v3 >> a1 >> a2;
        
        t1 = ( v1 / a1 ); //formula v = u - at
        t2 = ( v2 / a2 ); //formula v = u - at
        
        if( t1 >= t2 ) T = t1;
        else T = t2;
        
        S1 = ( v1*t1 -.5*a1*t1*t1 );
        S2 = ( v2*t2 - .5*a2*t2*t2 );
        InitialDistanceOfTrains = S1 + S2;
        DistanceCoveredByBird = v3 * T;
        
        printf("Case %d: %f %f\n",t,InitialDistanceOfTrains,DistanceCoveredByBird);
    }
    return 0;
}
