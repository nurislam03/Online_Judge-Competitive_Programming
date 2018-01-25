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
    int n,x;
    cin >> n;
    for( int i = 1 ; i <= n ; i++ )\
    {
        scanf( "%d",&x );
        V.push_back(x);
    }
    sort( V.begin(), V.end() );
    printf("%d",V[0]);
    for( int i = 1 ; i < n ; i++ ) printf(" %d",V[i]);
    printf("\n");
    return 0;
}
