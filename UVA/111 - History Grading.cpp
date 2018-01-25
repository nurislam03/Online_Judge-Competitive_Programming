#include <iostream>
#include <algorithm>
using namespace std;

int n,dp[25][25];
int correctEvent[25];
int studentEvent[25];

void Init()
{
    for( int i = 0 ; i < 25 ; i++ )
    {
        for( int j = 0 ; j < 25 ; j++ )
        {
            dp[i][j] = -1 ;
        }
    }
}


int DynamicProgramming( int IndexOfCorrEvent , int IndexOfStuEvent )
{
    if( IndexOfCorrEvent > n || IndexOfStuEvent > n ) return 0;
    if( dp[IndexOfCorrEvent][IndexOfStuEvent] != -1 ) return dp[IndexOfCorrEvent][IndexOfStuEvent];

    int res;
    if( correctEvent[IndexOfCorrEvent] == studentEvent[IndexOfStuEvent] )
    {
        res = 1 + DynamicProgramming( IndexOfCorrEvent + 1 , IndexOfStuEvent + 1 );
    }
    else
    {
        int temp1 = DynamicProgramming( IndexOfCorrEvent + 1 , IndexOfStuEvent );
        int temp2 = DynamicProgramming( IndexOfCorrEvent , IndexOfStuEvent + 1 );
        res = max( temp1 , temp2 );
    }
    dp[IndexOfCorrEvent][IndexOfStuEvent] = res;
    return res;
}


int main()
{
    int x;
    cin >> n;

    for( int i = 1 ; i <= n ; i++ )
    {
        scanf("%d",&x );
        correctEvent[x] = i;
    }

    while( scanf("%d",&x ) == 1 )
    {
        studentEvent[x] = 1;
        for( int i = 2 ; i <= n ; i++ )
        {
            scanf("%d",&x );
            studentEvent[x] = i;
        }

        Init();
        int res = DynamicProgramming( 1 , 1 );
        printf("%d\n",res );

    }
    return 0;
}
