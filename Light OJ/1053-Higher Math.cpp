#include<iostream>
using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        if(((a*a)+(b*b))==(c*c) || ((b*b)+(c*c))==(a*a) || ((a*a)+(c*c))==(b*b))
            cout<<"Case "<<i+1<<": "<<"yes"<<endl;
        else
            cout<<"Case "<<i+1<<": "<<"no"<<endl;
    }

    return 0;
}
