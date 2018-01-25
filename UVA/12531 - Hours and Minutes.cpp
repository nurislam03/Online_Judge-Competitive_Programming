/*
    1 min = 360 / 60 degree
          = 6 degree.

    The minute hand moves from its current mark to the next
    exactly onceevery minute. The hour hand moves from its
    current mark to the nextexactly once every 12 minutes,
    so,  it advances  ve marks each hour.

    NOTE: that when the minute hand moves,
    the hour hand maynot move; however,
    when the hour hand moves, the minute hand also moves.
    so, this time we missed a particular angle.

*/

#include<iostream>
using namespace std;

int  main()
{
    int angle;
    while(scanf("%d",&angle)==1)
    {
        if(angle%6==0)
            printf("Y\n");

        else printf("N\n");
    }
    return 0;
}
