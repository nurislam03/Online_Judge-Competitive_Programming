#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;


int main()
{
    int a,b,n;
    cin >> a >> b >> n;

    int tmp = abs(a) + abs(b);
    if(n < tmp || (n-tmp) % 2)
        cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}
