#include <iostream>
using namespace std;

#define SIZE 1000000
bool primes[SIZE+10];


void PrimeGenerate()
{
    for(int i = 0; i <= SIZE; i++)
        primes[i] = true;

    for (int i = 2; i*i <= SIZE ; i++)
        if(primes[i])
        {
            for (int j = i * i; j <= SIZE; j += i)
                primes[j] = false;
        }
}


int Reverse(int num)
{
    int temp = 0;
    while(num)
    {
        temp = (temp * 10) + (num % 10);
        num/=10;
    }
    return temp;
}

int main()
{
    int n;
    PrimeGenerate();

    while( scanf("%d",&n) != EOF )
    {
        if(!primes[n])
            cout << n << " is not prime." << endl;

        else
        {
            int tmp = Reverse(n);

            if(primes[tmp] && n != tmp)
                cout << n << " is emirp." << endl;
            else
                cout << n << " is prime." << endl;
        }
    }
    return 0;
}
