#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define all(ar) ar.begin(), ar.end()
#define sz 1000
#define LL long long

int digitSum(char s[])
{
    int sum = 0;
    int len = strlen(s);
    for(int i = 0; i < len; i++)
        sum += (s[i] - '0');

    return sum;
}

int degreeCount(int num)
{
    int degree = 0;
    while(num != 9)
    {
        int sum = 0;
        while(num)
        {
            sum += num%10;
            num /= 10;
        }
        degree++;
        num = sum;
    }
    return (degree+1); // extra +1 for remaining 9.
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //read("input.txt");
    //write("output.txt");

    char s[sz+10];
    while(scanf("%s",s))
    {
        int len = strlen(s);
        if(len == 1 && s[0] == '0') break;

        int sum = digitSum(s);
        if(sum % 9 != 0) printf("%s is not a multiple of 9.\n",s);
        else printf("%s is a multiple of 9 and has 9-degree %d.\n",s, degreeCount(sum));
    }


    return 0;
}
