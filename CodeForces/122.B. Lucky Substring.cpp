#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>


using namespace std;
#define ULL unsigned long long
#define LL long long
#define sz 10000
int cnt4 =0,cnt7=0;



void isLucky(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '4')
            cnt4++;
        if(s[i] == '7')
            cnt7++;
    }

}



int main()
{
    string s;
    cin >> s;

    isLucky(s); //cout << cnt4 << " " << cnt7 << endl;
    if(cnt4 == 0 && cnt7 == 0)
    {
        cout << -1 << endl;
        return 0;
    }

    if(cnt4 > cnt7 || cnt4 == cnt7)
    {
        cout << 4 << endl;
    }
    else cout << 7 << endl;

    return 0;
}
