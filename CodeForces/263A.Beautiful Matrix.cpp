#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6][6],result,i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
               result = (abs(3-i)+abs(3-j));
            }
        }
    }
    cout<<result<<endl;
    return 0;
}
