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
vector < int > v1,v2,v3;
map < int , int > Map;

int main()
{
    int n1,n2,n3,height;
    cin >> n1 >> n2 >> n3;
    for(int a0 = 0; a0 < n1; a0++)
    {
        cin >> height;
        v1.push_back(height);
    }
    for(int a0 = 0; a0 < n2; a0++)
    {
        cin >> height;
        v2.push_back(height);
    }
    for(int a0 = 0; a0 < n3; a0++)
    {
        cin >> height;
        v3.push_back(height);
    }
    int l = v1.size() - 1,sum = 0,res;
    for( int i = l ; i >= 0 ; i-- )
    {
        sum += v1[i];
        Map[sum]++;
    }
    int ll = v2.size() - 1; sum = 0;
    for( int i = ll ; i >= 0 ; i--)
    {
        sum += v2[i];
        Map[sum]++;
    }
    sum = 0;
    for( int i = v3.size() - 1; i >= 0 ; i-- )
    {
        sum += v3[i];
        if(Map[sum] == 2) res = sum;
    }

    cout << res << endl;
    return 0;
}
