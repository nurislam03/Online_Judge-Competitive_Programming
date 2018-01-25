#include<stdio.h>
 int main()
 {
     int I=1,J=60;
     printf("I=1 J=60\n");
     while(J>0){
        I=I+3;
        J=J-5;
        printf("I=%d J=%d\n",I,J);
     }
     return 0;
 }
