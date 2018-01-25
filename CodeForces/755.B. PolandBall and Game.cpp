#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>

using namespace std;
#define mod 1000003
#define LL long long
#define ULL unsigned long long

map <string, int> Map1;

int main()
{
    int a,b;
    string x;
    scanf("%d %d",&a,&b);

    for(int i = 1; i <= a; i++)
    {
        cin >> x;
        Map1[x] = 1;
    }

    int cnt = 0;
    for(int i = 1; i <= b; i++)
    {
        cin >> x;
        if(Map1[x] == 1) cnt++;
    }

    int aa,bb;
    if(cnt % 2 != 0)
    {
        aa = (cnt/2)+1;
        bb = (cnt/2);
    }
    else
    {
        aa = (cnt/2);
        bb = cnt/2;
    }


    aa += (a-cnt);
    bb += (b-cnt);

    if(aa > bb) cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}
