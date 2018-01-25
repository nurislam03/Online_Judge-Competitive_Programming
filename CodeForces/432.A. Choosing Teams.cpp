//
//  main.cpp
//  432.A. Choosing Teams
//
//  Created by Nur Islam on 5/4/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int n,k,x,TotalMembers = 0;
    cin >> n >> k;
    
    for( int i = 1 ; i <= n ; i++ )
    {
        cin >> x;
        if( (5-x) >= k ) TotalMembers++;
    }
    cout<<TotalMembers/3<<endl;
    return 0;
}
