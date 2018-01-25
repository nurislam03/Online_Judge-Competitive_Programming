#include<stdio.h>

void Check(int a[],int num,int p)
{
   int i,j,k,temp;

   for (i=1;i<=num;i++) {
      for (j=0;j<num;j++) {
         if (a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
         }
      }
   }
   int sum=0;
   for(i=p;i<num;i++){
        sum=sum+a[i];
   }
   printf("%d\n",sum);
   return ;
}
int main()
{
    int n,i,r;
    scanf("%d",&n);
    r = n/3;
    int a[n];
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    Check(a,n,r);
    return 0;
}
