#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

string eraseSpace( string a )
{
    string b;
    for( int i = 0; i < a.size(); i++ )
        if( a[i] != ' ' ) b += a[i];

    return b;
}


int main()
{
    int T;
    cin >> T;
    cin.ignore();

    for( int t = 1; t <= T; t++ )
    {
        string teamOutput,judgeOutput;
        getline(cin, teamOutput);
        getline(cin, judgeOutput);

        if( teamOutput == judgeOutput )
            printf("Case %d: yes\n",t);

        else
        {
            teamOutput  = eraseSpace(teamOutput);
            //judgeOutput = eraseSpace(judgeOutput);

            if( teamOutput == judgeOutput )
                printf("Case %d: Output Format Error\n",t);

            else
                printf("Case %d: Wrong Answer\n",t);
        }
    }
    return 0;
}
