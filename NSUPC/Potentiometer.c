#include<stdio.h>
#include<math.h>

int main()
{
    int n,p,i;
    scanf("%d",&n);
    p=sqrt(n);
    int a[n],b[n];

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int sum=0,count=0,i=0;
    for(;i<p;i++){
       b[i]=a[i];
       for(i=1;i<n;i++){
          b[i]=a[i]+a[i-1];
          }
    }
}
