/*================================/
Explanation:
Here,
    c = LCM(a,b);
we know that, c = (a * b) / GCD(a,b);

so,
     c / a   ==  b / GCD(a,b);

NOTE : c % a == 0 && c % b == 0
//============================== */

#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
using namespace std;

int a, c;

int gcd( int a , int b )
{
    if( b == 0 ) return a;
    return gcd( b , a % b );
}

int Check()
{
    if(c % a != 0) return -1;

    int ans,target = c / a;
    for (int i = target; i <= c; i += target)
    {
        if( (i / gcd(a,i)) == target)
        {
            ans = i;
            break;
        }
    }
    return ans;
}

int main()
{
    int tC, ans;
    scanf("%d", &tC);

    while (tC--)
    {
        scanf("%d %d", &a, &c);

        ans = Check();
        if(ans < 0)
            puts("NO SOLUTION");

        else
            printf("%d\n", ans);
    }
    return 0;
}
