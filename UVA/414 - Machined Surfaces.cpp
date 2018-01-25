#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>

using namespace std;


int main()
{
    int N;
    while(scanf("%d",&N) && N)
    {
        string line;
        int totB = 0, minB = -1;
        cin.ignore();

        for(int i = 1; i <= N; i++)
        {
            getline(cin, line);
            int cntB = 0;

            for(int k =0; line[k]; k++)
                if(line[k] != 'X') cntB++;

            totB += cntB;
            if(cntB < minB || minB == -1) minB = cntB;
        }

        int ans = totB - (minB*N);
        printf("%d\n",ans);
    }

    return 0;
}
