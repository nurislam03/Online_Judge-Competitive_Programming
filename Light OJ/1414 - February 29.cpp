//Formula for finding Number of leap years in any range :
// (((Year2/4)-(Year2/100)+(Year2/400)) - ((Year1/4)-(Year1/100)+(Year1/400)));

#include<bits/stdc++.h>
using namespace std;
int d,y,D,Y,NumberOfLeapYears;

int leapYear(int i){
    if((i % 4 == 0) && (i % 100 != 0 || i % 400 == 0))
    return 1;
}

int main()
{

    //freopen("input,txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    string a,b;
    scanf("%d",&t);

    for( int i = 1 ; i <= t ; i++ )
    {
        cin >> a;
        scanf("%d,%d",&d,&y);
        cin >> b;
        scanf("%d,%d",&D,&Y);

        if(( leapYear(y) == 1) && ((a == "January" || a == "February" && d <= 29))) y--; //Because this year(y) also inclusive.
        if(b == "January" || (b == "February" && D < 29)) Y--; //which one is leap year but given date is less than 29 february.

        NumberOfLeapYears = (((Y/4)-(Y/100)+(Y/400)) - ((y/4)-(y/100)+(y/400)));

        printf("Case %d: %d\n",i,NumberOfLeapYears);
    }
    return 0;
}
