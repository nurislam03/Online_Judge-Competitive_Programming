#include<iostream>
using namespace std;

int main()
{
    int a,t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a;
        if(a>10){
            cout<<a-10<<" 10"<<endl;
        }
        else
            cout<<"0 "<<a<<endl;
    }
    return 0;
}
