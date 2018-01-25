
//
//  Problem Name : 10650 - Determinate Prime
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
#define all(ar) ar.begin(), ar.end()

#define sz 32000+10
vector <int> primes;
bool is_prime[sz+100];
vector < int > res;


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
            primes.push_back(i);
    }
}

void ansPrint(int a, int b)
{
    for(int i = a; i <= b; i++)
    {
        if(i == a) printf("%d",primes[i]);
        else printf(" %d",primes[i]);
    }
    printf("\n");
}



int main()
{
    ios_base::sync_with_stdio(false);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //read("input.txt");
    //write("output.txt");

    int l,u;
    PrimeGenerate();

    while(scanf("%d %d",&l,&u))
    {
        if(l == 0 && u == 0) break;
        if(l > u) swap(l,u);


        int low = 0, up = primes.size()-1;
        while(1)
        {
            if(primes[low] >= l) break;
            low++;
        }
        while(1)
        {
            if(primes[up] <= u) break;
            up--;
        }
        //cout << primes[low] << " " << primes[up] << endl;
        int k = low+1, last = low, dis,cnt = 0;
        dis = primes[k] - primes[k-1];


        while(k < up)
        {
            while((k < up) && ((primes[k] - primes[k-1]) == dis))
            {
                k++;
                cnt++;
            }
            if(k-last >= 3) ansPrint(last, k-1);

            last = k-1;
            dis = primes[k] - primes[k-1];
        }

    }

    return 0;
}
