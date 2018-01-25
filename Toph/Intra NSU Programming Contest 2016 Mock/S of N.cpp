#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        long long  n;
        long long r=0;
        cin>>n;
        long long p=n;
        for(int j=0;j<n;j++,p--){
            r=r+(((3*p)-2)*((3*p)+1)*((3*p)+4));
        }
        cout<<r<<endl;
    }
    return 0;
}

