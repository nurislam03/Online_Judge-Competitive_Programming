#include <iostream>
#include <cstdio>
#include <vector>
#include <map>

using namespace std;
vector <int> V;

void divisior(int n)
{
    for(int i = 1; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            V.push_back(i);

            if( i != n/i)
                V.push_back(n/i);
        }
    }
}


int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b)
{
    return (( a / gcd(a,b)) * b );
}


int main()
{
    long long n;
    while(scanf("%lld",&n) && n)
    {
        V.clear();
        divisior(n);

        int cnt = 0;
        for(int i = 0; i < V.size() - 1; i++)
        {
            for(int k = i+1; k < V.size(); k++)
            {
                if(lcm(V[i], V[k]) == n)
                    cnt++;
            }
        }
        cout << n << " " << cnt+1 << endl;
    }

    return 0;
}
