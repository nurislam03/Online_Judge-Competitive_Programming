#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,a,i,j;
    cin>>t;
    for(i=1;i<=t;i++){
        long long ini = 0;
        cin>>n;
        for(j=1;j<=n;j++){
            cin>>a;
            long long result = (a*(n-(j-1)));
            if(result>=ini) ini = result;
        }
        cout<<"Case "<<i<<": "<<ini<<endl;
    }
    return 0;
}
