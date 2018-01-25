//
//  main.cpp
//  1043 - Triangle Partitioning
//
//  Created by Nur Islam on 6/18/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int tt;
    double AB,AC,BC,Ratio;
    
    cin >> tt;
    for( int t = 1 ; t <= tt ; t++ )
    {
        cin >> AB >> AC >> BC >> Ratio;
        double res = sqrt( Ratio / (Ratio + 1.0 ) ) * AB;
        
        cout <<"Case "<<t<<": "<< setprecision(10) << res << endl;
        
    }
    
    return 0;
}
