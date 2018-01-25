#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>

using namespace std;
map < string, int > Map1,Map2;
map < string, int > :: iterator it;

string name[1000+10];
int score[1000+10];



int main()
{
    int n,x,Max = -1000000000;
    cin >> n;

    string s,ans;
    for(int i = 1; i <= n; i++)
    {
        cin >> s >> x;
        name[i] = s;
        score[i] = x;
        Map1[s] += x;
    }

    Max = -100000000;
    for(it = Map1.begin(); it != Map1.end(); ++it)
    {
        int tmp = it->second;
        Max = max(Max, tmp);
    }

    for(int i = 1; i <= n; i++)
    {
        s = name[i];
        x = score[i];

        Map2[s] += x;
        if(Map2[s] >= Max && Max <= Map1[s])
        {
            ans = s;
            break;
        }
    }

    cout << ans << endl;
}
