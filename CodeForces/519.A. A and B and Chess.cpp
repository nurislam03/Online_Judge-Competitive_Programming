#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;



int main()
{
    string line;
    int White = 0, Black = 0;

    for(int i = 1; i <= 8; i++)
    {
        getline(cin, line);


        for(int k = 0; line[k]; k++)
        {
            if(line[k] == 'R') White += 5;
            if(line[k] == 'r') Black += 5;

            if(line[k] == 'N' || line[k] == 'B') White += 3;
            if(line[k] == 'n' || line[k] == 'b') Black += 3;

            if(line[k] == 'Q') White += 9;
            if(line[k] == 'q') Black += 9;

            if(line[k] == 'P') White += 1;
            if(line[k] == 'p') Black += 1;
        }

    }

    if(White > Black)
        cout << "White" << endl;

    else if(Black > White)
        cout << "Black" << endl;
    else cout << "Draw" << endl;
    return 0;


}
