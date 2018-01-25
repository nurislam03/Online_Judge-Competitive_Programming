//
//  main.cpp
//  381.A. Sereja and Dima
//
//  Created by Nur Islam on 6/16/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
vector < int > V;

int main()
{
    int n,x,SumOfSereja = 0,SumOfDima = 0,flag = 0;
    cin >> n;
    
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> x ;
        V.push_back(x);
    }
    int i = 0 , j = (int)V.size() - 1;
    
    while ( i <= j )
    {
        if( flag % 2 == 0 )
        {
            if( V[i] >= V[j] )
            {
                SumOfSereja += V[i];
                i++;
            }
            else
            {
                SumOfSereja += V[j];
                j--;
            }
            flag++;
        }
        
        else
        {
            if( V[i] >= V[j] )
            {
                SumOfDima += V[i];
                i++;
            }
            else
            {
                SumOfDima += V[j];
                j--;
            }
            flag++;
        }
        
    }
    
    cout << SumOfSereja << " " << SumOfDima << endl;
    return 0;
}
