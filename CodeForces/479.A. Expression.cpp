#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>


using namespace std;
#define LL long long


int main()
{
    int a,b,c,sum;
    cin >> a >> b >> c;

    sum = max(a+b+c, a*b*c);
    sum = max(sum, max(a+b*c, a*b+c));
    sum = max(sum,max((a+b)*c, a*(b+c)));

    cout << sum << endl;

    return 0;
}
