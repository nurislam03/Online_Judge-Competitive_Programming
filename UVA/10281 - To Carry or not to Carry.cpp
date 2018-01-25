#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a,b;
    while( scanf("%d %d",&a,&b) != EOF )
    {
        int x = a ^ b;
        cout << x << endl;
    }
    return 0;
}
