#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;


int main()
{
    int n;
    string s;

    while(scanf("%d",&n) != EOF)
    {
        while(n--)
        {
            cin >> s;
            if(s.size() != 8)
                continue;

            if( isdigit(s[0]) && isdigit(s[1]))
            {
                if(s[0] != s[1] || s[0] == '0')
                    continue;
            }
            else continue;


            if(isdigit(s[2]) && isdigit(s[3]))
            {
                if(s[2] == '0' || s[3] == '0')
                    continue;
            }
            else continue;


            if(isalpha(s[4]))
            {
                if(s[4] >= 'A' && s[4] <= 'Z')
                {
                    //noting :)
                }
                else continue;
            }
            else continue;


            if( isdigit(s[5]) && isdigit(s[6]) && isdigit(s[7]))
            {
                if(s[5] == '0' || s[6] == '0' || s[7] == '0')
                    continue;
            }
            else continue;

            cout << s << endl;
        }
    }

    return 0;
}
