#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long T,W,Temp,N,M;
    cin>>T;

    for(int i = 1 ; i <= T ; i++ )
    {
        cin>>W;
        if( W % 2 != 0 )
        {
            cout<<"Case "<<i<<": "<<"Impossible"<<endl;
            continue;
        }

        Temp = W;
        while( Temp % 2 == 0 ) Temp = Temp / 2;

        N = Temp;
        M = W / N;
        cout<<"Case "<<i<<": "<<N<<" "<<M<<endl;
     }

    return 0;
}
