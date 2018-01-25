#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long num1,num2,res;

    while ( scanf("%lld %lld",&num1,&num2 ) != EOF )
    {
        cout << abs( num1 - num2 ) << endl;
    }
    return 0;
}
