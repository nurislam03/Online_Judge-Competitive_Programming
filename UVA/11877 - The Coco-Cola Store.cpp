#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    int n ;
    while( scanf("%d",&n) )
    {
        if( n == 0 ) break;
        int res = 0,temp;
        while(n > 1)
        {
            temp = n / 3;
            res += temp;

            if( n % 3 != 0 ) temp += n % 3;
            if( temp == 2 ) temp++;
            n = temp;
        }
        cout << res << endl;
    }
    return 0;
}
