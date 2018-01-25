#include<stdio.h>
int main()
{
    int a,i;
    int t;
    int ara[50]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
    int arr[50];
    for(i=1;i<=50;i++){

        if(i==1){
            arr[0]=1;
            }

            if(i==2){
                    arr[1]=2;
            }

            if(i>2){

                arr[i-1]=(ara[i-2]+ara[i-3]);

            }
    }

            for(i=0;i<50;i++){
            printf("%d\n",arr[i]);
            }

}

       /*scanf("%d",&t);

       // for(i=0;i>50;i++){
            if(t==1){
                printf("%d",t);
            }
            if(t==2){
                    printf("%d",t);
            }
            // if(a==3){
                  //  printf("%d",ara[i]);
            // }
            if(t>2){
                printf("%d",((ara[t-2])+(ara[t-3])));
            }
        //}

        return 0;
    }

*/
