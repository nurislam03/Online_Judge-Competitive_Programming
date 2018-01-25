#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    long long n;
    string b;
    cin >> t;

    while(t--)
    {
        cin >> n >> b;
        int one = 0;
        int zero = 0;

        for(int i = 0; i < b.size(); i++)
        {
            if(b[i] == '1') one++;
            else zero++;
        }
        if(one == 0)
        {
            cout << "0" << endl;
            continue;
        }

        if(zero == 0)
        {
            cout << "1" << endl;
        }

        n = n - 1;
        one = one - 1;
        long long tmp,res = 1;

        if( one < zero)
            tmp = one;
        else tmp = zero;
        

        for(int i = 1; i <= tmp; i++)
        {
            res = (res * n) / i;
            n--;
        }
        cout << res << endl;
    }
    return 0;
}
