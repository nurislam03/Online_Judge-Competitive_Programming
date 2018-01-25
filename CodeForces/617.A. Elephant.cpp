//
//  main.cpp
//  617.A. Elephant
//
//  Created by Nur Islam on 6/19/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int n,res;
    cin >> n;
    
    res =  n / 5 ;
    if( n % 5 != 0 ) res++;
    
    cout << res << endl;
    return 0;
}
