#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define SIZE 20000000
vector <int> Pair1,Pair2;
int primes[SIZE+10];


void PrimeGenerate()
{
    memset(primes, 0, sizeof(primes));

    for (int i = 2; i*i <= SIZE ; i++)
        if( primes[i] == 0 )
        {
            for (int j = i * i; j <= SIZE; j += i)
                primes[j] = 1;
        }

    int prevPrime = 2;
    for(int i = 2 ; i <= SIZE ; i++)
    {
        if(primes[i] == 0)
        {
            if(prevPrime + 2 == i)
            {
                Pair1.push_back(prevPrime);
                Pair2.push_back(i);
            }
            prevPrime = i;
        }
    }
}


int main()
{
    int n;
    PrimeGenerate();

    while(scanf("%d",&n) != EOF)
        cout << "(" << Pair1[n-1] << ", " << Pair2[n-1] << ")" << endl;

    return 0;
}
