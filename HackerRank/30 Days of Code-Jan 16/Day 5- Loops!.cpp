#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int t,a,b,n,r=0,total=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>n;
        for(int j=0;j<n;j++){
            r=pow(2,j)*b;

            if(j == 0){
                int q=a+r;
                total = q;
                cout<<q<<" ";
            }
            else{
                    total = total+r;
                cout<<total<<" ";
            }
         }
            cout<<endl;
    }
    return 0;
}
