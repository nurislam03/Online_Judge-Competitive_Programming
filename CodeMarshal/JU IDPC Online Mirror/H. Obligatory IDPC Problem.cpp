#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,i,j;
    cin>>t;
    for(i=0;i<t;i++){
            long long sum=1,n,p;
            cin>>n;
            p=n*2;
        for(j=1;j<=p;j++){
            sum = sum*j;
        }
        int c=pow(2,n);
        cout<<sum/c<<endl;
    }
    return 0;
}
