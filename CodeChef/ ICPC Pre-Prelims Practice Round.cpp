#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    unsigned long long t,s,e,x1,x2,flag,n;
    cin>>t;
    for(int i=1;i<=t;i++){
            flag=0;
        cin>>s>>e>>n;
        for(int j=1;j<=n;j++){
            cin>>x1>>x2;
            if((x1>s&&x1<e)||(x2>s&&x2<e)){
                flag=1;
            }
            if((x1<s&&s<x2)||(x1<e&&e<x2)){
                flag=1;
            }
        }
        if(flag==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
