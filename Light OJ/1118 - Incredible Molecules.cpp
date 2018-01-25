/*
Topic : Basic Geometry.
Given center co-ordinate and radius of two circle.
Find intersected (common) area of two circles.
*/

#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;
#define LL long long
#define SQ(x) ((x)*(x))
const double pi = 2 * acos ( 0.0 );


struct Point
{
    double x, y;
    Point(){}
    Point(double a, double b){
        x = a, y = b;
    }
};


double dist(Point P, Point Q) {
    double res = (P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y);
    return sqrt(res);
}


 /// Find intersected area of two circles
 /// Parameters: 1st circle center, radius, 2nd circle center, radius
 double circleCircleIntersectionArea(Point P0, double R0, Point P1, double R1)
 {
     double d = dist(P0, P1);

     if(R0 + R1 <= d) return 0;
     if(R0 >= R1 && (R0 - R1) >= d) return pi * SQ(R1);
     if(R0 <= R1 && (R1 - R0) >= d) return pi * SQ(R0);

     double CAD = 2.0 * acos((SQ(R0) + SQ(d) - SQ(R1)) / (2.0 * R0 * d));
     double CBD = 2.0 * acos((SQ(R1) + SQ(d) - SQ(R0)) / (2.0 * R1 * d));

     //double A1 = (0.5 * SQ(R0) * CAD) - (0.5 * SQ(R0) * sin(CAD));
     double A1 = 0.5 * SQ(R0) * (CAD - sin(CAD));
     //double A2 = (0.5 * SQ(R1) * CBD) - (0.5 * SQ(R1) * sin(CBD));
     double A2 = 0.5 * SQ(R1) * (CBD - sin(CBD));
     return (A1 + A2);
 }


int main()
{
	int tCase;
	scanf("%d",&tCase);
	for(int T= 1; T <= tCase; ++T)
	{
		double x1, y1, r1, x2, y2, r2;
		scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&r1,&x2,&y2,&r2);

		double ans = circleCircleIntersectionArea(Point(x1, y1), r1, Point(x2, y2), r2);
		printf("Case %d: %lf\n",T, ans);
	}

	return 0;
}
