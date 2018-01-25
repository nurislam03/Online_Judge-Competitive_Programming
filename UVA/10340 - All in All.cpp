#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;


int main()
{
    string t,s;
    int n,cnt;

    while(cin >> s >> t)
    {
        n = s.size();
        cnt = 0;

        for(int i = 0; i <t.size() && cnt < n; i++)
            if(s[cnt] == t[i]) cnt++;

        if(cnt == n) cout<< "Yes" <<endl;
        else cout<< "No" <<endl;
}

    return 0;
}
