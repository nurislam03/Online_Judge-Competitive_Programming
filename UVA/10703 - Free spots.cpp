#include <iostream>

using namespace std;
bool taken[505][505];

int main()
{
    int W, H, N;
    while(cin >> W >> H >> N)
    {
        if(!W && !H && !N)
            break;

        memset(taken, true, sizeof(taken));
        while (N--)
        {
            int X1, Y1, X2, Y2;
            cin >> X1 >> Y1 >> X2 >> Y2;

            if(X1 > X2) swap(X1, X2);
            if(Y1 > Y2) swap(Y1, Y2);

            for(int i = X1; i <= X2; i++)
            {
                for(int j = Y1; j <= Y2; j++)
                    taken[i][j] = false;
            }
        }


        int ans = 0;
        for(int i = 1; i <= W; i++)
        {
            for(int j = 1; j <= H; j++)
                if(taken[i][j]) ans += 1;
        }


        if (ans == 0)
            cout << "There is no empty spots.\n";
        else if (ans == 1)
            cout << "There is one empty spot.\n";
        else
            cout << "There are " << ans << " empty spots.\n";
    }
}
