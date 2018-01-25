#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int N,B,H,W;
    while ( scanf("%d %d %d %d",&N,&B,&H,&W) != EOF )
    {
        int onePersonCOST,availavleBED,res = 10000000000;
        bool bed,flag = false;
        for( int i = 1 ; i <= H ; i++ )
        {
            int totCost;
            bed = false;

            cin >> onePersonCOST;
            totCost = onePersonCOST * N;

            for( int j = 1 ; j <= W ; j++ )
            {
                scanf("%d",&availavleBED);
                if( availavleBED >= N ) bed = true;
            }
            if( totCost <= B && bed == true )
            {
                res = min( res , totCost );
                flag = true;
            }
        }
        if( flag ) cout << res << endl;
        else cout << "stay home" << endl;
    }
    return 0;
}
