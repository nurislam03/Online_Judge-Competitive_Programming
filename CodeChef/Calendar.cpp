#include <bits/stdc++.h>
using namespace std;

int d[] = {00,31,28,31,30,31,30,31,31,30,31,30,31,00};
string m[] = {"AAA","JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC","OOO"};


int LY(int yr)
{
    if((yr % 4 == 0) && ( (yr%100 != 0) || (yr % 400 == 0) ) )
        return 1;
    else return 0;
}


int main()
{

    int t,tc = 0;
    cin >> t;

    while(t--)
    {
        string str;
        int day = 0,mon,yr = 0;

        cin >> str;

        int k = 0,tmp = 0;
        tmp = (str[10] - '0');
        yr += (tmp * 1);
        tmp = (str[9] - '0');
        yr += (tmp * 10);
        tmp = (str[8] - '0');
        yr += (tmp * 100);
        tmp = (str[7] - '0');
        yr += (tmp * 1000);



        string ss = "";
        for(int i = 3; i <= 5; i++)
        {
            ss += str[i];
        }

        for(int i = 1; i <= 12; i++)
        {
            if(m[i] == ss)
            {
                mon = i;
                break;
            }
        }

        k = 0,tmp = 0;
        tmp = (str[1] - '0');
        day += (tmp * 1);
        tmp = (str[0] - '0');
        day += (tmp * 10);


        int cnt = 0;
        int tmpp = LY(yr);

        for(int i = 1; i < mon; i++)
        {
            if(i == 2 && tmpp == 1)
                cnt += 29;

            else cnt += d[i];
        }

        cnt += day;

        if(cnt >= 1 && cnt <= 300)
            cout << "Case " << ++tc << ": " << cnt <<" Hundreds" << endl;
        else if( cnt > 300 && cnt <= 360 )
             cout << "Case " << ++tc << ": " << cnt % 300 <<" Tens" << endl;
        else
            cout << "Case " << ++tc << ": " << cnt % 360 <<" Ones" << endl;
        }

    return 0;
}
