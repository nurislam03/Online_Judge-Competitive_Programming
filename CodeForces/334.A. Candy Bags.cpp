#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n *= n;
    int k = n / 2 ;
    for( int i = 1 ; i <= k ; i++ )
    {
        printf("%d %d\n", i,n );
        n--;
    }
    return 0;
}
