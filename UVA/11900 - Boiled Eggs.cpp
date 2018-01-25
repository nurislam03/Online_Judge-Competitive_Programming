#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    int tt,n,p,q,weight[32];
    cin >> tt;
    for( int t = 1 ; t <= tt ; t++ )
    {
        int NumberOfEgg = 0,TotalWeight = 0;
        cin >> n >> p >> q;
        for( int i = 0 ; i < n ; i++ )
        {
            cin >> weight[i];
            if( i < p )
            {
                TotalWeight += weight[i];
                if( TotalWeight <= q ) NumberOfEgg++;
            }
        }
        cout<<"Case "<<t<<": "<<NumberOfEgg<<endl;
    }
    return 0;
}
