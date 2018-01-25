#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int f=1;
    for(int i=n;i>=1;i--) f=f*i;
    return f;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int a,b,c,sum,result,r1,r2,x,y,z;
        cin>>a>>b>>c;
        sum = (a+b+c);
        x=factorial(a); y=factorial(b); z=factorial(c);
        r1=factorial(sum);
        r2=(x*y*z);
        result =(r1/r2);
        cout<<"Case #"<<i<<": "<<result<<endl;
    }
    return 0;
}
