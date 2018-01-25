#include<bits/stdc++.h>
using namespace std;

long long divide(long long a,long long b){
    long long c = a/b;

    if((b*c)<a)
       c++;

    return c;
}

int main()
{
    long long n,m,a,r1,r2;
    cin>>n>>m>>a;

    r1=divide(m,a);
    r2=divide(n,a);

    cout<<r1*r2<<endl;
    return 0;
}

