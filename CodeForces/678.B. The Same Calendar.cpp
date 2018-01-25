#include <iostream>
#include<cstdio>
#include<cmath>
#include <algorithm>
using namespace std;


int isLeapYear(int year)
{
    if( ( year % 4 == 0 ) && ( year % 100 != 0 || year % 400 == 0 ) )
        return 1;
    return 0;
}

int main()
{
    int y;
    scanf("%d",&y);

    int ans = y+1;
    int Remainder = (365 + isLeapYear(ans) )%7;

    while(isLeapYear(ans) != isLeapYear(y) || Remainder != 0)
        Remainder = (Remainder + 365 + isLeapYear(++ans)) %7;

    printf("%d\n",ans);
}
