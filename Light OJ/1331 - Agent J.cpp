#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)

int main()
{
    int tt; cin >> tt;
    double r1,r2,r3,a,b,c,s;

    for( int t = 1 ; t <= tt ; t++ )
    {
        cin >> r1 >> r2 >> r3;

        a = r1 + r2;
        b = r1 + r3;
        c = r2 + r3;

        s = ( a + b + c ) / 2.0 ;

        double S1,S2,S3,TriangleArea;
        TriangleArea = sqrt( (s*(s-a)*(s-b)*(s-c)) );

        S1 = acos ((a*a+b*b-c*c)/(2*a*b)) * r1 ;
        S2 = acos ((a*a+c*c-b*b)/(2*a*c)) * r2 ;
        S3 = acos ((b*b+c*c-a*a)/(2*b*c)) * r3 ;

        double ArcArea1,ArcArea2,ArcArea3,TotalArcArea,res;
        ArcArea1 = (pi*r1*r1*S1)/(2*pi*r1);
        ArcArea2 = (pi*r2*r2*S2)/(2*pi*r2);
        ArcArea3 = (pi*r3*r3*S3)/(2*pi*r3);

        TotalArcArea = ArcArea1 + ArcArea2 + ArcArea3;
        res = TriangleArea - TotalArcArea;

        printf("Case %d: %.7lf\n",t,res);
    }
    return 0;
}
