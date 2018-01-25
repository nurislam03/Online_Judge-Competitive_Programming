#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main()
{
    int R;
    float VOLUME;
    scanf("%d",&R);

    VOLUME=((4.0/3) * PI * pow(R,3));
    printf("VOLUME = %.3f\n",VOLUME);

    return 0;
}
