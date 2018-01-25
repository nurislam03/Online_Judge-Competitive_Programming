#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;
#define LL long long
#define W I64
#define sz 100
//int ara[sz+10];
vector < int > V;

int main()
{
    int n,x;
    scanf("%d",&n);
    string s;
    cin >> s;

    int groupsCnt = 0,consecutiveCnt = 0;
    for(int i = 0; s[i]; i++)
    {
        if(s[i] == 'B')
            consecutiveCnt++;

        else
        {
            if(consecutiveCnt != 0 )
            {
                V.push_back(consecutiveCnt);
                consecutiveCnt = 0;
                groupsCnt++;
            }
        }
    }


    if(consecutiveCnt != 0)
    {
        V.push_back(consecutiveCnt);
        groupsCnt++;
    }

    cout << groupsCnt << endl;
    for(int i = 0; i < V.size(); i++)
    {
        if(i == 0) printf("%d",V[0]);
        else printf(" %d",V[i]);
    }
    printf("\n");

    return 0;
}
