#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
    int n,c,x,prevNum,cnt = 1;
    cin >> n >> c;

    for(int i = 1; i <= n; i++)
    {
        scanf("%d",&x);
        if(i == 1)
            prevNum = x;
        else
        {
            if(x - prevNum <= c)
                cnt++;
            else
                cnt = 1;

            prevNum = x;
        }

    }
    cout << cnt << endl;

    return 0;
}
