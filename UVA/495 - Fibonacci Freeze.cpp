/*

Status : unsolved.
note: Big Number.

*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
unsigned long long fib[5000+10];


void Fibonacchi()
{
    fib[0] = 1;
    fib[1] = 1;

    for(int i = 2; i <=5000; i++)
        fib[i] = (fib[i-1]+fib[i-2]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //read("input.txt");
    //write("output.txt");

    int n;
    Fibonacchi();
    while(scanf("%d",&n) != EOF)
    {
        printf("The Fibonacci number for %d is %llu\n", n, fib[n-1]);
    }

    return 0;
}
