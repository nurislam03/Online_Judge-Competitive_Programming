//
//  main.cpp
//  676.A.Nicholas and Permutation
//
//  Created by Nur Islam on 6/16/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int n,x,Min = 111,Max = -1,res = 0,IndexOfMinNum = 0,IndexOfMaxNum = 0;
    cin >> n;
    
    for( int i = 1 ; i <= n ; i++ )
    {
        cin >> x;
        if( x <= Min )
        {
            Min = x;
            IndexOfMinNum = i;
        }
        
        if( x >= Max )
        {
            Max = x;
            IndexOfMaxNum = i;
        }
    }
    if( n - IndexOfMinNum >= res ) res = ( n - IndexOfMinNum );
    if( IndexOfMinNum - 1 >= res ) res = ( IndexOfMinNum - 1 );
    if( n - IndexOfMaxNum >= res ) res = ( n - IndexOfMaxNum );
    if( IndexOfMaxNum - 1 >= res ) res = ( IndexOfMaxNum - 1 );
    
    cout << res << endl;
    return 0;
}
