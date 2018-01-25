#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;


int main()
{
    int n; cin >> n;
    cin.ignore();

    string sentence,says = "Simon says ";
    for(int i = 0; i < n; i++)
    {
        getline(cin,sentence);

        bool yes = true;
        for(int j = 0; j < says[j]; j++)
        {
            if(sentence[j] != says[j])
                yes = false;
        }

        if(yes)
        {
            for(int k = 11; k < sentence[k]; k++)
                printf("%c",sentence[k]);

            printf("\n");
        }
    }


    return 0;
}
