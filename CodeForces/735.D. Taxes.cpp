#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <string>
#include <algorithm>

using namespace std;


bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    if(isPrime(n) || n == 2)
    {
        cout << 1 << endl;
        return 0;
    }

    else if(n%2 == 0 || isPrime(n-2))
    {
        cout << 2 << endl;
        return 0;
    }

    else cout << 3 << endl;

    return 0;
}
