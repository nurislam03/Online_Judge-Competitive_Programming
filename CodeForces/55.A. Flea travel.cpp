#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

#define LL long long
#define ULL unsigned long long
#define sz 1000
int ara[sz+10];

int main()
{
    int n;
    cin >> n;

    memset(ara, 0, sizeof(ara));
    LL x = 1,t = 1;
    LL prev = -1,cnt = 0;

    while(1)
    {

        if(x > n)
        {
            x = (x % n);
        }

        if(prev == x)
        {
            cout << "NO" << endl; //cout << "v " << endl;
            return 0;
        }
        if(ara[x] == 0)
        {
            ara[x] = 1; //cout << "ok" << endl;
            cnt++;
        }
        //cout << "skjdjh" << endl;
        prev = x;
        t++;
        x += (t-1);

        if(cnt >= n)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    return 0;
}
