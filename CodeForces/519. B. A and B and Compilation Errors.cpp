#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>
#include <set>
using namespace std;
//int rr[100000+10] = {0};
//int bb[100000+10] = {0};
multiset < long long > q1,q2;


int main()
{
    long long n,a,res = 0;
    scanf("%lld",&n);

    for(int i = 1; i <= n; i++)
    {
        scanf("%lld",&a);
        q1.insert(a);
        q2.insert(a);

    }



    n = n -1;
    for(int i = 1; i <= n; i++)
    {
        scanf("%lld",&a);
        q1.erase(q1.find(a));
    }


    n = n - 1;
    for(int i = 1; i <= n; i++)
    {
        scanf("%lld",&a);
        q2.erase(q2.find(a));

    }



    long long last, first;

    multiset <long long>::iterator tt;
    for(tt = q1.begin(); tt != q1.end(); ++tt)
    {
        first = *tt;
    }

    q2.erase(q2.find(first));

    multiset <long long>::iterator it;
    for(it = q2.begin(); it != q2.end(); ++it)
    {
        last = *it;

    }


    cout << first << endl;
    cout << last << endl;

    return 0;
}
