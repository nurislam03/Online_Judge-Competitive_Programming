#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string x;
    int t = 0;
    while(1)
    {
        cin >> x;
        if( x == "*" ) break;

        if( x[0] == 'H' ) cout << "Case " << ++t << ": " << "Hajj-e-Akbar" << endl;
        else cout << "Case " << ++t << ": " << "Hajj-e-Asghar" << endl;
    }
    return 0;
}
