#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if( n == 0 ) break;
        int rFind = -1,dFind = -1,res = 10000000,temp = 100000000;

        string fake,line;
        getline(cin,fake);
        getline(cin,line);

        for( int i = 0; i < n; i++ )
        {
            if( line[i] == 'Z' )
            {
                res = 0;
                break;
            }
            else if( line[i] == 'R' )
            {
                rFind = i;
                if( dFind != -1 ) temp = i - dFind;
            }
            else if( line[i] == 'D' )
            {
                dFind = i;
                if( rFind != -1 ) temp = i - rFind;
            }
            res = min( res, temp );
        }
        printf("%d\n",res);
    }
    return 0;
}
