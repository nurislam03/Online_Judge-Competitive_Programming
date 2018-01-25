#include <iostream>
using namespace std;
int ExpectedYear[110] = {0};

int main()
{
    int n,x,a,b;
    cin >> n;
    for( int i = 1 ; i < n ; i++ )
    {
        cin >> x;
        ExpectedYear[i+1] = ExpectedYear[i] + x ;
    }
    cin >> a >> b;
    cout << ExpectedYear[b] << endl;
    return 0;
}
