#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <cstdlib>
#include <vector>
#include <string>
#include <cstring>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <algorithm>

using namespace std;
#define ll long long


int main()
{
    ll a,b,c;
    cin >> a >> b >> c;

    ll red,green,blue,cnt = 0;
    ll res = a/3 + b/3 + c/3;

    red = a % 3;
    green = b % 3;
    blue = c % 3;

    if(red == 2) cnt++;
    if(green == 2) cnt++;
    if(blue == 2) cnt++;

    res += min(min(red, green), blue);

    if((a && b && c) && cnt == 2) res++;

    cout << res << endl;

    return 0;
}
