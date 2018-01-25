#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int Cycle(int n)
{
    int cnt = 1;
    while(n != 1)
    {

        if(n % 2 != 0)
            n = (3 * n) + 1;

        else n /= 2;

        cnt++;
    }
    return cnt;
}



int main()
{
    long long x,y;
    while(scanf("%lld %lld",&x,&y) != EOF)
    {
        cout << x << " " << y << " ";
        int maxCycle = 0;
        if(x > y)
            swap(x,y);


        for(int i = x; i <= y; i++)
            maxCycle = max(maxCycle, Cycle(i));


        cout << maxCycle << endl;
    }

    return 0;
}
