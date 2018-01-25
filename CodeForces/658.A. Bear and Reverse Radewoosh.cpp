#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,cc,p[110],t[110],c[110],tt[110],time = 0;
    cin>>l>>cc;

    for( int i = 0 ; i < l ; i++ )
    {
        int x;
        cin>>x;
        p[i] = x;
    }

    int tr = 0;
    for( int i = 0 ; i < l ; i++ )
    {
        int y;
        cin>>y;
        c[i] = y;

        time = time + y;
        t[i] = time;
    }


    for( int kk = 0 , k = l-1 ; kk < l ; kk++ , k-- )
    {
        tt[kk] = tr + c[k];
        tr = tt[kk];
    }

    long long L = 0,R = 0;
    for( int j = 0 , k = l-1 ; j < l ; j++ , k-- )
    {
       long long ll,rr;
        ll = p[j] - ( cc * t[j] );
        if( ll <= 0 ) L = L + 0;
        else L = L + ll;

        rr = p[k] - ( cc * tt[j] );
        if( rr <= 0 ) R = R + 0;
        else R = R + rr;
    }

    if( L  == R ) cout<<"Tie"<<endl;
    else if( L > R ) cout<<"Limak"<<endl;
    else cout<<"Radewoosh"<<endl;

    return 0;
}
