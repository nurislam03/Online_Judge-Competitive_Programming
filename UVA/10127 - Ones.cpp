/*

Problem 10127 at UVa Online Judge, Ones, is a neat little problem.
We are given an integer and are asked to find its smallest multiple
that consists only of ones. More specifically, we are asked for the
number of ones in that multiple. Interpretation We are given an
integer 0 \le n \le 10000 that is neither divisible by 2 nor 5.
We have to find the smallest multiple of n that consists entirely
of ones. For example, when n = 7, 111111 is the smallest multiple
of 7 that consists only of ones. For this problem, we only need the
digit count of that multiple, which in the case of n = 7 is 6
(because 111111 has 6 digits).

*/


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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //read("input.txt");
    //write("output.txt");

    int n;
    while(scanf("%d",&n) != EOF)
    {
        int tmpNum = 1;
        int digitCnt = 1;

        while(tmpNum % n  != 0)
        {
            digitCnt++;
            tmpNum = (tmpNum*10)+1;
            tmpNum %= n;
        }
        printf("%d\n",digitCnt);
    }

    return 0;
}
