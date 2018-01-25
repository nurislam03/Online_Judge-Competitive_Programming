#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>

using namespace std;
#define LL long long
#define ULL unsigned long long
#define mod 1000003
#define sz 100


int main()
{
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;

        if(s[a - 1] == s[b - 1])
            cout << 0 <<endl;

        else cout << 1 << endl;


        return 0;
}


/*



int main()
{
    int n, a,b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    if(a == b || s[a-1] == s[b-1])
    {
        cout << "0" << endl;
        return 0;
    }

    a = min(a,b);
    char ch = s[a-1]; //cout << "on ke " << ch << endl;
    b = max(a,b);

    int same,notsame;
    bool flag = false;

    for(int i = a+1; i<= b; i++)
    {
        if((s[i-1] != ch) && (flag == false))
        {
            notsame = i;
            flag = true;
        }
        if(s[i-1] == ch) same = i;
    }


    int tmp1 = abs(a - notsame);
    int tmp2 = abs(same - (same+1));

    int res = min(tmp1, tmp2);
    cout << res << endl;
    return 0;
}


*/
