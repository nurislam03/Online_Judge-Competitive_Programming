#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
vector<string>V;

int main()
{
    int n;
    scanf("%d",&n);
    cin.ignore();

    bool flag = false;
    string s;
    while(n--)
    {
        getline(cin,s);

        if( flag == false )
        {
            if( s[0] == 'O' && s[1] == 'O' && flag == false)
            {
                flag = true;
                s[0] = '+';
                s[1] = '+';
            }
            else if(s[3] == 'O' && s[4] == 'O' && flag == false)
            {
                flag = true;
                s[3] = '+';
                s[4] = '+';
            }
        }
        V.push_back(s);
    }
    if( flag )
    {
        cout << "YES" << endl;
        for( int i = 0 ; i < V.size(); i++ )
            cout << V[i] << endl;
    }
    else cout << "NO" << endl;
    return 0;
}
