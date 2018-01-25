//
//  main.cpp
//  448.A - Rewards
//
//  Created by Nur Islam on 5/11/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    int Cup,cup1,cup2,cup3,Medals,medals1,medals2,medals3,n,CupShelves,MedalsShelves;
    cin >> cup1 >> cup2 >> cup3;
    cin >> medals1 >> medals2 >> medals3;
    cin >> n;
    
    Cup = cup1 + cup2 + cup3;
    Medals = medals1 + medals2 + medals3;
    
    CupShelves = ( Cup / 5 );
    if( Cup % 5 != 0 ) CupShelves += 1;
    
    MedalsShelves = ( Medals / 10 );
    if( Medals % 10 != 0 ) MedalsShelves += 1;
    
    if( n >= ( CupShelves + MedalsShelves ) ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
    return 0;
}