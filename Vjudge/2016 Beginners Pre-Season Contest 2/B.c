
#include<stdio.h>
#include<string.h>

int check(char path[])
{
    int i,p=1;
    for(i=0;i<strlen(path)-1;i++){
		if(path[i]=='/'&&path[i+1]=='/')
			continue;
		else{
			printf("%c",path[i]);
		}
	}
	if(path[strlen(path)-1]!='/')
		printf("%c",path[strlen(path)-1]);
      return p;
}

int main ()
{
	char path[101];
	gets(path);
	int i,k;

	for(i=0;i<strlen(path);i++){
            if(path[i]>='a' && path[i]<='z'){
            k=check(path);
            if(k==1) return 0;
         }
	}
	printf("/");
	return 0;
}
