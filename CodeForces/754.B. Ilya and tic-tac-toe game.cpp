#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
#define ULL unsigned long long
#define LL long long
#define sz 10000
//string a,b,c,d;
char ara[6][6];


bool IsValid(int a, int b)
{
    return ( ( a < 4 && a >= 0 ) && ( b < 4 && b >= 0 ) ) ? true:false;
}

int OK(int i, int j)
{
    if(IsValid(i,j-1) && IsValid(i, j+1) && ara[i][j-1] == 'x' && ara[i][j+1] == 'x') return 1;
    else if(IsValid(i,j-1) && IsValid(i, j-2) && ara[i][j-1] == 'x' && ara[i][j-2] == 'x') return 2;
    else if(IsValid(i,j+1) && IsValid(i, j+2) && ara[i][j+1] == 'x' && ara[i][j+2] == 'x') return 3;

    else if(IsValid(i-1,j) && IsValid(i+1, j) && ara[i-1][j] == 'x' && ara[i+1][j] == 'x') return 4;
    else if(IsValid(i-1,j) && IsValid(i-2, j) && ara[i-1][j] == 'x' && ara[i-2][j] == 'x') return 5;
    else if(IsValid(i+1,j) && IsValid(i+2, j) && ara[i+1][j] == 'x' && ara[i+2][j] == 'x') return 6;

    else if(IsValid(i-1,j-1) && IsValid(i+1, j+1) && ara[i-1][j-1] == 'x' && ara[i+1][j+1] == 'x') return 7;
    else if(IsValid(i-1,j-1) && IsValid(i-2, j-2) && ara[i-1][j-1] == 'x' && ara[i-2][j-2] == 'x') return 8;
    else if(IsValid(i+1,j+1) && IsValid(i+2, j+2) && ara[i+1][j+1] == 'x' && ara[i+2][j+2] == 'x') return 9;

    else if(IsValid(i+1,j-1) && IsValid(i-1, j+1) && ara[i+1][j-1] == 'x' && ara[i-1][j+1] == 'x') return 10;
    else if(IsValid(i+1,j-1) && IsValid(i+2, j-2) && ara[i+1][j-1] == 'x' && ara[i+2][j-2] == 'x') return 11;
    else if(IsValid(i-1,j+1) && IsValid(i-2, j+2) && ara[i-1][j+1] == 'x' && ara[i-2][j+2] == 'x') return 12;
    else return -1;


}


int main()
{


    for(int i = 0; i < 4; i++)
    {
        cin >> ara[i];
    }

    for(int i = 0; i < 4; i++)
    {
        for(int k = 0; k < 4; k++)
        {
            if(ara[i][k] == '.')
            {
                int ans = OK(i, k);
                if(ans != -1)
                {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;


    return 0;
}
