#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long pos = 0,neg = 0,zero = 0;
    long long n,x;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(x == 0) zero++;
        else if(x < 0) neg++;
        else if(x > 0) pos++;
    }
    double posRes = (double) pos / n;
    double negRes = (double) neg / n;
    double zeroRes = (double)zero / n;


    printf("%lf\n%lf\n%lf",posRes,negRes,zeroRes);
    return 0;
}
