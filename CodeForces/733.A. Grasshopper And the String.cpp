#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;
#define LL long long
#define ULL unsigned long long
#define W I64
#define sz 100
//int ara[sz+10];
//vector < int > V;

bool Vow(char ch)
{
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y')
        return true;
    return false;
}


int main()
{
    int t,n,x;
    string s;
    cin >> s;

    int cnt = 1,Max = 1;
    for(int i = 0; s[i]; i++)
    {
        bool tmp = Vow(s[i]);

        if(tmp) cnt = 1;
        else cnt++;

        Max = max(Max, cnt);
    }

    cout << Max << endl;
    return 0;
}
