#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;
int ara[15] = {};

int main()
{
    int x;
    bool flag = false;
    for(int i = 1; i <= 6; i++)
    {
        scanf("%d",&x);
        ara[x]++;
        if(ara[x] == 4)
        {
            flag = true;
            ara[x] = 0;
        }
    }

    if(flag == false)
    {
        cout << "Alien" << endl;
        return 0;
    }

    int cnt = 0;
    for(int i = 1; i <= 9; i++)
        if(ara[i] != 0) cnt++;

    if(cnt == 1) cout << "Elephant" << endl;
    else cout << "Bear" << endl;

    return 0;
}
