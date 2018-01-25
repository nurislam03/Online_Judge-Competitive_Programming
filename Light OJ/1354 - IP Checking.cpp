#include<bits/stdc++.h>
using namespace std;

int DecToBin(int n)
{
    int res = 0,mul = 1,rem;
    while( n > 0 )
    {
        rem = n % 2;
        res = res + ( rem * mul );
        mul = mul * 10;
        n = n / 2;
    }
    return res;
}


int main()
{
    int tt,Dec1,Dec2,Dec3,Dec4,Bin1,Bin2,Bin3,Bin4;
    cin >> tt;

    for( int t = 1 ; t <= tt ; t++ )
    {
        scanf("%d.%d.%d.%d",&Dec1,&Dec2,&Dec3,&Dec4);
        scanf("%d.%d.%d.%d",&Bin1,&Bin2,&Bin3,&Bin4);

        if( DecToBin(Dec1) == Bin1 && DecToBin(Dec2) == Bin2 && DecToBin(Dec3) == Bin3 && DecToBin(Dec4) == Bin4 )
        {
            cout<<"Case "<<t<<": "<<"Yes"<<endl;
        }
        else cout<<"Case "<<t<<": "<<"No"<<endl;
    }
    return 0;
}
