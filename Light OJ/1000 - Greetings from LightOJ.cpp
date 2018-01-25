#include<iostream>
using namespace std;

int main()
{
    int a[130],b[130],t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<t;i++){
        cout<<"Case "<<i+1<<": "<<a[i]+b[i]<<endl;
    }
    return 0;
}
