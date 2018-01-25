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

map < string, int > M;
string ans,x;

int main()
{
    int n,tmp = 1000000,t;
    cin >> t;

    for(int T = 1; T <= t; T++)
    {
        cin >> n;
        M.clear();
        bool flag = false;

        for(int i = 1; i <= n; i++)
        {
            cin >> x;

            if(M[x] != 0)
            {

                if((i - M[x] <= tmp))
                {
                    ans = x;
                    M[x] = i;
                }
                flag = true;
            }
            else M[x] = i;
        }

        if(flag == false)
            cout << "Case " << T << ": " << x << endl;

        else
            cout << "Case " << T << ": " << ans << endl;
    }

    return 0;
}
