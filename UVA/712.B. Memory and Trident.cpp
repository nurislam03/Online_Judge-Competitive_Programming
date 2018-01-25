#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int L = 0,R = 0,U = 0,D = 0;

void Count(char x)
{
         if(x == 'L') L++;
    else if(x == 'R') R++;
    else if(x == 'U') U++;
    else if(x == 'D') D++;
}


int main()
{
    string str;
    cin >> str;

    if(str.size() % 2)
    {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 0; str[i]; i++)
        Count(str[i]);

    int ans = ( abs(L-R) + abs(D-U) ) / 2;

    printf("%d\n", ans);

    return 0;
}
