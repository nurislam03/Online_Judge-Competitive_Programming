/*
    solution not completed.
*/


#include <iostream>
using namespace std;

#define sz 1500
int uglyNumber[sz+10] = {0};


int divide(int n, int d)
{
    while(n % d == 0)
        n /= d;

    return n;
}


bool isUgly(int n)
{
    n = divide(n,2);
    n = divide(n,3);
    n = divide(n,5);

    if(n == 1) return true;
    return false;
}



int main()
{
    int pos,i;
    uglyNumber[1] = 1;

    for(pos = 2,i = 2; pos <= 1500; ++i)
    {
       if(isUgly(i) == true)
        uglyNumber[pos++] = i;
    }


    int n;
    while(scanf("%d",&n))
    {
        if(n == 0) break;
        cout << uglyNumber[n] << endl;
    }

    return 0;
}
