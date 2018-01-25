#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <queue>
using namespace std;

struct Argus
{
    int Contestent,Count;
    int Problem[11];
    int Time[11];
    int TimePenalty;

    bool operator <(const Argus&b) const
    {
        if( Count != b.Count ) return Count > b.Count;
        return TimePenalty > b.TimePenalty;
    }
};


int main()
{
    priority_queue < Argus > Q;

    char vardict;
    int T,Contestent,Prob,Time;
    Argus A;

    cin >> T;
    for( int t = 1; t <= T ; t++ )
    {
        scanf("%d %d %d %c", &Contestent, &prob, &Time, &vardict);

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
