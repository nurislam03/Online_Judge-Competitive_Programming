#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int T,x,y,z;
    scanf("%d",&T);
    for( int i = 1 ; i <= T ; i++ )
    {
        vector <int> V;
        scanf("%d %d %d",&x,&y,&z);
        V.push_back(x);
        V.push_back(y);
        V.push_back(z);

        sort( V.begin(),V.end() );
        cout << "Case " << i << ": " << V[1] << endl;
    }
    return 0;
}
