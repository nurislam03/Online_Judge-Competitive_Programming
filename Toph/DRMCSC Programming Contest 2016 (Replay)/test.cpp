#include<bits/stdc++.h>
using namespace std;

int LeapYear( int year )
{
	if ( (year % 4 == 0 && year % 100 != 0) || ( year % 400 == 0))
		return 1;
	else
		return 0;
}


int main()
{
    long long t;
    cin>>t;
    for( int i=1; i<=t; i++ ){
        int d,m,y;
        cin>>d>>m>>y;
        string a[30] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
        if( m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12 && d<=30 ){
            d++;m--;//bcz,index zero;
        }

        else if( m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12 && d==31 ){
            d=1; //First index is zero
            if(m == 12 ) y++;
        }

        else if( m==4 || m==6 || m==9 || m==11 && d <= 29 ){
            d++;m--;
        }

        else if( m==4 || m==6 || m==9 || m==11 && d == 30 ){
            d=1;
        }

        else if( m==2 && d <=27 ){
            d++;m--;
        }

        else if( m == 2 && d == 28 ){
            int c = LeapYear(y);
            if(c == 1){
                d++;m--;
            }
            else
                d = 1;
        }

        if(d<=10) cout<<"0"<<d<<" "<<a[m]<<", "<<y<<endl;
        //if(d<=10) printf("0%d %s %d\n",d,a[m],y);
        else cout<<d<<" "<<a[m]<<", "<<y<<endl;
        //else printf("%d %s %d\n",d,a[m],y);
    }
    return 0;
}
