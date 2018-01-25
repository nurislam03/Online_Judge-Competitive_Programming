#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <queue>
using namespace std;

struct Argus
{
    int ID, Period,RepeatTime;
    bool operator <(const Argus&b) const
    {
        if( RepeatTime != b.RepeatTime ) return RepeatTime > b.RepeatTime;
        return ID > b.ID;
    }
};


int main()
{
    priority_queue < Argus > Q;

    char str[50];
    int id,period;
    Argus A;

    while(scanf("%s", str))
    {
        if(str[0] == '#') break;

        scanf("%d %d", &id, &period);
        A.ID = id, A.Period = period, A.RepeatTime = period;
        Q.push(A);
    }

    int k;
    scanf("%d", &k);
    while(k--)
    {
        A = Q.top();
        Q.pop();

        printf("%d\n", A.ID);

        A.RepeatTime += A.Period;
        Q.push(A);
    }
    return 0;
}
