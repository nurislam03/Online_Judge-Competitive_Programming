#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
using namespace std;

#define SIZE 110
vector < int > PrimeNumber;
int primes[SIZE];

void PrimeGenerate()
{
    memset( primes, 0, sizeof(primes) );
    for ( int i = 2; i*i <= 100 ; i++ )
    {
        if( primes[i] == 0 )
        {
            for ( int j = i * i; j <= 100; j += i ) primes[j] = 1;
        }
    }
    for( int i = 2 ; i <= 100 ; i++ )
    {
        if( primes[i] == 0 ) PrimeNumber.push_back(i);
    }
}
vector < int > Dvsr;
int DvsrArray[110];
void Divisiors( int n )
{
    memset( DvsrArray , 0 , sizeof(DvsrArray) );
    for( int i = 0 ; PrimeNumber[i] <= n ; i++ )
    {
        int Count = 0 ,k = 1,Pn;
        Pn = pow( PrimeNumber[i],k);

        while( Pn <= n )
        {
            Count += ( n / Pn );
            k++;
            Pn = pow( PrimeNumber[i],k);
        }
        if( Count != 0 )
        {
            Dvsr.push_back(PrimeNumber[i]);
            DvsrArray[PrimeNumber[i]] = Count;
        }
    }
}

int main()
{
    int tt,n;
    cin >> tt;
    for( int t = 1 ; t <= tt ; t++ )
    {
        cin >> n;
        for( int i = 0 ;  i < Dvsr.size() ; i++ )
        {
            cout << "Case " << t << ": " << n << " = " << Dvsr[i] << " (" << DvsrArray[Dvsr[i]] <<")";
            for( int j = 1 ; j < Dvsr.size() ; j++)
            {
                cout << " * " << Dvsr[j] << " (" << DvsrArray[Dvsr[j]] <<")";
            }
            cout << endl;
        }
    }
    return 0;
}
