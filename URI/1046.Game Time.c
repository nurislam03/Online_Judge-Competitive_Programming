#include<stdio.h>
int main()
{
    int a,b,T;
    scanf("%d %d",&a,&b);
    if(a == b){
            T=24;
        printf("O JOGO DUROU %d HORA(S)\n",T);
    }
    else if(a > b){
            T=(24-a)+b;
        printf("O JOGO DUROU %d HORA(S)\n",T);
    }
    else if(a < b){
            T=b-a;
        printf("O JOGO DUROU %d HORA(S)\n",T);
    }

    return 0;
}
