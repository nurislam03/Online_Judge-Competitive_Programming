#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<string>
#include<map>
using namespace std;

map <string, int> Map;


int main()
{
    int n;
    string name;
    while(scanf("%d",&n)!=EOF)
    {
        Map.clear();
        while(n--)
        {
            cin >> name;
            if(Map.find(name) == Map.end())
            {
                Map[name] = 1;
                cout << "OK" << endl;
            }
            else cout << name << Map[name]++ << endl;
        }
    }
    return 0;
}
