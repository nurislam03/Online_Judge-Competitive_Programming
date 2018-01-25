
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
#define all(ar) ar.begin(), ar.end()
#define LL long long
#define Size 100005
#define INF (1<<30)
#define MOD 1000000007


int main()
{
    //read("input.txt");
    //write("output.txt");

    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a, b;
        scanf("%d %d",&a, &b);

        int dif = b-a;
        if(dif == 0)
        {
            printf("0\n");
            continue;
        }

        int step = (int) sqrt(dif);

        if((step*step) == dif) step = (2*step)-1;
        else if((step*step+step) >= dif) step = step*2;
        else step = (step*2)+1;  //step*step)+step < dif

        printf("%d\n",step);
    }

    return 0;
}
