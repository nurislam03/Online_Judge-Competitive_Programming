#include<stdio.h>
#include<math.h>
#define PI 3.14159

double main()
{
    double A,R;
    scanf("%lf",&R);

    A=PI*pow(R,2);
    printf("A=%.4f\n",A);

    return 0;
}
