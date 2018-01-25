
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define LL long long
#define ULL unsigned long long
#define sz 1000000



int main()
{
    ios_base::sync_with_stdio(false);
    //read("input.txt");
    //write("output.txt");

    int a,b,c,d,aa,cc;
    scanf("%d:%d",&aa,&cc);
    a = aa/10;
    b = aa%10;

    int i = aa, j;
    while(1)
    {
        if(i == aa) j = cc+1;
        else j = 0;
       // cout << j << endl;
        for( ; j < 60; j++)
        {
            int x = j/10;
            int y = j%10;

            if(a == y && b == x)
            {
                printf("%d%d:%d%d",a,b,x,y);
                return 0;
            }

        }
        i++; j = 0;
        a = i/10;
        b = i%10;

        if(i == 24)
        {
            printf("00:00");
            return 0;
        }
    }


}
