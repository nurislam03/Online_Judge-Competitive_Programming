#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string line,ans = "hello";
    cin >> line;

    for(int i = 0,k = 0; line[i]; ++i)
    {
        if(line[i] == ans[k]) k++;
        if(k == 5)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}
