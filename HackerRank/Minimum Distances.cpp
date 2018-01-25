#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int ara[100010];

int main()
{
    int n,x,res = 10000000,temp = 10000000,flag = 0;
    cin >> n;
    memset(ara , 0 , sizeof(ara));
    for(int i = 1 ; i <= n ; i++)
    {
       cin >> x;
       if( ara[x] != 0 )
       {
           temp = abs(ara[x] - i);
           if( temp <= res )
           {
              res = temp;
              flag++;
           }
       }
       ara[x] = i;
    }
    if( flag == 0 ) cout << "-1" << endl;
    else cout << res << endl;
    return 0;
}
