#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>

using namespace std;
#define LL long long
#define ULL unsigned long long
#define mod 1000003
#define sz 100000


int main()
{
    int n,m;
    cin >> n >> m;

    long long click = 0;
    if(m <= n)
    {
        cout << n-m << endl;
        return 0;
    }

    while(m > n)
    {
        click++;
        if(m%2 != 0) m++;
        else m /= 2;
    }

    click += abs(n-m);
    cout << click << endl;

    return 0;
}
