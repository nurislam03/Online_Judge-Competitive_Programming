#include<stdio.h>
int main(void)
{
    int t,n,b,j,count,i;
    long long int a;
    char st[10];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
            count=0;
        scanf("%d",&n);
        long long int ara[3];
        for(j=1;j<=n;j++){
            ara[j]=0;
        }
        for(j=1;j<=n;j++){
            scanf("%lld",&a);
            fflush(stdin);
            scanf("%s",st);
            if(st[0]=='G'){
                ara[0]=a;
            }
            if(st[0]=='B'&&ara[1]<a){
                ara[1]=a;
            }
            if(st[0]=='U'&&ara[2]<a){
                ara[2]=a;
            }
        if(ara[0]<ara[1]&&ara[0]<ara[2]&&ara[1]!=ara[2]&&ara[0]!=0&&ara[1]!=0&&ara[2]!=0){
            count=1;
            break;
        }
        }
        if(count!=0){
            printf("Case %d: GBU\n",i);
        }
        else{
             printf("Case %d: Undefined\n",i);
        }
    }
    return 0;
}
