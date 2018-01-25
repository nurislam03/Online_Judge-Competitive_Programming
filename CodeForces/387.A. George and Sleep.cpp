#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int cHr,cMn,dHr,dMn,hr,mn;
    scanf("%d:%d",&cHr,&cMn );
    scanf("%d:%d",&dHr,&dMn );

    hr = cHr - dHr ;
    if( hr < 0 ) hr = 24 + hr ;

    mn = cMn - dMn ;
    if( mn < 0 )
    {
        hr--;
        if( hr < 0 ) hr = 24 + hr ;
        mn = 60 + mn;
    }

    if( hr < 10 ) cout << "0" << hr << ":";
    else cout << hr << ":";

    if( mn < 10 ) cout << "0" << mn << endl;
    else cout << mn << endl;
    return 0;
}
