
#include<stdio.h>

void swap(int x,int y,int z)
{
    if (x>y && y>z){
        printf("%d\n%d\n%d\n",z,y,x);
    }

        else if (x>z&&z>y){
            printf("%d\n%d\n%d\n",y,z,x);
        }

         else if (y>z&&z>x){
            printf("%d\n%d\n%d\n",x,z,y);
         }

        else if (y>x&&x>z){
            printf("%d\n%d\n%d\n",z,x,y);
        }

         else if (z>x&&x>y){
            printf("%d\n%d\n%d\n",y,x,z);
         }

         else if (z>y&&y>x){
            printf("%d\n%d\n%d\n",x,y,z);
         }
}

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    swap(a,b,c);
    printf("\n%d\n%d\n%d\n",a,b,c);

    return 0;

}

