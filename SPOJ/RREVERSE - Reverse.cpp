#include <iostream>
using namespace std;

int Reverse(int num )
{
    int temp=0;
    while(num)
    {
        temp=(temp*10)+(num%10);
        num/=10;
    }
    return temp;
}

int main()
{
    int n,res;
    while( scanf("%d",&n) != EOF )
    {
        res = Reverse(n);
        printf("%d\n",res);
    }
    return 0;
}
