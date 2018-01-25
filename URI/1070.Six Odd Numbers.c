
#include<stdio.h>

int main()
{
    int i,a,count=0;
    scanf("%d",&a);

    for(i=a;1;i++){
        if(i%2 != 0){
            printf("%d\n",i);
            count++;
            if(count==6){
                break;
            }
        }
    }
    return 0;
}
