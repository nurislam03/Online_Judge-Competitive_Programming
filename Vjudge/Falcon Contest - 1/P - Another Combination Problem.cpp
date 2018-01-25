
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,result;
        cin>>n;
        result = (((n*(n+1)*(2*n+1))/6)+((n*(n+1))/2));
        cout<<"Case "<<i+1<<": "<<result<<endl;
    }
    return 0;
}

