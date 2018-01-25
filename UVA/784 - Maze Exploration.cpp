//
//  Problem Name : 784 - Maze Exploration
//  Problem Link : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=725
//  Idea         : Flood_Fill / DFS
//  Online judge : UVa
//
//  Created by Nur Islam.
//  Copyright © 2016 nur islam. All rights reserved.
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
#define MAX 1000000000000
#define sz 200000

char line[100][100];
int fx[] = {-1,1,0,0};
int fy[] = {0,0,-1,1};



void Flood_Fill(int x, int y)
{
    if((line[x][y] == 'X') || (line[x][y] == '#'))
        return;

    line[x][y] = '#';
    for(int k = 0; k < 4; ++k)
        Flood_Fill(x+fx[k], y+fy[k]);
}


int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int k = 0;
        while(gets(line[k]))
        {
            if(line[k][0] == '_') break;
            k++;
        }


        for(int i = 0; i < k; ++i)
        {
            for(int j = 0; line[i][j]; ++j)
            {
                if(line[i][j] == '*')
                    Flood_Fill(i, j);
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

    2
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
