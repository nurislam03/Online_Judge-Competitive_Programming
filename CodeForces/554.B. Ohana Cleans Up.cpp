#include <iostream>
#include <map>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    map < vector <string>, int > Map;

    for( int i = 0; i < n ; i++ )
    {
        vector < string > V;
        string x;
        cin >> x;
        V.push_back(x);
        Map[V]++;
    }

    int Max = -1;
    map < vector <string>, int >:: iterator it;
    for( it = Map.begin(); it != Map.end(); it++ )
    {
        if( it->second >= Max ) Max = it->second;
    }

    cout << Max << endl;
    return 0;
}
