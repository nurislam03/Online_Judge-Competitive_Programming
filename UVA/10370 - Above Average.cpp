#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >>T;
    for( int t = 1 ; t <= T ; t++ )
    {
        int n, tot = 0;
        cin >> n;
        int a[n+5];
        for( int i = 0 ; i < n ; i++ ) a[i] = 0;

        for( int i = 0 ; i < n ; i++ )
        {
            cin >> a[i];
            tot += a[i];
        }

        int Count  = 0;
        double Avrg = (double) tot / n;

        for( int i = 0 ; i < n ; i++ )
        {
            if( a[i] > Avrg ) Count++;
        }
        double res = ((Count * 100.0)/ n);
        printf("%.3lf%%\n",res);
    }
    return 0;
}
