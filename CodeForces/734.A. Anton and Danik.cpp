#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;
#define LL long long
#define ULL unsigned long long
#define sz 10000


int main()
{

    int n,x,a,b;
    scanf("%d",&n);

    string s;
    cin >> s;
    int an = 0,dn = 0;
    for(int i = 0; s[i]; i++)
    {
        if(s[i] == 'A')an++;
        else  dn++;
    }
    if(an == dn ) printf("Friendship\n");
    else if(an > dn) printf("Anton\n");
    else if(dn > an) printf("Danik\n");

    return 0;
}
