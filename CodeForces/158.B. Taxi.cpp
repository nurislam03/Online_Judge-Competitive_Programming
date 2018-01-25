//
//  main.cpp
//  158.B. Taxi
//
//  Created by Nur Islam on 6/19/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ara[100000+10] = {0};
vector < int > V;

int main()
{
    int n,x,temp = 0,res = 0;
    cin >> n;
    
    for( int i = 1 ; i <= n ; i++ )
    {
        cin >> x;
        if( x == 4 ) res++;
        else V.push_back(x);
    }
    
    sort( V.begin() , V.end() );
    int i = 0, L = (int)V.size() - 1;
    
    if( i == L ) res++;
    
    while( i < L )
    {
        if( V[i] + V[L] == 4 )
        {
            res++;
            i++; L--;
            if( i == L ) res++;
        }
        else if( V[i] + V[L] > 4 )
        {
            res++;
            L--;
            if( i == L ) res++;
        }
        
        else if( V[i] + V[L] < 4 )
        {
            temp = V[i] + V[L];
            i++; L--;
            
            if( ( temp + V[i] > 4 ) && ( i <= L ) )
            {
                res++;
                if( i == L ) res++;
            }
            
            else
            {
                while( temp + V[i] <= 4 && i <= L )
                {
                    temp += V[i];
                    i++;
                    if( i == L && temp == 4 ) res++;
                }
                res++;
            }
        }
    }
    cout << res << endl;
    return 0;
}


