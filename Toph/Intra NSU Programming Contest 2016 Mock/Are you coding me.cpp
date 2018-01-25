#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string a;
        cin>>a;
        a=string(a.rbegin(),a.rend());
        cout<<a<<endl;
    }
    return 0;
}
