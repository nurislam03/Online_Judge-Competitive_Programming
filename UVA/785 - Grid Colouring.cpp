//
//  Problem Name : 785 - Grid Colouring
//  Idea         : Flood_Fill / DFS
//  Online judge : UVa
//
//  Created by Nur Islam.
//  Copyright © 2017 nur islam. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
#define LL long long
#define MAX 10000000
#define sz 200000

char line[40][100];
int visit[40][100];
int fx[] = {-1,1,0,0};
int fy[] = {0,0,-1,1};



void Flood_Fill(int x, int y, char ch)
{
    if(line[x][y] == 'X' || visit[x][y] == 1)
        return;

    line[x][y] = ch;
    visit[x][y] = 1;
    for(int k = 0; k < 4; ++k)
        Flood_Fill(x+fx[k], y+fy[k], ch);
}


int main()
{
    while(gets(line[0]))
    {
        int k = 1;
        while(gets(line[k]))
        {
            if(line[k][0] == '_') break;
            k++;
        }
        memset(visit, 0, sizeof(visit));

        for(int i = 0; i < k; ++i)
        {
            for(int j = 0; line[i][j]; ++j)
            {
                if(line[i][j] != 'X' && line[i][j] != ' ')
                {
                    if(visit[i][j] == 1) continue;
                    Flood_Fill(i, j, line[i][j]);
                }
            }
        }

        for(int i = 0; i <= k; ++i)
        {
            puts(line[i]);
        }

    }

    return 0;
}

/*
        Input File

XXXXXXXXX
X   X   X
X *     X
X   X   X
XXXXXXXXX
X   X
X   X
X   X
XXXXX
_____
XXXXX
X   X
X * X
X   X
XXXXX
_____

*/
