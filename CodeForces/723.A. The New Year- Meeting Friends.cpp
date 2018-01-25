#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;
#define sz 1000


int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int res1,res2,res3;

    res1 = abs(a-b) + abs(a-c);
    res2 = abs(b-a) + abs(b-c);
    res3 = abs(c-a) + abs(c-b);

    int res = min(res1, res2);
    res = min(res, res3);
    cout << res << endl;

    return 0;
}
