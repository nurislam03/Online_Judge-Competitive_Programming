#include <iostream>
#include <vector>

using namespace std;
#define LL long long
//LL CoPrime[1000+10];
vector < LL > CoPrime;

LL gcd(LL a, LL b)
{
    //a = abs(a); b = abs(b);
    if(b == 0) return a;
    return gcd(b, a%b);
}


int main()
{
    LL n,a,b, cnt = 0;
    scanf("%lld",&n);

    for(int i = 0; i < n; ++i)
    {
        scanf("%lld",&b);

        if(i)
        {
            CoPrime.push_back(a);
            if(gcd(a, b) != 1)
            {
                cnt++;
                CoPrime.push_back(1);
            }
        }
        a = b;
    }
    CoPrime.push_back(b);

    cout << cnt << endl;
    for(int i = 0; i < CoPrime.size(); ++i)
    {
        if(i == 0) cout << CoPrime[i];
        else cout << " " << CoPrime[i];
    }
    cout << endl;
    return 0;
}
