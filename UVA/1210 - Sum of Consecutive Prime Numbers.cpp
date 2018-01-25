#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <sstream>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define all(ar) ar.begin(), ar.end()
#define LL long long

#define sz 10000
vector <int> Prime;
bool is_prime[sz+100];
int PrimeSum[sz+10];

void PrimeGenerate()
{
    memset(is_prime, true, sizeof(is_prime));
    for(int i = 2; i*i <= sz; i++)
    {
        if(is_prime[i] == true)
        {
            for (int j = i*i; j <= sz; j += i)
                is_prime[j] = false;
        }
    }

    for(int i = 2; i <= sz; i++)
    {
        if(is_prime[i] == true)
            Prime.push_back(i);
    }
}


void Consecutive_Prime_Sum()
{
    memset(PrimeSum, 0, sizeof(PrimeSum));
    for(int i = 0; i < Prime.size(); i++)
    {
        int tmp = 0;
        for(int k = i; k < Prime.size(); k++)
        {
            tmp += Prime[k];
            if(tmp > 10000) break;

            PrimeSum[tmp]++;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //read("input.txt");
    //write("output.txt");

    PrimeGenerate();
    Consecutive_Prime_Sum();

    int n;
    while(scanf("%d",&n) && n)
    {
        int ans = PrimeSum[n];
        printf("%d\n", ans);
    }


    return 0;
}
