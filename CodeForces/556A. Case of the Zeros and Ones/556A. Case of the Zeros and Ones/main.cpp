//
//  main.cpp
//  556A. Case of the Zeros and Ones
//
//  Created by Nur Islam on 6/17/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <stack>
#include <string>
using namespace std;
stack < char > S;

int main()
{
    int n;
    string x;
    cin >> n;
    cin >> x;
    
    S.push(x[0]);
    if( n == 1 )
    {
        cout << "1" << endl;
        return 0;
    }
    
    
    for( int i = 1 ; i < x.size() ; i++ )
    {
        if( S.empty() ) S.push(x[i]);
        else if( S.top() != x[i] ) S.pop();
            else S.push(x[i]);
    }
    cout << S.size() << endl;
    return 0;
}


