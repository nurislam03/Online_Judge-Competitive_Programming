#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>

using namespace std;
//int rr[100000+10] = {0};
//int bb[100000+10] = {0};

int main()
{
    int n,a,res = 0;
    cin >> n;

    int bestP;
    int worstP;

    int cnt = 0;

    for(int i = 1; i <= n; i++)
    {
        cin >> a;
        if(i == 1)
        {
            bestP = a;
            worstP = a;

            continue;
        }
        if(a > bestP)
        {
            cnt++;
            bestP = a;
        }
        if(a < worstP)
        {
            cnt++;
            worstP = a;
        }
    }


    cout << cnt << endl;

    return 0;
}
