#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
long long Fact[30];
int letterCnt[30];

void factorial()
{
    Fact[0] = 1;
    Fact[1] = 1;
    for(int i = 2; i <=20; i++)
        Fact[i] = Fact[i-1]*i;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //read("input.txt");
    //write("output.txt");

    int tCase;
    scanf("%d",&tCase);
    factorial();

    char word[30];
    for(int t = 1; t <= tCase; t++)
    {
        scanf("%s",word);
        int len = strlen(word);

        memset(letterCnt, 0, sizeof(letterCnt));
        for(int i = 0; i < len; i++)
        {
            char ch = word[i];
            int tmp = ch - 'A';
            letterCnt[tmp]++;
        }

        long long tot = Fact[len];
        for(int i = 0; i < 26; i++)
        {
            //if(letterCnt[i] > 1)
                tot /= Fact[letterCnt[i]];
        }

        printf("Data set %d: %lld\n",t, tot);
    }

    return 0;
}
