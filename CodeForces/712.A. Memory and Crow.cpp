#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int main()
{
    int n;
    cin >> n;

    long long x,prevNum;
    cin >> prevNum;

    for( int i = 2; i <= n; i++ )
    {
        cin >> x;
        if( i != 2 ) cout << " ";
        cout << prevNum + x ;
        prevNum = x;
    }
    cout << " " << x << endl;
    return 0;
}
