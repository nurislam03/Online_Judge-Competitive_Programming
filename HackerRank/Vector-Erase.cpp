#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector < int > V;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,x,y;
    scanf("%d",&n);
    for( int i = 1 ;  i <= n ; i++ )
    {
        scanf("%d",&x);
        V.push_back(x);
    }

    scanf("%d",&x);
    V.erase(V.begin()+(x-1));

    scanf("%d %d",&x,&y);
    V.erase(V.begin()+(x-1),V.begin()+(y-1));

    printf("%d\n",(int)V.size());
    printf("%d",V[0]);
    for( int i = 1 ; i < V.size() ; i++ ) printf(" %d",V[i]);
    return 0;
}
