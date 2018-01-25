
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
string Activity;


bool solve()
{
  bool CC = false, EE = false, SS = false;
  for(int i = 0; i < Activity.size(); i++)
  {
      if(Activity[i] == 'C')
      {
          if(EE || SS) return false;
          else CC = true;
      }
      else if(Activity[i] == 'E')
      {
          if(SS) return false;
          else EE = true;
      }
      else SS = true;
  }

  return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //read("input.txt");
    //write("output.txt");

    int tCase;
    //scanf("%d",&tCase); // got WA for using scanf. (mysterious)
    cin >> tCase;
    while(tCase--)
    {
        cin >> Activity;
        bool ans = solve();

        if(ans) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}
