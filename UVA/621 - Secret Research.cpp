#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int N;
    scanf("%d",&N);

    while(N--)
    {
        string S;
        cin >> S;
        int l = S.size();

        if( S[l-1] == '5' && S[l-2] == '3' ) printf("-\n");
        else if( S[l-1] == '4' && S[0] == '9' ) printf("*\n");
        else if( S[0] == '1' && S[1] == '9' && S[2] == '0' ) printf("?\n");
        else printf("+\n");
    }
    return 0;
}
