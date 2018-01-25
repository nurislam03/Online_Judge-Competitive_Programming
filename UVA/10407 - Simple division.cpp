#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;


int gcd(int a , int b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}


int main()
{
    int num;
    while(scanf("%d", &num) && num)
    {
        int next, GCD = 0;
        while(scanf("%d", &next) && next)
            GCD = gcd(GCD, abs(next-num));

        printf("%d\n", GCD);
    }
    return 0;
}
