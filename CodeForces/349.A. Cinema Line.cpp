#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;
#define LL long long
int coin25 = 0,coin50 = 0;


void Check(int x)
{
    if(x == 25) coin25++;
    else if(x == 50) coin50++;
}

bool Solve(int x)
{
    if(x >= 50 && coin50 > 0)
    {
        x -= 50; coin50--;
    }
    while(x >= 25 && coin25 > 0)
    {
        x -= 25;
        coin25--;
    }

    if(x > 0) return false;
    return true;
}


int main()
{
    int n,x;
    scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        scanf("%d",&x);

        if(x == 25)
        {
            Check(x);
            continue;
        }
        bool ans = Solve(x-25);
        Check(x);
        if(ans == false)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}
