#include <iostream>
#include <vector>
using namespace std;
vector < long long > V;

int main()
{
    long long x,k,res = 0;
    string s;

    V.push_back(0);
    for( int i = 1 ; i <= 4 ; i++ )
    {
        cin >> x;
        V.push_back(x);
    }

    cin >> s;
    for( int i = 0 ; i < s.size() ; i++ )
    {
        k = s[i] - '0';
        res += V[k];
    }

    cout << res << endl;
    return 0;
}
