// Formula : http://www.mathsteacher.com.au/year8/ch12_area/04_trap/trap.htm
// Formula : http://www.murderousmaths.co.uk/books/trap.htm
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double a,b,c,d,base,height,s,Triangle,Trapezium;
    cin>>t;

    for( int i = 1 ; i <= t ; i++ )
    {
        cin >> a >> b >> c >> d;
        base = fabs( a - c );
        s = ( base + b + d ) / 2;

        Triangle = sqrt( s * ( s - base ) * ( s - b ) * ( s - d ) );
        height = ( Triangle * 2 ) / base;
        Trapezium =( ( ( a + c ) /2 ) * height );

        printf("Case %d: %lf\n",i,Trapezium );
    }
    return 0;
}
