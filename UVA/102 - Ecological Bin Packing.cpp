#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;
vector <int> V;
long long Total = 0;
int Move[6];
string seq[] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};


int moveCnt(int a, int b, int c)
{
    return (Total - (V[a]+V[b]+V[c]));
}


int main()
{
    int x;
    while(scanf("%d",&x) != EOF)
    {
        V.clear();
        memset(Move, 0, sizeof(Move));

        V.push_back(x);
        Total = x;

        for(int i = 1; i < 9; i++)
        {
            scanf("%d",&x);
            Total += x;
            V.push_back(x);
        }

        int ansCnt = -1;
        string ansSeq;

        Move[0] = moveCnt(0, 5, 7); //BCG
        Move[1] = moveCnt(0, 4, 8); //BGC
        Move[2] = moveCnt(2, 3, 7); //CBG
        Move[3] = moveCnt(2, 4, 6); //CGB
        Move[4] = moveCnt(1, 3, 8); //GBC
        Move[5] = moveCnt(1, 5, 6); //GCB

        for(int i = 0; i < 6; i++)
        {
            if(Move[i] < ansCnt || ansCnt == -1)
                ansCnt = Move[i], ansSeq = seq[i];
        }
        cout << ansSeq << " " << ansCnt << endl;
        //printf("%s %d\n",ansSeq, ansCnt);
    }

    return 0;
}
