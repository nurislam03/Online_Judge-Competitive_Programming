#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
using namespace std;

int main()
{
    string s;
    cin >> s;


    long long sum = 0,cnt = 0;

    while(s.size() != 1)
    {
        sum = 0;
        for(int i = 0; s[i]; i++)
        {
            sum += s[i] - '0';
        }
        cnt++;
        stringstream ss;
        ss << sum;
        s = ss.str();
    }
    cout << cnt << endl;
    return 0;
}
