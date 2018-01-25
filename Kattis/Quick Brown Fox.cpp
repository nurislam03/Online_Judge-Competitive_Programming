#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;
int ara[100];
char a[] = {',','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};




int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for(int t = 1; t <= n; t++)
    {
        string line;
        getline(cin, line);

        for(int i = 0 ; i <= 30; i++)
                ara[i] = 0;

        int k;
        for(int i = 0; line[i]; ++i)
        {
            if((line[i] >= 'a' && line[i] <= 'z'))
            {
                k = line[i] - 'a' + 1;
                ara[k] = 1;
            }
            else if((line[i] >= 'A' && line[i] <= 'Z'))
            {
                k = line[i] - 'A' + 1;
                ara[k] = 1;
            }
        }


        bool res = true;
        string ss = "";

        for(int i = 1; i <= 26; i++)
        {

            if(ara[i] == 0)
            {
                char ch;
                ch = a[i];
                ss += ch;

                res = false;
            }
        }

        if(res) cout << "pangram" << endl;
        else
            cout << "missing " << ss << endl;
    }


    return 0;
}
