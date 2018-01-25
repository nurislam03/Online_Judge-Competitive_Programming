#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;


int main()
{
    string sentence[105];
    int pos = 0,longest = 0;

    while(getline(cin, sentence[pos]))
    {
        if (sentence[pos].size() > longest)
            longest = sentence[pos].size();

        pos++;
    }
    
    for(int i = 0; i < longest; ++i)
    {
        for(int k = pos-1; k >= 0; --k)
        {
            if(sentence[k].size() > i)
                cout << sentence[k][i];
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
