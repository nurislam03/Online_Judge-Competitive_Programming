
/*
 ID: nurisla1
 PROG: friday
 LANG: C++
 */

#include <iostream>
#include <string>
#include <map>
#include <fstream>
using namespace std;

map < string, int > Map;
int Month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
string  Days[] = {"0","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};


int IsLeapYear( int Y )
{
    if( ( Y % 4 == 0 ) && ( Y % 100 != 0 || Y % 400 == 0) ) return 1;
    else return -1;
}


int main()
{
    ofstream cout ("friday.out");
    ifstream cin ("friday.in");

    int year,Day13,PresentPositio = 0,d;
    cin >> year; year += 1900;

    for( int i = 1900 ; i < year ; i++ )
    {
        for( int j = 1 ; j <= 12 ; j++ )
        {
            if( ( j == 2 ) && ( IsLeapYear(i) == 1 ) ) d = 29;
            else d = Month[j];

            Day13 = ( PresentPositio + 13 ) % 7 ; if( Day13 == 0 ) Day13 = 7;
            PresentPositio = ( PresentPositio + d ) % 7 ;
            //cout <<"year :"<<i <<"  Month : "<<j<<"  " << Days[Day13] <<"   PPosition : "<<PresentPositio << endl; //
            Map[ Days[Day13] ]++;
        }
    }
    cout <<Map["Saturday"]<<" "<<Map["Sunday"]<<" "<<Map["Monday"]<<" "<<Map["Tuesday"]<<" "<<Map["Wednesday"]<<" "<<Map["Thursday"]<<" "<<Map["Friday"]<<endl;
    return 0;
}
