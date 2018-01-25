//
//  main.cpp
//  10346 - Peter's Smokes
//
//  Created by Nur Islam on 6/18/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    long long Cigarettes,Butts,res;
    
    while( scanf("%lld %lld", &Cigarettes, &Butts) != EOF )
    {
        res = Cigarettes;
        
        while( Cigarettes >= Butts )
        {
            res += Cigarettes / Butts ;
            Cigarettes = ( Cigarettes / Butts ) + ( Cigarettes % Butts );
        }
        cout << res << endl;
    }
    return 0;
}
