#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void check();
int main()
{
    int j,n;
    scanf("%d",&n);
    for(j=0;j<n;j++){
        check();
    }
    return 0;
}

void check()
{
    int i,k,m,l;
    char a[10000];
    char b[10000];

    fflush(stdin);
    gets(a);
    strcpy(b,a);
    strrev(b);
    l = strlen(a);

    for(i=0;i<l-1;i++){
        k=abs((a[i+1] - a[i]));
        m=abs((b[i+1] - b[i]));
        if( k != m ){
            printf("Not Funny\n");
            return ;
        }
    }
    printf("Funny\n");
    return ;
}



//////////////////////////////////////
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//int main()
//{
//    char a[100];
//    char b[100];
//
//    gets(a);
//    strcpy(b,a);
//    strrev(b);
//
//    int l,i,k,m;
//    l = strlen(a);
//
//    for(i=0;i<l-1;i++){
//            k=abs((a[i+1] - a[i]));
//            m=abs((b[i+1] - b[i]));
//        if( k != m ){
//        printf("Not Funny\n");
//        return 0;
//        }
//    }
//    printf("Funny\n");
//    return 0;
//}
//////////////////////////////////////
