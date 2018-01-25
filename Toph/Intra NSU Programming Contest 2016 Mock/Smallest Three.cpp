#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cin>>s;
    if(s<3) return 0;

        int i,j;
        long long a[3],t;
        for (i=0; i<3; i++){
            cin>>a[i];
        }
        for (i=0; i<3; i++){
            for (j=0; j<2; j++){
                if(a[j]>a[j+1]){
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
        for (i=0; i<3; i++){
            cout<<a[i]<<" ";
        }


    for(int p=4; p<=s; p++){
        long long k;
        if(k<a[2])

    }
    return 0;
}

