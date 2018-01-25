//
//  main.cpp
//  147.Dollars
//
//  Created by Nur Islam on 6/16/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;
long long ara[30000+100];
int coin[] = {5,10,20,50,100,200,500,1000,2000,5000,10000};

void init( int n )
{
    for( int i = 0 ; i <= n+10 ; i++ ) ara[i] = 0;
}


long long IterativeWay( int n )
{
    ara[0] = 1;
    for( int i = 0 ; i < 11 ; i++ )
    {
        int C = coin[i];
        if( C > n ) break;
        
        for( int j = C ; j <= n ; j++ )
        {
            ara[j] += ara[j-C];
        }
    }
    return ara[n];
}

int main()
{
    //double Dollar;
    int Cent,Dollar,AlreadyCent;
    
    while(1)
    {
        scanf("%d.%d",&Dollar,&AlreadyCent); // take this double value as int
        
        Cent = ( Dollar * 100) + AlreadyCent;
        if( Cent == 0 ) break;
        init(Cent);
        long long res = IterativeWay(Cent);
        
        printf("%3d.%.2d%17lld\n",Dollar,AlreadyCent,res);
    }
    return 0;
}
