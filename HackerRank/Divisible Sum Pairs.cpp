#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector < int > V;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k,x,sum =0;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        V.push_back(x);
    }
    int cnt = 0;
    for(int i = 0; i < V.size(); i++)
    {
        sum = 0;
        for(int j = i+1; j < V.size(); j++)
        {
            sum = V[i] + V[j];
            if(sum % k == 0) cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
