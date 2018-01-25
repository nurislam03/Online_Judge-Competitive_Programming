#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;


vector < double > v;


int main()
{
    long long n,x;
    while(scanf("%lld",&n) && n != -1)
    {
        long long sum = 0,cnt = 0;
        while(n--)
        {
            cin >> x;
            sum += x;
            if(sum % 100 == 0) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
