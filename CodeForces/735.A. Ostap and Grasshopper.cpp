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
#define ULL unsigned long long



int main()
{
    int n,k;
    scanf("%d %d",&n,&k);

    string s;
    cin >> s;
    int gg,tt;
    bool ans = false;

    for(int i = 0; s[i]; i++)
    {
        if(s[i] == 'G')
        {
            gg = i;
            while(gg < n)
            {
                gg += k;
                if(gg >= n) break;

                if(s[gg] == 'T')
                {
                    cout << "YES" << endl;
                    return 0;
                }
                if(s[gg] == '#') break;
            }

        }
        else if(s[i] == 'T')
        {
            tt = i;
            while(tt < n)
            {
                tt += k;
                if(tt >= n) break;

                if(s[tt] == 'G')
                {
                    cout << "YES" << endl;
                    return 0;
                }
                if(s[tt] == '#') break;
            }

        }
    }

    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
