//
//  main.cpp
//  1048 - Conquering Keokradong
//
//  Created by Nur Islam on 6/18/16.
//  Copyright © 2016 Nur Islam. All rights reserved.
//

#include <iostream>
#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;
vector < int > V;
int NumOfDays;


int IsValid( int Capacity )
{
    int Cap = Capacity,Days = NumOfDays;
    for( int i = 0 ; i < V.size() ; i++ )
    {
        if( Cap - V[i] < 0 )
        {
            Days--;
            Cap = Capacity;
            if( Days < 1 ) return 0;
        }
        
        if( Cap - V[i] >= 0 )
        {
            Cap -= V[i];
        }
        else return 0;
    }
    return 1;
}

int BinarySearch(int Min,int Max)
{
    int Mid,res,Count = 0;
    while( Min <= Max )
    {
        //if( Count > 15 ) break; //becaue ( log n == 7 ) which is less than 15
        
        Mid = ( Min + Max ) / 2 ;
        int k = IsValid(Mid);
        if( k )
        {
            res = Mid;
            Max = Mid - 1 ;
        }
        else Min = Mid + 1;
        //Count++;
    }
    return res;
}

int main()
{
    int tt,x,NumOfCampSite,NumOfNight;
    //cin >> tt;
    scanf("%d",&tt);
    for( int t = 1 ; t <= tt ; t++ )
    {
        //cin >> NumOfCampSite >> NumOfNight;
        scanf("%d %d",&NumOfCampSite,&NumOfNight);
        
        NumOfDays = NumOfNight + 1;
        NumOfCampSite = NumOfCampSite + 1;
        V.clear();
        
        for( int i = 1 ; i <= NumOfCampSite ; i++ )
        {
            //cin >> x;
            scanf("%d",&x);
            V.push_back(x);
        }
        int res = BinarySearch(1,10000000);
        //cout << "Case " << t << ": " << res << endl;
        printf("Case %d: %d\n",t,res);
        
        int Cap = res,CapOfADay = 0;
        for( int i = 0 ; i < V.size() ; i++ )
        {
            if( Cap - V[i] < 0 )
            {
                Cap = res;
                //cout << CapOfADay << endl;
                printf("%d\n",CapOfADay);
                CapOfADay = 0;
                NumOfDays--;
                
            }
            
            if( NumOfCampSite == NumOfDays )
            {
                if( CapOfADay != 0 ) 
                {
                    //cout << CapOfADay + V[i] << endl;
                    printf("%d\n",CapOfADay+V[i]);
                    CapOfADay = 0;
                }
                //else cout << V[i] << endl;
                else printf("%d\n",V[i]);
                
                NumOfDays--;
                NumOfCampSite--;
                Cap = res;
                continue;
            }
            
            if( Cap - V[i] >= 0 )
            {
                Cap -= V[i];
                CapOfADay += V[i];
                NumOfCampSite--;
            }
        }
    }
    return 0;
}
