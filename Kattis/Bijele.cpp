#include <iostream>
#include <cstdio>

using namespace std;
int board[] = {1,1,2,2,2,8};

int main()
{
    int x;
    for(int i = 0; i < 6; i++)
    {
        cin >> x;
        if(i == 0) cout << board[i] - x;
        else cout << " " << board[i] - x;
    }
    cout << endl;
    return 0;
}
