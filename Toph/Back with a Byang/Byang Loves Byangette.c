#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    gets(a);
    int b;
    b = strlen(a);
    if(b == 16){
        printf("Byangette\n");
    }
    else
        printf("Byang\n");

    return 0;
}
