
// Nice Explanation of this problem :
// http://blog.forthright48.com/2015/08/uva-11388-gcd-lcm.html

#include <iostream>
using namespace std;


int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int GCD,LCM;
        cin >> GCD >> LCM;

        int x = GCD; //

        if( LCM % x )
            cout << -1 << endl;

        else
            cout << GCD << " " << LCM << endl;
    }
    return 0;
}
