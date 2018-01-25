
#include<stdio.h>
#include<math.h>

void triangle(double a,double b,double c)
{
    if (a >= (b + c)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{

    if ( pow(a,2) == (pow(b,2) + pow(c,2)) ){
        printf("TRIANGULO RETANGULO\n");
    }

    if ( pow(a,2) > (pow(b,2) + pow(c,2)) ){
        printf("TRIANGULO OBTUSANGULO\n");
    }

    else if ( pow(a,2) < (pow(b,2) + pow(c,2)) ){
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(a==b && b==c && a==c){
        printf("TRIANGULO EQUILATERO\n");
    }

    if((a==b && c!=a)||(a==c && b!=a) || (b==c && a!=b)){
        printf("TRIANGULO ISOSCELES\n");
    }
  }

}

double main()
{
    double A,B,C,check;
    scanf("%lf%lf%lf",&A,&B,&C);

    if ((A>B && B>C) || (A>B && C>B)) {

        A = A;
    }

    else if ((B>A && A>C) || (B>A && C>A)) {

        check = A;
        A = B;
        B = check;
    }

    else if ((C>A && A>B) || (C>A && B>A)){

        check = A;
        A = C;
        C = check;
    }

    triangle(A,B,C);

    return 0;
}
