#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int n,m,Min,Max;
    cin >> n >> m;


    if( n == 0 && m != 0 )
    {
        cout << "Impossible" << endl;
        return 0;
    }

    if( m == 0 )
        cout << n <<  "  " << n << endl;


    else
    {
        if( n == m )
        {
            Min = m;
            Max = m + (n-1);
        }
        else if( m > n )
        {
            Min = m;
            Max = m + (n-1);
        }
        else
        {
            Min = n;
            Max = m + (n-1);
        }
        cout << Min << "  " << Max << endl;
    }


    return 0;
}
