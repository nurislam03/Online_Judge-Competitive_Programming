//
//  main.cpp
//  10071 - Back to High School Physics
//
//  Created by Nur Islam on 6/18/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int v,t,s;
    while ( scanf("%d %d",&v,&t) != EOF )
    {
        s = v * t;
        cout << s * 2 << endl;
    }
    return 0;
}
