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
    int r,c;
    cin >> r >> c;

    string s1 = "";
    string s2 = "";
    string s3 = "";

    for(int i = 1; i <= c; i++)
    {
        s1 += '#';

        if(i == c) s2 += '#';
        else s2 += '.';

        if(i == 1) s3 += '#';
        else s3 += '.';
    }

    bool flag = true;
    for(int i = 1; i <= r; ++i)
    {
        if(i%2 != 0) cout << s1 << endl;
        else
        {
            if(flag == true)
            {
                cout << s2 << endl;
                flag = false;
            }
            else
            {
                cout << s3 << endl;
                flag = true;
            }
        }
    }
    return 0;
}
