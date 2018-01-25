#include<stdio.h>

int main()
{
    int v,h;
    scanf("%d%d",&h,&v);

    float fuel;
    fuel=(h*v)/12.0;

    printf("%.3f\n",fuel);

    return 0;

}
