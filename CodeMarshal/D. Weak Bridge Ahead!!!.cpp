
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
    int t,n,m;
    scanf("%d",&t);

    for(int T = 1; T <= t; T++)
    {
        cin >> n >> m;

        long long done1,done2,k1;
        unsigned long long sum = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> k1;
            sum += k1;

            done1 = k1;
        }

        for(int i = 0; i < m; i++)
        {
            cin >> k1;
            sum += k1;

            done2 = k1;
        }

        sum -= max(done1,done2);
        printf("Case %d: %llu\n",T,sum);

    }

    return 0;
}
