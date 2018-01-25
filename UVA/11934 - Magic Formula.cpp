#include<iostream>
using namespace std;

long long quad(long a,long b,long c,long x)
{
    return a * (x * x) + (b * x) + c;
}

int main()
{
    int a,b,c,d,l;
    while(1)
    {
        cin >> a >> b >> c >> d >> l;
        if(!a && !b && !c && !d && !l) break;
        int cnt = 0;
        for(int i=0;i<=l;i++)
        {
            long long k = quad(a,b,c,i);
            if( k % d == 0 ) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
