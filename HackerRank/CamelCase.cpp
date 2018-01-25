#include <iostream>
#include <cmath>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;



int main()
{
    string s;
    cin >> s;

    int cnt = 1;
    for(int i = 0; s[i]; i++)
    {
        char ch = s[i];
        if(isupper(ch)) cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
