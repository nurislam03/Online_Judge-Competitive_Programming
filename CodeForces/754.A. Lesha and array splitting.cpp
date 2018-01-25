#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;
#define ULL unsigned long long
#define LL long long
#define sz 10000
int ara[sz];


int main()
{
    int n,x;
    scanf("%d",&n);

    int sum = 0, cnt = 0,pos;
    for(int i = 1; i <= n; i++)
    {
        scanf("%d",&x);
        ara[i] = x;
        sum += x;
        if(x == 0) cnt++;

        if(sum != 0) pos = i;
    }

    if(cnt == n)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;

    if(pos == n)
    {
        cout << 1 << endl;
        cout << 1 << " " << n << endl;
    }
    else
    {
        cout << 2 << endl;
        cout << 1 << " " << pos << endl;
        cout << pos+1 << " " << n << endl;
    }


    return 0;
}
