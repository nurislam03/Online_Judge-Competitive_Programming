#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;


#define SIZE 10000
vector < int > PrimeNumber;
int primes[SIZE+10],Divisiors[SIZE+10];


void PrimeGenerate()
{
    memset( primes, 0, sizeof(primes) );
    for( int i = 0; i <= 10001; i++ ) Divisiors[i] = 1;



    for ( int i = 2; i*i <= SIZE; i++ )
    {
        if( primes[i] == 0 )
        {
            for ( int j = i * i; j <= 10000; j += i )
                primes[j] = 1;
        }
    }


    for( int i = 2 ; i <= 10000 ; i++ )
    {
        if( primes[i] == 0 )
            PrimeNumber.push_back(i);
    }

    for( int i = 2; i <= 10001; i++ )
    {
        for( int j = i; j <= 10001; j += i )
            Divisiors[j]++;
    }
}


int main()
{
    PrimeGenerate();
    int T,L,H;
    scanf("%d",&T);

    for( int i = 1; i <= T; i++ )
    {
        scanf("%d %d",&L,&H);
        if( H < L )
        {
            int temp = L;
            L = H; H = temp;
        }

        vector < int > vec;
        bool flag = false;

        if( H <= 1 ) flag = true;
        else
        {
            for( int k = L; k <= H; k++ )
            {
                int Count = 0;
                if( k <= 1 ) continue;
                if( primes[k] == 0 )
                    vec.push_back(k);
                else
                {
                    int dd = Divisiors[k];
                    if( primes[dd] == 0 ) vec.push_back(k);
                }
            }
        }

        if( vec.size() < 1 || flag == true ) printf("-1");
        for( int kk = 0; kk < vec.size(); kk++ )
        {
            if( kk != 0 && kk != vec.size() ) printf(" %d",vec[kk]);
            else printf("%d",vec[kk]);
        }
        printf("\n");
    }
    return 0;
}
