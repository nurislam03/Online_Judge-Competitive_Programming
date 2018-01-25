
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <climits>
#include <ctime>
#include <queue>
#include <stack>
#include <algorithm>
#include <list>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <deque>
#include <complex>
#include <string>
#include <iomanip>
#include <sstream>
#include <bitset>
#include <valarray>
#include <iterator>
#include <assert.h>

using namespace std;
typedef pair < int, int > pii;
vector < pii > Positive,Negative;

int main()
{
    int n,x,v;
    cin >> n;

    for(int i = 1; i <= n; ++i)
    {
        cin >> x >> v;
        if(x > 0) Positive.push_back(make_pair(x,v));
        else Negative.push_back(make_pair(abs(x),v));
    }

    sort(Positive.begin(), Positive.end());
    sort(Negative.begin(), Negative.end());

    int sz = min(Positive.size(), Negative.size());

    long long ans = 0;
    for(int i = 0; i < sz; ++i)
    {
        ans += (Positive[i].second + Negative[i].second);
    }

    if(Positive.size() > Negative.size())
        ans += Positive[sz].second;

    if(Negative.size() > Positive.size())
        ans += Negative[sz].second;

    cout << ans << endl;

    return 0;
}


/*

//  anothe solution.

int main()
{
    int n,x,v;
    cin >> n;

    long long ans = 0;
    for(int i = 1; i <= n; ++i)
    {
        cin >> x >> v;

        ans += v;
        if(x > 0) Positive.push_back(make_pair(x,v));
        else Negative.push_back(make_pair(abs(x),v));
    }
    int MinSZ = min(Positive.size(), Negative.size());


    if(Positive.size() > Negative.size())
    {
        sort(Positive.begin(), Positive.end());
        for(int i = Positive.size() - 1; i > MinSZ ; --i)
        {
            ans -= Positive[i].second;
        }
    }

    if(Negative.size() > Positive.size())
    {
        sort(Negative.begin(), Negative.end());
        for(int i = Negative.size() - 1; i > MinSZ ; --i)
        {
            ans -= Negative[i].second;
        }
    }

    cout << ans << endl;

    return 0;
}
*/
