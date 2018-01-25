
//
//  Problem Name : 10110 - Light, more light
//  Online judge : UVa
//  Tag          : Number Theory
//  Created by Nur Islam.
//

/*
    Idea:
    x = sqrt(n);
    tot_x = x*x;

    if(tot_x == n) then n has even number of divisor
    if(tot_x != n) then n has odd number of divisor
*/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define all(ar) ar.begin(), ar.end()


int main()
{
    long long n;
    while(scanf("%lld",&n) && n)
    {
        if(floor(sqrt(n)) == ceil(sqrt(n)))
            printf("yes\n");
        else printf("no\n");
    }

    return 0;
}
