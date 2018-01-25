#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;
vector < int > V;



int TrailingZeroes(int n)
{
    int res = 0;
    while( n )
    {
        res += n / 5;
        n /= 5;
    }
    return res;
}


int BinarySearch( int Min, int Max, int Target )
{
    int Mid,res = 0;
    while( Min <= Max )
    {
        Mid = ( Min + Max ) / 2 ;
        int NumOfZeros = TrailingZeroes(Mid);

        if( NumOfZeros >= Target )
        {
            if( NumOfZeros == Target ) res = Mid;
            Max = Mid - 1;
        }
        else Min = Mid + 1;
    }

    return res;
}

int main()
{
    int k, num;
    scanf("%d",&k);
    num = BinarySearch(1, 1000000000, k);

    while(TrailingZeroes(num) == k)
    {
        V.push_back(num);
        num++;
    }

    printf("%d\n",(int)V.size());
    for(int i = 0; i < V.size(); i++)
    {
        if(i == 0) printf("%d",V[i]);
        else printf(" %d",V[i]);
    }
    printf("\n");

    return 0;
}
