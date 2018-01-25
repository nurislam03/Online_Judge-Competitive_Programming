#include<stdio.h>

int main()
{
    int n,i,count1=0.0,count2=0.0,count3=0.0;
    double x,y,z;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

        if(arr[i]>0){
            count1=count1+1;
        }
        if(arr[i]<0){
            count2=count2+1;
        }
        if(arr[i]==0){
            count3=count3+1;
        }



    }
    x=count1/arr[n];
    y=count2/arr[n];
    z=count3/arr[n];

    printf("%0.3 f%0.3f %0.3f\n",x,y,z);
    return 0;
}

