#include<iostream>
using namespace std;

int main()
{
    int a[100],b[100];
    int j=0,i;
    do{
        cin>>a[j]>>b[j];
        j++;
    }while(a[j-1] != b[j-1]);


    for(i=0; i<j; i++){
        if(a[i]>b[i]){
            cout<<"Decrescente"<<endl;
        }
        else if(b[i]>a[i]){
        cout<<"Crescente"<<endl;
        }
    }
    return 0;
}
