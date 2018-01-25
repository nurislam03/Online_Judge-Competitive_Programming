#include <stdio.h>

int main()
{
    int t, test = 0;
    scanf("%d", &t);

    while(t--)
    {
        int nowD, nowM, nowY;
        int birthD, birthM, birthY;

        scanf("%d/%d/%d", &nowD, &nowM, &nowY);
        scanf("%d/%d/%d", &birthD, &birthM, &birthY);

        int age = nowY - birthY;
        if(birthM > nowM)   age--;
        if(birthM == nowM && birthD > nowD) age--;

        printf("Case #%d: ", ++test);

        if(age < 0)
            puts("Invalid birth date");
        else if(age > 130)
            puts("Check birth date");
        else
            printf("%d\n", age);
    }
    return 0;
}


/*
// another solution

#include <iostream>
using namespace std;

int diff(int nowD, int nowM, int nowY,
         int birthD, int birthM, int birthY)
{
    return nowD + 30 * nowM + 360 * nowY
           - birthD - 30 * birthM - 360 * birthY;
}

int main()
{
    size_t Case = 1;
    size_t T;
    cin >> T;
    while ( T-- )
    {
        int nowD, nowM, nowY;
        int birthD, birthM, birthY;

        scanf("%d/%d/%d", &nowD, &nowM, &nowY);
        scanf("%d/%d/%d", &birthD, &birthM, &birthY);

        cout << "Case #" << Case++ << ": ";

        int dateGap = diff(nowD, nowM, nowY, birthD, birthM, birthY);

        if (dateGap < 0)
            cout << "Invalid birth date" << endl;
        else if (dateGap / 360 > 130)
            cout << "Check birth date" << endl;
        else
            cout << dateGap / 360 << endl;
    }
    return 0;
}
*/
