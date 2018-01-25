//NSU Joint Mock Programming Training 1 (For Beginner)
//link : http://acm.hust.edu.cn/vjudge/contest/view.action?cid=113769#problem/B

#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    double x,Sum = 0,Average;
    for( int i = 1 ; i <= 12 ; i++ )
    {
        scanf("%lf",&x);
        Sum += x;
    }
    Average = Sum /12;
    printf("$%.2lf",Average);
    return 0;
}
