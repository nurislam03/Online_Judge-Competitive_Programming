#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int Valid[12] = {0};

bool IsValid( int n )
{
    for( int i = 0 ; i <= 10 ; i++ ) Valid[i] = 0;
    while( n > 0 )
    {
        int k = n % 10;
        n /= 10;
        Valid[k]++;
    }
    for( int i = 0 ; i <= 10 ; i++ )
    {
        if( Valid[i] > 1 ) return false;
    }
    return true;
}

int main()
{
    int n,m;
    while( scanf("%d %d",&n,&m) != EOF )
    {
        int Count = 0;
        for( int i = n ; i <= m ; i++ )
        {
            bool res = IsValid(i);
            if( res == true ) Count++;
        }
        cout << Count << endl;
    }
}
