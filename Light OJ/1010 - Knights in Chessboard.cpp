#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    int t,n,m,x,res;
    cin >> t;

    for( int i = 1 ; i <= t ; i++ )
    {
        cin >> n >> m;
        if( n == 1 || m == 1 ) res = n * m;

        else if( n == 2 || m == 2 )
        {
            if( n == 2 ) x = m;
            else x = n;

            if( x % 4 == 2 ) res = x + 2;
            else if( x % 4 == 3 ) res = x + 1;
            else if( x % 4 == 1 ) res = x + 1;
            else if( x % 4 == 0 ) res = x;
        }

        else res = ( ( n * m ) + 1 ) / 2;
        cout <<"Case "<<i<<": "<< res << endl;
    }
    return 0;
}

/*
        another approach
                * details
                * simulation



#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)


int main()
{
    //read("input.txt");
    //write("output.txt");


    int T;
    scanf("%d",&T);
    for(int t = 1; t <= T; t++)
    {
        int row,col;
        scanf("%d %d",&row, &col);

        if(row > col) swap(row, col);

        int ans = 0;
        if(row == 1) ans = col;
        else if(row == 2)
        {
            ans = (col/4)*4;
            if(col%4 >= 2) ans += 4;
            else if(col%4 == 1) ans += 2;
        }
        else if(row == 3)
        {
            ans = (col/2)*3;
            if(col%2 != 0) ans += 2;
        }
        else if(row == 4)
            ans = col*2;
        else
        {
            ans = ((row/2)+(row%2)) * ((col/2)+(col%2));
            ans += (row/2)*(col/2);
        }

        printf("Case %d: %d\n",t,ans);
    }

    return 0;
}



*/
