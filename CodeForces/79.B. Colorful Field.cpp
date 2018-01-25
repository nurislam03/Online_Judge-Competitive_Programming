#include <iostream>
#include <cstdio>
#include <sstream>
#include <cstdlib> //
#include <cctype> //
#include <cmath> //
#include <climits> //
#include <iomanip> //
#include <cassert> //
#include <algorithm> //
#include <set> //
#include <queue> //
#include <deque> //
#include <stack> //
#include <list> //
#include <fstream> //
#include <numeric> //
#include <string> //
#include <vector> //
#include <cstring> //
#include <map> //
#include <iterator> //
#include <functional> //
using namespace std;

vector < int > V[40000+10];

int main()
{
    int n,m,k,t,x,y;
    cin >> n >> m >> k >> t;
    for( int i = 1 ; i <= k ; i++ )
    {
        scanf("%d %d",&x,&y);
        V[x].push_back(y);
    }
    for( int i = 1 ; i <= t ; i++ )
    {

        scanf("%d %d",&x,&y);
        int WastePlace = 0,totPlace = 0;
        if( x > 1 )
        {
            for( int kk = 1 ; kk < x ; kk++ )
            {
                WastePlace += V[kk].size();
                totPlace += m;
            }
        }
        int Count = 0,flag = 0,res;
        for( int j = 0 ; j < V[x].size() ; j++ )
        {
            if( V[x][j] > y ) continue; //cout << " special judge           " << V[x][j] << endl;
            if( V[x][j] == y )
            {
                printf("Waste\n");
                flag++;
                break;
            }
            else Count++;
        }
        if( flag > 0 ) continue;

        WastePlace += Count; //cout << "WastPlace" << WastePlace << endl;
        totPlace += y; //cout << "totPlace" << totPlace << endl;
        res = totPlace - WastePlace; //cout << res << endl;

        if( res == 3 || res % 3 == 0 ) printf("Grapes\n");
        else
        {
            res = res % 3;
            if( res == 1 ) printf("Carrots\n");
            else if( res == 2 ) printf("Kiwis\n");
        }
    }
    return 0;
}
