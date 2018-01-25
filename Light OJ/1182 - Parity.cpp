#include<iostream>
using namespace std;

int main()
{
    int tt;
    cin>>tt;

    for( int t = 1 ; t <= tt ; t++ )
    {
       long long n,NumOfOnes = 0;
       cin >> n;

       while( n > 0 )
       {
            if( n % 2 == 1 ) NumOfOnes++;
            n /= 2;
       }
       if( NumOfOnes % 2== 0) cout<<"Case "<<t<<": "<<"even"<<endl;
       else cout<<"Case "<<t<<": "<<"odd"<<endl;
    }
    return 0;
}
