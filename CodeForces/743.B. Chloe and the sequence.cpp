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
    LL a,b,ans = 1;
    cin >> a >> b;

    while(1)
    {
        if(b%2 == 0)
        {
            b /= 2;
            ans++;
        }
        else
        {
            cout << ans << endl;
            return 0;
        }
    }

    return 0;
}
