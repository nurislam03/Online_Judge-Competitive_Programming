/*
     1hr == (360 / 12) degree
         == 30 degree

    1min == (360 / 60) degree
         == 6 degree


// Note : relation between hour angle and minute angle
    30 deg in hour ==


direct formula : angle between two hand in a analog clock
 angle = 0.5 * (60 * h + m);
https://en.wikipedia.org/wiki/Clock_angle_problem
*/

#include <iostream>
using namespace std;

int main()
{
    double hr,min;

    while(scanf("%lf:%lf",&hr,&min))
    {
        if(!hr && !min)
            break;

        double hourAngle = (hr * 30) + (min / 2);
        double minuteAngle = (min * 6);

        double angleDiff = hourAngle - minuteAngle;

        if(angleDiff < 0)
            angleDiff *= -1;

        if(angleDiff > 180)
            angleDiff = (360 - angleDiff);

        printf("%.3lf\n",angleDiff);
    }

    return 0;
}
