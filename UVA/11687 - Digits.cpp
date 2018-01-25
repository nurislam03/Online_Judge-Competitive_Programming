#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
#define sz 1000000
char num[sz+10];
int temp[sz+10];

int Digit(int n)
{
    int ans = 0;
    if(n == 0) return 1;

    while(n)
    {
        n /= 10;
        ans++;
    }
    return ans;
}

int main()
{
    while(scanf("%s",num))
    {
        if(num[0] == 'E')
            break;

        int len = strlen(num);
        if(len == 1 && num[0] == '1')
        {
            printf("1\n");
            continue;
        }

        temp[1] = len;
        for(int i = 2;  ; i++)
        {
            temp[i] = Digit(temp[i-1]);

            if( temp[i] == temp[i-1] )
            {
                printf("%d\n",i);
                break;
            }
        }

    }
    return 0;
}
