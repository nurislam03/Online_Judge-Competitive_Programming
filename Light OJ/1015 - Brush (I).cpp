#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a,t,s;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s;
        int sum =0;
        for(int j=0;j<s;j++){
            cin>>a;
            if(a >=0){
            sum = sum+a;
            }
        }
        cout<<"Case "<<i+1<<": "<<sum<<endl;
    }
    return 0;
}
