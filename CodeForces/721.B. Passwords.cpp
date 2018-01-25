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

vector < int > V;


int penaltyTime(int n, int k)
{
    return (n/k) * 5;
}



int main()
{
    int n,k;
    scanf("%d %d",&n, &k);
    string s;

    for(int i = 1; i <= n; i++)
    {
        cin >> s;
        int len = s.size();
        V.push_back(len);
    }
    sort(V.begin(), V.end());


    cin >> s;
    int sz = s.size();

    int cnt = 0;
    for(int i = 0; i < V.size(); i++)
    {
        if(V[i] != sz) cnt++;
        if(V[i] == sz) break;
    }
    int BestTime = penaltyTime(cnt, k) + (cnt + 1);



    cnt = 0;
    for(int i = 0; i < V.size(); i++)
    {
        if(V[i] <= sz) cnt++;
        else break;
    }
    int worseTime = penaltyTime(cnt-1, k) + cnt;


    cout << BestTime << " " << worseTime << endl;

    return 0;
}
