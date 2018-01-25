#include <iostream>
using namespace std;

int main()
{
    long n,m,c,a[22],tC = 0;
    bool On[22];

    while (cin >> n >> m >> c)
    {
        if (n==0 && m==0 && c==0) break;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            On[i] = false;
        }

        long k,max = 0,runningPower = 0;
        for (int i = 1; i <= m; i++)
        {
            cin >> k;
            if (On[k]) runningPower -= a[k];
            else {
                runningPower += a[k];
                if (max < runningPower) max = runningPower;
            }
            On[k] = !On[k];
        }

        printf("Sequence %ld\n",++tC);
        if (max > c) printf("Fuse was blown.");
        else printf("Fuse was not blown.\nMaximal power consumption was %ld amperes.",max);
        cout << endl << endl;
    }

    return 0;
}
