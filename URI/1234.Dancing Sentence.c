#include<stdio.h>
#include<string.h>

int main()
{
    char a[51];
    gets(a);
    int i,l,count=2;
    l = strlen(a);
    strlwr(a);
        a[0] = 'A'+(a[0]-'a');

    for(i=1;i<l;i++){
        if(a[i]>=97 && a[i]<=122){
            count++;
           if(count % 2 == 0){
              a[i] = 'A'+(a[i]-'a');
           }
       }
    }
    a[i]='\0';
    puts(a);
    printf("\n");
    return 0;
}
