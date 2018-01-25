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


int main()
{
    int tCase;
    string line;
    scanf("%d",&tCase);
    //cin.ignore();
    getchar();

    while(tCase--)
    {
        //getchar();
        cin.ignore();
        int idx[5000], n = 1, i = 1;
        string x[5000];

        stringstream sin;
        getline(cin, line);
        sin << line;
        while(sin >> idx[n]) n++;

        sin.clear();
        getline(cin, line);
        sin << line;
        while(sin >> x[idx[i]]) i++;

        for(i = 1; i < n; i++)
            cout << x[i] << endl;
        if(tCase) puts("");
    }

    return 0;
}
