
// unsolved problem

#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char name[100];
    char name2[100];
    char num[100];

    for(int i=0;i<n;i++){
        scanf("%s",name[i]);
        scanf("%s",num[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%s",name2[i]);
    }
    for(int i=0;i<n;i++){
        if(name[i] == name2[i]){
            cout<<name[i]<<"="<<num[i]<<endl;
        }
        else
            cout<<"Not found"<<endl;
    }

    return 0;
}
