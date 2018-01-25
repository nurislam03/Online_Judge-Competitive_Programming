#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char x[40];
    while(scanf("%s",x) != EOF)
    {
        for( int i = 0 ; i < strlen(x) ; i++ )
        {
            if(x[i] >= 'A' && x[i] <= 'C') printf("2");
            else if(x[i] >= 'D' && x[i] <= 'F') printf("3");
            else if(x[i] >= 'G' && x[i] <= 'I') printf("4");
            else if(x[i] >= 'J' && x[i] <= 'L') printf("5");
            else if(x[i] >= 'M' && x[i] <= 'O') printf("6");
            else if(x[i] >= 'P' && x[i] <= 'S') printf("7");
            else if(x[i] >= 'T' && x[i] <= 'V') printf("8");
            else if(x[i] >= 'W' && x[i] <= 'Z') printf("9");
            else printf("%c",x[i]);
        }
        printf("\n");
    }
    return 0;
}
