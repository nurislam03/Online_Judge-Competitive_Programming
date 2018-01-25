#include <iostream>
#include <cstdio>
#include <cstring>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;
int mark[1000]={0};


int main()
{
    string s;
    cin >> s;

    if(s.size() < 26)
    {
        cout << "-1" << endl;
        return 0;
    }

    set <char> CC;
    bool flagOK = false;
    int QstnCnt = 0;

    for(int k = 0; k < s.size(); k++)
    {
        if(k + 25 >= s.size())
        {
            cout << "-1" << endl;
            return 0;
        }

        CC.clear();
        flagOK = false;
        QstnCnt = 0;

        for(int l = k; l <= k+25; l++)
        {
            if(s[l] == '?')
                QstnCnt++;
            else
                CC.insert(s[l]);
        }


        if((CC.size()+ QstnCnt) == 26)
        {
            set <char> ::iterator it;
            for(it = CC.begin(); it != CC.end(); it++)
            {
                char element = *it;
                mark[element] = 1;
            }

            vector <char> nai;
            for(char i = 'A'; i <= 'Z'; i++)
                if(!mark[i]) nai.push_back((char)(i));


            int ind = 0;
            for(int i = k; i <= k + 25; i++)
            {
                if(s[i] == '?')
                {
                    s[i] = nai[ind];
                    ind++;
                }
            }
            flagOK = 1;
                break;
        }

    }



    if(flagOK)
    {
        for(int k = 0; k < s.size(); k++){
            if(s[k] == '?')s[k] = 'A';
        }
        cout << s << endl; return 0;
    }

    cout << "-1" << endl;
    return 0;

}
