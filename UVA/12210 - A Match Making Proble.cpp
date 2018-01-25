
#include<bits/stdc++.h>
using namespace std;
int x[10010],y[10010]; // if i want i can ignor this steps

int main()
{
    int b,p,res,k,l,c = 0;
    while(1)
    {
        int Min = 100;
        cin >> b >> p;
        if( b == 0 && p == 0 ) return 0;
        else if( b <= p ) cout<<"Case "<<++c<<": 0"<<endl;

            for( int i = 1 ; i <= b ; i++ )
            {
                cin>>k;
                x[i] = k; //if i want i can ignor this steps
                if( k < Min ) Min = k;
            }
            for( int i = 1 ; i <= p ; i++ ) //if i want i can ignor this loop
            {
                cin>>l;
                y[i] = l;
            }
          if ( b > p ) cout<<"Case "<<++c<<": "<<b-p<<" "<<Min<<endl;
    }
    return 0;
}

