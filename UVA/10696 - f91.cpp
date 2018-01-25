#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

long long f91(long long n)
{
      if(n > 100) return n - 10;
      else return f91(f91(n+11));
}


int main()
{
      int n;
      while(scanf("%d",&n) && n)
      {
            long long ans = 0;
            if(n <= 100)
            {
                  ans = f91(n);
            }
            else ans = n - 10;

            cout << "f91(" << n << ") = " << ans << endl;
      }

      return 0;
}
