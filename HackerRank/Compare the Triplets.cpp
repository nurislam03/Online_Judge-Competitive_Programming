#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define sz 100
int a[5],b[5];

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x;

    for(int i = 0; i < 3; i++)
    {
        scanf("%d",&x);
        a[i] = x;
    }

    for(int i = 0; i < 3; i++)
    {
        scanf("%d",&x);
        b[i] = x;
    }

    int alic = 0,bob = 0;
    for(int i = 0; i < 3; i++)
    {
        if(a[i] == b[i]) continue;

        if(a[i] > b[i]) alic++;
        else bob++;
    }
    cout << alic << " " << bob << endl;

    return 0;
}
