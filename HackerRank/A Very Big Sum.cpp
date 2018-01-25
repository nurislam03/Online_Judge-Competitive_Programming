#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,x;
    cin >> n;

    unsigned long long sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
    }
    cout << sum << endl;
    return 0;
}
