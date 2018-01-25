#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;


int main()
{
    int T;

    scanf("%d",&T);
    for( int t = 1 ; t <= T ; t++ )
    {
        string x;
        pair < string , int > V[10+2];
        int Relevance,Max = 0;

        for( int i = 0 ; i < 10 ; i++ )
        {
            cin >> x >> Relevance;
            V[i].first = x;
            V[i].second = Relevance;
            if( Relevance >= Max ) Max = Relevance;
        }
        cout << "Case #" << t << ":" << endl;
        for( int i = 0 ; i < 10 ; i++ )
        {
            if( V[i].second == Max ) cout << V[i].first << endl;;
        }
    }
    return 0;
}
