#include <iostream>
using namespace std;


int main()
{
    long long n,res;
    cin >> n;

    res = (n * (n-1) * (n + 1)) / 6;
    res += n;

    cout << res << endl;
    return 0;
}
