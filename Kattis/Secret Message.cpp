#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;
#define sz 10000
vector < string > V;



int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        string s;
        cin >> s;
        int len = s.size();

        long long tt = 1;
        while(tt*tt < len) tt++;
        if(tt*tt < len) tt++;

        int row = tt, col = tt;

        int pos = 0;
        char cc;

        V.clear();

        string kk = "";
        int cnt = 0;
        while(pos < len )
        {
            for(int i = 0; i < row; i++)
            {
                if(pos < len) cc = s[pos++];
                else cc = '*';

                kk += cc;
            }
            V.push_back(kk);
            cnt++;
            kk = "";
        }


        kk = "";
        string ans = "";
        char ccc;

        for(int i = 0; i < cnt; i++)
        {
            for(int j = (cnt-1); j >= 0; j--)
            {
                if( V[j][i] == '*') continue;
                else ccc = V[j][i];
                kk += ccc;
            }
            ans += kk;
            kk = "";
        }

        cout << ans << endl;

    }

    return 0;
}
