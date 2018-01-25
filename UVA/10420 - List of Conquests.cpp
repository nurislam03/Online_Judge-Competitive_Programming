
#include <iostream>
#include <map>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int  n;
    cin >> n;

    map<string, int> Map;
    map<string, int> ::iterator it;

    string Country;
    char Girl[100];

    while (n--)
    {
        cin >> Country;
        Map[Country]++;
        gets(Girl);
    }

    for ( it = Map.begin(); it != Map.end(); it++ )
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
