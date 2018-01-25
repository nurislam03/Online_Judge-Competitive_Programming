#include<stdio.h>
int maximumfinder(int a,int b,int c);

int main(void)
{
	int turn;
	int num1,num2,num3;
	scanf("%d",&turn);
	int i;
	for(i=1;i<=turn;i++)
	{
		scanf("%d %d %d",&num1,&num2,&num3);
		if(num1>=-200 && num1<=200 && num2>=-200 && num2<=200 && num3>=-200 && num3<=200 ){
		int checkmaximum=maximumfinder(num1,num2,num3);
		printf("Case %d: %d",i,checkmaximum);
	}
	}
    return 0;
}

int maximumfinder(int a,int b,int c)
{
      if(a>b&&a>c)
	{
		return a;
	}
 else if(b>a&&b>c)
	{
		return b;
	}
     else
	{
		return c;
	}
}
