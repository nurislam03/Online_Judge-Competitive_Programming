#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>


using namespace std;
#define LL long long
#define ULL unsigned long long
#define sz 10000
map <string, int> Map;
map <string, int> ::iterator it;
string s[111];


int main()
{
    string ans,ss;
    int i = 0,cnt = 0;
    while((cin >> ss))
    {
        Map[ss]++;

    }

   LL Max = -100000000;
   for(it = Map.begin(); it != Map.end(); ++it)
   {
       int tmp = it->second;
       if(tmp > Max)
       {
           Max = tmp;
           ans = it->first;
       }

   }
   cout << ans << endl;

    return 0;
}
