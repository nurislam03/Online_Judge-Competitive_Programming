//
//  main.cpp
//  527.A. Playing with Paper
//
//  Created by Nur Islam on 6/17/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    long long a,b,ships1,ships2,res = 0;
    cin >> a >> b;
    
    while ( a > 0 && b > 0)
    {
        if( a >= b )
        {
            ships1 = a / b;
            res += ships1;
            a = a % b;
        }
        else
        {
            ships2 = b / a;
            res += ships2;
            b = b % a;
        }
    }
    cout << res << endl;
    
    return 0;
}
