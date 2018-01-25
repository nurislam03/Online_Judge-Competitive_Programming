#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    long long a,x,i = 0;
    cin >> a >> x;

    while(++i < 1000000)
    {
        if( a % x == 0 )
        {
            cout << "Yes" << endl;
            return 0;
        }
        a += a % x;
    }
    cout << "No" << endl;
    return 0;
}
