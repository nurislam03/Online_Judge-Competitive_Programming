#include <iostream>
using namespace std;

int main()
{
    int H1,M1,H2,M2;

    while(scanf("%d %d %d %d",&H1,&M1,&H2,&M2))
    {
        if(!H1 && !M1 && !H2 && !M2)
            break;

        int initTime = (H1 * 60) + M1;
        int alarmTime = (H2 * 60) + M2;

        int ans;

        if(alarmTime < initTime)
            ans = (24 * 60 ) + (alarmTime - initTime);
        else
            ans = alarmTime - initTime;

        cout << ans << endl;
    }

    return 0;
}
