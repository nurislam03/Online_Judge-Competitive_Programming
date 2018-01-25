#include <iostream>
#include <cstring>
#include <cstdio>
#include <map>

using namespace std;
map <char, int> Map,Position;



int main()
{
    int T,n,k;
    string x;
    cin >> T;

    for(int t = 1; t <= T; t++)
    {
        cin >> n >> k >> x;
        int cnt = 0;
        Map.clear();
        Position.clear();

        for(int i = 0,j = 1; x[i]; i++,j++)
        {
            char ch = x[i];
            if(Map[ch] == 1 &&  (j - Position[ch]) <= k)
                cnt++;

            Map[ch] = 1;
            Position[ch] = j;
        }

        cout << "Case " << t << ": " << cnt << endl;
    }
    return 0;
}
