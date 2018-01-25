#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;


int main()
{
    string s;
    cin >> s;

    int AB = 0, BA = 0, ABA = 0, BAB = 0, len = s.size();
    for(int i = 0; i < len-1; i++)
    {
        if(s[i] == 'A' && i+2 < len && (s[i+1] == 'B' && s[i+2] == 'A'))
        {
            i += 2;
            ABA++;
        }

        else if(s[i] == 'B' && i+2 < len && (s[i+1] == 'A' && s[i+2] == 'B'))
        {
            i += 2;
            BAB++;
        }

        else if(s[i] == 'A' && AB == 0 && s[i+1] == 'B')
        {
            i++;
            AB++;
        }
        else if(s[i] == 'B' && BA == 0 && s[i+1] == 'A')
        {
            i++;
            BA++;
        }
    }
    //cout << AB  << " " << BA << " " << ABA << " " << BAB << endl;
    
    if((AB && BA) ||(ABA && BAB) || ((ABA || BAB) && (AB || BA)) || (ABA >= 2 || BAB >= 2))
         cout << "YES" << endl;

    else cout << "NO" << endl;

    return 0;
}
