#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;



int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double a,b,ans = 0.0;
        scanf("%lf %lf",&a, &b);

        ans = a+b;
        int tmp = ans;

        if(ans - tmp != 0.0) printf("%.1lf\n",ans);
        else printf("%d\n",tmp);
    }


    return 0;
}
