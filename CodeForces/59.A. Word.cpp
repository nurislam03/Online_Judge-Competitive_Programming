#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;


int main()
{
    int UpCnt = 0,LoCnt = 0;
    string line, Low = "",Upp = "";

    cin >> line;

    for(int i = 0; line[i]; ++i)
    {
        char ch = line[i];

        if(isupper(ch)) UpCnt++;
        else LoCnt++;

        ch = toupper(ch);
        Upp += ch;

        ch = tolower(ch);
        Low += ch;
    }


    if(UpCnt > LoCnt) cout << Upp << endl;
    else cout << Low << endl;

    return 0;
}
