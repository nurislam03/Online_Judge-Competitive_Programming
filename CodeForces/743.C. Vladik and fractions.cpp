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
#define sz 100



int main()
{
    int n;
    cin >> n;

    int x = n;
    int y = n+1;
    int z = n*(n+1);

    if(n > 1)
    {
        cout << x << " " << y << " " << z << endl;
        return 0;
    }
    else cout << "-1" << endl;

    return 0;
}
