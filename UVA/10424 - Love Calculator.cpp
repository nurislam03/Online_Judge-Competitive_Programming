#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int sum( string name )
{
    int sum = 0;
    for( int i = 0; i < name.size(); i++ )
    {
        if( name[i] >= 'a' && name[i] <= 'z' )
            sum += (name[i] - 'a') + 1;

        else if( name[i] >= 'A' && name[i] <= 'Z' )
            sum += (name[i] - 'A') + 1;
    }
    return sum;
}

int sumToSingleDigit( int n )
{
    while( n > 9 )
    {
        n = ( n % 10 ) + ( n / 10 );
    }
    return n;
}

int main()
{
    string name1,name2;
    while( getline(cin,name1) && getline(cin,name2))
    {
        int temp1 = sum(name1);
        int temp2 = sum(name2);

        temp1 = sumToSingleDigit(temp1);
        temp2 = sumToSingleDigit(temp2);

        double res = 0.00;
        if( temp1 <= temp2 )
            res = (double)(temp1 * 100.0 / temp2);

        else
            res = (double)(temp2 * 100.0 / temp1);

        printf("%.2lf %%\n",res);
    }
    return 0;
}
