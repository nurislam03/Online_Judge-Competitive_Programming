#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for( int t = 1 ; t <= T ; t++ )
    {
        int n,prevJump,currJump,highJump = 0,lowJump = 0;
        cin >> n;
        cin >> prevJump;

        for( int i = 2 ; i <= n ; i++ )
        {
            cin >> currJump;
            if( currJump > prevJump ) highJump++;
            if( prevJump > currJump ) lowJump++;
            prevJump = currJump;
        }
        cout << "Case " << t << ": " << highJump << " " << lowJump << endl;
    }
    return 0;
}
