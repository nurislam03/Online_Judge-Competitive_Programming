#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>

using namespace std;
map < char, int > Map;



int main()
{
    int T;
    cin >> T;
    cin.ignore();

    for( int t = 1; t <= T; t++ )
    {
        string line;
        Map.clear();
        int res = -1;
        getline(cin, line);

        for( int i = 0; i < line.size(); i++ )
        {
            if( isalpha(line[i]) )
            {
                int x = tolower(line[i]);
                Map[x]++;
                if( Map[x] >= res ) res = Map[x];
            }
        }

        map < char, int > :: iterator it;
        for( it = Map.begin(); it != Map.end(); it++ )
        {
            if( it->second == res ) printf("%c",it->first);
        }
        printf("\n");
    }
    return 0;
}
