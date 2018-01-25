
//
//  Problem Name : 914 - Jumping Champion
//  Online judge : UVa
//  Created by Nur Islam.
//


#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)

#define sz 1000000
vector <int> primes;
bool is_prime[sz+10];
map <int, int> Map;


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

    //primes.push_back(0);
    for(int i = 2; i <= sz; i++)
    {
        if(is_prime[i] == true)
            primes.push_back(i);
    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //read("lazy_loading.txt");
    //write("solutions.txt");

    int T;
    scanf("%d",&T);
    PrimeGenerate();


    while(T--)
    {
        int L, U, k = 0;
        scanf("%d %d",&L,&U);

        while(primes[k] < L) k++;
        Map.clear();

        int ansCnt = 0, Max = 0;
        bool moreThanOneRes = true;

        for(int i = k+1; (i < primes.size() && primes[i] <= U); ++i)
        {
            int tmp = primes[i] - primes[i-1];
            Map[tmp]++;

            if(Map[tmp] == Max) moreThanOneRes = true;
            if(Map[tmp] > Max)
                Max = Map[tmp], ansCnt = tmp, moreThanOneRes = false;
        }

        if(ansCnt == 0 || moreThanOneRes)
             printf("No jumping champion\n");
        else printf("The jumping champion is %d\n",ansCnt);
    }

    return 0;
}
