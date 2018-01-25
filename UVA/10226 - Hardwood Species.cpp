#include<stdio.h>
#include<iostream>
#include<map>
#include <iomanip>

using namespace std;
map<string,int>Map;

int main()
{
    int T;
    scanf("%d",&T);

    for( int t = 1; t <= T; t++ )
    {
        Map.clear();
        string species;
        int Count = 0;

        while(getline(cin,species))
        {
            if( species.size() < 1 ) break;
            Map[species]++;
            Count++;
        }

        map<string,int>:: iterator it;
        for(it =Map.begin(); it != Map.end(); it++)
        {
            cout<< it->first <<" "<< setprecision(4) << fixed << it->second * 100.0 / Count << endl;
        }
        if(t != T) printf("\n");
    }
    return 0;
}
