#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;



int main()
{
    int n,sum = 0;
    for(int i = 1; i <= 6; i++)
    {
        scanf("%d",&n);
        sum += n;
    }
    sum /= 6;
    printf("%d\n",sum);

    return 0;
}
