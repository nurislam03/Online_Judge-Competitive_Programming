#include<stdio.h>
int main()
{
    int i=0,n,t;
    int arr[25]={};
    scanf("%d",&n);

    for(t=0;t<n;t++){
        scanf("%d",&arr[i]);
        i++;
    }

    for(i=0;i<n;i++){

        if(arr[i]>=80){
            printf("Case %d: A+\n",i+1);
             continue;
        }
        if(arr[i]>=75 && arr[i]<=79){
           printf("Case %d: A\n",i+1);
             continue;
        }
        if(arr[i]>=70 && arr[i]<=74){
            printf("Case %d: A-\n",i+1);
              continue;
        }

        if(arr[i]>=65 && arr[i]<=69){
            printf("Case %d: B+\n",i+1);
              continue;
        }

        if(arr[i]>=60 && arr[i]<=64){
            printf("Case %d: B\n",i+1);
            continue;
        }

        if(arr[i]>=55 && arr[i]<=59){
            printf("Case %d: B-\n",i+1);
            continue;
        }

        if(arr[i]>=50 && arr[i]<=54){
            printf("Case %d: C\n",i+1);
            continue;
        }


        if(arr[i]>=45 && arr[i]<=49){
            printf("Case %d: D\n",i+1);
              continue;
        }

        if(arr[i]>=0 && arr[i]<=44){
            printf("Case %d: F\n",i+1);
              continue;
        }
    }

  return 0;
}
