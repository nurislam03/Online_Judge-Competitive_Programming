#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>


using namespace std;
#define ULL unsigned long long
#define LL long long
#define sz 1000000



int main()
{
    int n;
    cin >> n;

    string s,ns;
    cin >> s;
    ns = s;


    char ch = '*';
    for(int j = 0; s[j]; j++)
    {
        if(s[j] == 'g')
        {
            if(j-1 >= 0 && j+1 < n)
            {
                if(s[j-1] == 'o' && s[j+1] == 'o')
                {
                    if(ch == '*') ch = '#';
                    else ch = '*';

                    s[j-1] = ch;
                    s[j] = ch;
                    s[j+1] = ch;
                }
                else if(ns[j-1] == 'o' && ns[j+1] == 'o')
                {
                    s[j-1] = ch;
                    s[j] = ch;
                    s[j+1] = ch;

                }
            }
        }
    }

    string res = "";
    for(int i = 0; i < n; )
    {
        if(s[i] == '*' || s[i] == '#')
        {
            res += '*';
            res += '*';
            res += '*';

            char cc = s[i];
            while( i < n && s[i] == cc) i++;
        }
        else
        {
            res += s[i];
            i++;
        }
    }

    cout << res << endl;

    return 0;
}
