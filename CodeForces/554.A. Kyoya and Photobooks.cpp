#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int len,res;
    len = x.size();
    res = ( len + 1) * 26;
    res -= len;
    cout << res << endl;
    return 0;
}
