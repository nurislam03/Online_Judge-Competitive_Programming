#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int t;char *a;
    cin>>t;
    for(int i=1;i<=t;i++){
        scanf("%s",a);
        strupr(a);
        cout<<a<<endl;
    }
    return 0;
}
