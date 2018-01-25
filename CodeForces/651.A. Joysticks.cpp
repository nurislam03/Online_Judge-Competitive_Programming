#include <iostream>
using namespace std;

int main()
{
    int a1,a2,temp,Second = 0;
    cin >> a1 >> a2;

    if( a1 > a2 )
    {
        temp = a1;
        a1 = a2;
        a2 = temp;
    }

    while( a1 > 1 || a2 > 1 )
    {
        a1++;
        a2 -= 2; //cout << "a1 " << a1 << "  a2 " << a2;

        if( a1 > a2 )
        {
            temp = a1;
            a1 = a2;
            a2 = temp;
        }
        Second++; //cout << "  Second  " << Second << endl;
        if( a1 <= 0 || a2 <= 0 ) break;
    }
    cout << Second << endl;
    return 0;
}
