#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <sstream>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define all(ar) ar.begin(), ar.end()
#define sz 1000
#define LL long long

LL Ackermann_function(LL n)
{
    LL len = 0;
    do
    {
        len++;

        if(n%2 == 0) n /= 2;
        else n = (3*n)+1;
    }while(n != 1);

    return len;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //read("input.txt");
    //write("output.txt");

    LL low,high;
    while(scanf("%lld %lld",&low, &high))
    {
        if(low == 0 && high == 0) break;
        if(low > high) swap(low, high);

        LL num, maxLength = 0;
        for(LL i = low; i <= high; i++)
        {
            LL length = Ackermann_function(i); 
            if(length > maxLength)
            {
                maxLength = length;
                num = i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",low, high, num, maxLength);
    }

    return 0;
}
