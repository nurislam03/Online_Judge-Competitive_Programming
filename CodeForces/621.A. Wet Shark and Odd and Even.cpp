#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>


using namespace std;
#define LL long long
vector < int > V;


int main()
{
    int n,x;
    scanf("%d",&n);

    LL sum = 0;
    for(int i = 1; i <= n; i++)
    {
        scanf("%d",&x);
        sum += x;

        if(x%2 != 0) V.push_back(x);
    }
    sort(V.begin(), V.end());
    if(sum % 2 != 0) sum -= V[0];

    cout << sum << endl;

    return 0;
}
