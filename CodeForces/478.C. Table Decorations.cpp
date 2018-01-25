#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
#define ll long long



int main()
{
    ll a,b,c;
    cin >> a >> b >> c;
    ll maxPossibleTable  = (a+b+c)/3;

    vector <ll> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());

    ll res = min(v[2], v[0]+v[1]);

    res = min(res, maxPossibleTable);
    cout << res << endl;

    return 0;
}
