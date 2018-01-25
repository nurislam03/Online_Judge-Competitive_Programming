
#include<stdio.h>

int main()
{
    int h1,m1,h2,m2;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);

    int totHourCnt = h2 - h1;
    if(totHourCnt < 0) totHourCnt += 24;

    int totMinCnt  = m2 - m1;
    if(totMinCnt < 0){
        totMinCnt += 60;
        totHourCnt--;
    }

    if(h1 == h2 && m1 == m2){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",totHourCnt, totMinCnt);

    return 0;
}
