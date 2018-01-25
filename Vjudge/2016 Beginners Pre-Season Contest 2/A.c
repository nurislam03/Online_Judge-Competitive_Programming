
#include<stdio.h>

int main()
{
    int n;
	scanf("%d",&n);
	int ara[1000];
	int i,j,k;
	for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
	}
	for(i=0;i<n;i++){
        for(j=0 ; j<n ; j++){
            for(k=0 ; k<n ; k++){
                if(i!=j && ara[i]+ara[j]==ara[k]){
					printf("%d %d %d\n",k+1,j+1,i+1);
					return 0;
               }
            }
        }
	}
	printf("-1");
	return 0;
}


