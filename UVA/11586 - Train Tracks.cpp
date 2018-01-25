#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    while(T--)
    {
        int Mcount = 0, Fcount = 0;
        string temp;
        string :: iterator it;

        getline(cin, temp);

        for ( it = temp.begin(); it != temp.end(); it++)
        {
            if (*it == 'M') Mcount++;
            else if (*it == 'F') Fcount++;
        }

        if ( Mcount == Fcount && temp.size() > 3 )
            cout << "LOOP\n";
        else
            cout << "NO LOOP\n";
    }
    return 0;
}
