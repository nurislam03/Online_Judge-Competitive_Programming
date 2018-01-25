#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);

    for( int t = 1; t <= T; t++)
    {
        char line[1000+6],temp;
        string newLine = "";
        scanf("%s",line);

        for( int i = 0; i < strlen(line) ; i++ )
        {
            if(line[i] >= 'A' && line[i] <= 'Z')
            {
                temp = line[i];
                continue;
            }

            int num = 0;
            while( isdigit(line[i]) )
            {
                num = (num * 10) + (line[i] - '0');
                i++;
            }
            i--;
            while(num--) newLine += temp;
         }
         cout << "Case " << t << ": " << newLine << endl;
    }
    return 0;
}
