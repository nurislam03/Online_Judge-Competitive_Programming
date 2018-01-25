//
//  main.cpp
//  1307 - Counting Triangles
//
//  Created by Nur Islam on 6/18/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector < long long > V;

int BinarySearch( int Target, int Min, int Max )
{
    int Mid,res;
    while( Min <= Max )
    {
        Mid = ( Min + Max ) / 2 ;
        if( V[Mid] < Target )
        {
            Min = Mid + 1;
            res = Mid;
        }
        else Max = Mid - 1;
    }
    return res ;
}


int main()
{
    int tt;   cin >> tt;
    for( int t = 1 ; t <= tt ; t++)
    {
        long long N,x,LengthOfTwoSide,LowerPos,UpperPos;
        cin >> N;
        V.clear();
        
        for( int i = 1 ; i <= N ; i++  )
        {
            cin >> x;
            V.push_back(x);
        }
        sort( V.begin(),V.end() );
        int l = (int)V.size(), ValidTriangle,res = 0;
        
        for( int i = 0 ; i < l ; i++ )
        {
            for( int j = i+1 ; j < l ; j++ )
            {
                LengthOfTwoSide = V[i] + V[j];
                LowerPos = j;
                UpperPos = l - 1;
                ValidTriangle = BinarySearch( LengthOfTwoSide, LowerPos , UpperPos );
                res += ValidTriangle - LowerPos;
            }
        }
        cout << "Case " << t << ": " << res << endl;
    }
    return 0;
}