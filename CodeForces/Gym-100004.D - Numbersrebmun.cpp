/*
    Problem Link : http://codeforces.com/gym/100004
    Status       : accepted.
*/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;


char makeString(char ch)
{
    if(islower(ch)) ch = toupper(ch);

    if(ch== 'A' || ch == 'B' || ch == 'C')
        return '2';

    else if(ch== 'D' || ch == 'E' || ch == 'F')
        return '3';

    if(ch== 'G' || ch == 'H' || ch == 'I')
        return '4';

    if(ch== 'J' || ch == 'K' || ch == 'L')
        return '5';

     else if(ch== 'M' || ch == 'N' || ch == 'O')
        return '6';

    if(ch== 'P' || ch == 'Q' || ch == 'R' || ch == 'S')
        return '7';

    if(ch== 'T' || ch == 'U' || ch == 'V')
        return '8';

     else if(ch== 'W' || ch == 'X' || ch == 'Y' || ch == 'Z')
        return '9';

}


bool isPal(string x)
{
    int i = 0,j = x.size();
    j -= 1;

    while(i != j && i <= j)
    {
        char a = x[i];
        char b = x[j];
        if(isupper(a)) a = tolower(a);
        if(isupper(b)) b = tolower(b);

        if(a != b)
            return false;
        i++; j--;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;
    string x;

    while(n--)
    {
        cin >> x;

        string xx = "";
        for(int i = 0; x[i]; i++)
        {
            xx += makeString(x[i]);
        }

        bool res = isPal(xx);
        if(res) cout  << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
