#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;
#define ULL unsigned long long
#define LL long long
#define sz 1000



int main()
{
    int n;
    cin >> n;


    cout << n/2 << endl;
    while(n>3)
    {
        cout << "2 ";
        n -= 2;
    }
    cout << n << endl;

    return 0;
}
