#include <iostream>
#include <cstdio>
#include <sstream>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <climits>
#include <iomanip>
#include <cassert>
#include <algorithm>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <fstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <iterator>
#include <functional>
//#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,k,n;
    scanf("%d",&t);

    for(int T= 1; T <= t; T++)
    {
        cin >> k >> n;
        printf("Case %d:\n",T);

        long long owner,rel,poor,neighbor,tot;

        if(k == 0)
        {
            poor = n / 3;
            owner = (poor*2) / 3;
            rel = owner;
            neighbor = rel;

            printf("%lld\n",poor);
            printf("%lld\n",rel+neighbor);
            printf("%lld\n",owner);
        }
        else
        {
            poor = (n*3)/2;
            rel = n;
            neighbor = n;
            tot = poor * 3;

            printf("%lld\n",poor);
            printf("%lld\n",rel+neighbor);
            printf("%lld\n",tot);
        }
    }

    return 0;
}
