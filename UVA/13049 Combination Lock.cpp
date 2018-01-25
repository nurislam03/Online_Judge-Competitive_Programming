
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        char a[100],b[110];
         scanf("%s",a);
         scanf("%s",b);

        int r1=0,r2 = 0;
        for(int j=0;j<n;j++){
            int x = abs(a[j] - b[j]);

            if(x <= 5) r1=r1+x;
            else if(x >= 6 ) r2=r2+(10-x);
        }
        int r = r1+r2;
        cout<<"Case "<<i+1<<": "<<r<<endl;
    }
    return 0;
}
