//
//  main.cpp
//  136.A. Presents
//
//  Created by Nur Islam on 6/19/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int n,x;
    cin >> n ;
    int ara[n+5];
    
    for( int i = 1 ; i <= n ; i++ )
    {
        cin >> x;
        ara[x] = i;
    }
    
    cout << ara[1];
    for( int i = 2 ; i <= n ; i++ ) cout << " " << ara[i];
    cout << endl;
    
    return 0;
}
