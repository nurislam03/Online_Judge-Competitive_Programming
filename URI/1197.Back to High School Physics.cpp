#include <iostream>
using namespace std;

int main()
{
    int v,t,s;
    while ( scanf("%d %d",&v,&t) != EOF )
    {
        s = v * t;
        cout << s * 2 << endl;
    }
    return 0;
}
