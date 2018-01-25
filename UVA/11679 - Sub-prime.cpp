#include <iostream>
using namespace std;

int main()
{
    int b, n;

    while (cin >> b >> n)
    {
        if (b == 0 && n == 0) break;

        int banks[b+2],debtor, creditor, value,Count = 0;
        for( int i = 0 ; i < b ; i++ ) cin >> banks[i];

        while (n--)
        {
          cin >> debtor >> creditor >> value;
          banks[debtor - 1] -= value;
          banks[creditor - 1] += value;
        }

        for( int i = 0; i < b ; i++ )
        {
          if( banks[i] < 0 )
          {
            Count++;
            break;
          }
        }

        if (Count == 0 ) cout << "S" << endl;
        else cout << "N" << endl;
      }

  return 0;
}
