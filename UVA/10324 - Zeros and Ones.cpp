#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    string line;

    for( int t = 1; cin >> line; t++)
    {
        if(line.size() < 1 ) break;
        int n,m,queries;
        scanf("%d",&queries);
        printf("Case %d:\n",t);

        for( int i = 1; i <= queries; i++ )
        {
            scanf("%d %d",&n,&m);

            if( n > m )
            {
                int temp = n;
                n = m; m = temp;
            }

            bool flag = true;
            char c = line[n];

            for( int k = n+1; k <= m; k++ )
            {
                if( line[k] != c )
                {
                    printf("No\n");
                    flag = false;
                    break;
                }
            }
            if(flag) printf("Yes\n");
        }
    }
    return 0;
}
