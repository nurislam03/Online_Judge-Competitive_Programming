#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
    string x;
    int T;
    cin >> T;
    for( int i = 1 ; i <= T ; i++)
    {
        cin >> x;
        char k = x[0];
        int temp1 = 1,temp2 = 0;
        for( int t = 1 ; t < x.size() ; t++ )
        {
            if(x[t] == k ) temp1++;
            else temp2++;
        }
        cout << min(temp1,temp2) << endl;
    }
    return 0;
}
