#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>
#include <sstream>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
string s;
char alpha_Value[] = "01230120022455012623010202";


int main()
{
    //read("input.txt");
    //write("output.txt");

    while(cin >> s)
    {
        s[0] -= 'A';
        if(alpha_Value[s[0]] != '0') printf("%c", alpha_Value[s[0]]);

        for(int i=1;  i < s.size(); i++)
        {
            s[i] -= 'A';
            if(alpha_Value[s[i]] != '0' && alpha_Value[s[i]] != alpha_Value[s[i-1]])
                printf("%c", alpha_Value[s[i]]);
        }
        printf("\n");
	}
}
