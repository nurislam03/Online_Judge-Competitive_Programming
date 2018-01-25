
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
#define sz 1000
int data[sz+10][sz+10];

int main()
{
    int n,q,x,y;
    scanf("%d %d",&n,&q);
    for(int i = 1; i <= q; i++)
    {
        scanf("%d %d",&x,&y);
        if((data[x][y] == 1) || (data[y][x] == 1))
        {
            printf("old\n");
        }
        else
        {
            printf("new\n");
            data[x][y] = 1;
            data[y][x] = 1;
        }
    }
    return 0;
}
