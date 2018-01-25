#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>
#include <set>
using namespace std;



int main()
{
    int n;
    string s;
    scanf("%d",&n);

    cin >> s;

    bool pran = false,in = false,out = true;
    int maxout = 0,maxin = 0;
    int inCnt = 0,outCnt = 0,cnt = 0;

    for(int i = 0; s[i]; i++)
    {
        if(s[i] == '(') pran = true;
        else if(s[i] == ')') pran = false;

        else if(isalpha(s[i]))
        {
            if(pran == false)
            {
                while(s[i] != '(' && i < s.size())
                {
                    if(s[i] == '_')
                    {
                        maxout = max(maxout, outCnt);
                        outCnt = 0;
                    }
                    else outCnt++;
                    i++;

                }
                maxout = max(maxout, outCnt);
                outCnt = 0;
                pran = true;

            }

            else if(pran == true)
            {
                while(s[i] != ')' && i < s.size())
                {
                    if(isalpha(s[i])) cnt++;
                    else if(s[i] == '_' && cnt != 0)
                    {
                        maxin += 1;
                        cnt = 0;
                    }
                    i++;
                }
                if(s[i] == ')' && cnt != 0) inCnt++;
                maxin += inCnt;
                inCnt = 0;
                cnt = 0;
                pran = false;
            }
        }

    }

    cout << maxout << " " << maxin << endl;

    return 0;
}
