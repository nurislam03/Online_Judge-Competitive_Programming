#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    int T;
    cin >> T;
    string x;

    while(T--)
    {
        cin >> x;
        for( int i = 0; i < x.size(); i++ )
        {
            if( x[i] >= 'a' && x[i] <= 'z' ) x[i] = ('A' + ( x[i] - 'a'));
            else if( x[i] >= 'A' && x[i] <= 'Z' ) x[i] = ('a' + ( x[i] - 'A'));
        }
        cout << x << endl;
    }
    return 0;
}
