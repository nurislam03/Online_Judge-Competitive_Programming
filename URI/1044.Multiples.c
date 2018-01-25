#include<stdio.h>

void result(int x,int y)
{
    if(x%y==0 ||y%x==0){
        printf("Sao Multiplos\n");
    }

    else if(x%y!=0 && y%x!=0){
        printf("Nao sao Multiplos\n");
    }
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    result(a,b);
    return 0;
}
