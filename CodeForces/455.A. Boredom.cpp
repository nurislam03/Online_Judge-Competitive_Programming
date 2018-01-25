#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int n;
int arr[100000+10] = {0};
long long dp[100010];
//int num[100000+10];

long long DynamicProgramming( long long n )
{
    if( n > 100000 ) return 0;
    if( arr[n] == 0 ) n++;
    if( dp[n] != -1 ) return dp[n];

    long long temp1,temp2,res = -1000000000000;
    temp1 = ( n * arr[n] ) + DynamicProgramming( n + 2 );
    temp2 = DynamicProgramming( n + 1 );
    res = max( res, max(temp1,temp2) );

    dp[n] = res;
    return res;
}
int main()
{
    int n,x;
    scanf("%d",&n );
    for( int i = 1 ; i <= n ; i++ )
    {
        scanf("%d",&x );
        //num[i] = x;
        arr[x]++;
    }
    memset( dp , -1 , sizeof(dp) );
    long long res = DynamicProgramming( 1 );
    cout << res << endl;
    return 0;
}
