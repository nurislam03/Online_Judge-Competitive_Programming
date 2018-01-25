/*
Problem : I Love Big Number.
OJ      : UVa

Problem Description: let you have a number N.
Now, you have to find out the Factorial of N   Ex.(N!).
Then find the sum of the digits of your result!.
Suppose the number is 5. You first calculate 5!=120.
then find sum of the digits(120)=  1+2+0=3.

KeyWord: BigInteger, BigInteger-In-cpp;

another code is on the bottom of the page.
usefull link: https://www.quora.com/Why-am-I-getting-WA-in-UvA-problem-10220-I-Love-Big-Numbers

*/

#include<cstdio>
#include<cstring>

using namespace std;
int num[3000];


int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        memset(num, 0, sizeof(num));
        num[0] = 1;
        int local = 3;

        for (int i = 2; i <= n; ++i)
        {
            int c = 0,s;
            for (int j = 0; j < local; ++j)
            {
                s = i * num[j] + c;
                c = s / 10;
                num[j] = s % 10;
            }
            local += 3;
        }

        int sum = 0;
        for (int i = 0; i < 3000; ++i)
            sum += num[i];

        printf("%d\n", sum);
    }
    return 0;
}

/*

Another Code with Description.



int main()
{
    int a[1000]; //array will have the capacity to store 200 digits.
    int n,i,j,temp,m,x;
    while(cin>>n)
    {
        a[0]=1;  //initializes array with only 1 digit, the digit 1.
        m=1;    // initializes digit counter
        temp = 0; //Initializes carry variable to 0.
        for(i=1;i<=n;i++)
        {
            for(j=0;j<m;j++)
            {
                x = a[j]*i+temp; //x contains the digit by digit product
                a[j]=x%10; //Contains the digit to store in position j
                temp = x/10; //Contains the carry value that will be stored on later indexes
            }
            while(temp>0) //while loop that will store the carry value on array.
            {
                a[m]=temp%10;
                temp = temp/10;
                m++; // increments digit counter
            }
        }
        int sum=0;
        for(i=m-1; i>=0; i--) //printing answer
            sum+=a[i];
        printf("%d\n",sum);
    }
    return 0;
 }



*/
