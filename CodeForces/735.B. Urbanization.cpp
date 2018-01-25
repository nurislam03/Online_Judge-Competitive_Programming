#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>

using namespace std;
vector < int > V;


int main()
{
    int n,n1,n2;
    cin >> n >> n1 >> n2;

    for(int i = 0; i < n; i++)
    {
        int x;
        scanf("%d",&x);
        V.push_back(x);
    }
    sort(V.begin(), V.end());

    double tot = 0.0,sum1 = 0.0,sum2 = 0.0,ans = 0.0;
    int loop = (n-(n1+n2));
    for(int i = (V.size()-1); i >= loop; i--)
        tot += V[i];


    int tmp1 = min(n1,n2);
    int tmp2 = max(n1,n2);

    loop = (n-tmp1);
    for(int i = (V.size()-1); i >= loop; i--)
        sum1 += V[i];

    sum2 = (tot-sum1);
    ans += ((sum1/tmp1)+(sum2/tmp2));
    printf("%.6f\n",ans);

    return 0;
}
