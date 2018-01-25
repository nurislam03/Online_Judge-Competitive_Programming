#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

string line1, line2, line3, fake;
int xPlay = 0,oPlay = 0;


void cntXO(string str)
{
    if(str[0] == 'X') xPlay++;
    else if(str[0] == 'O') oPlay++;

    if(str[1] == 'X') xPlay++;
    else if(str[1] == 'O') oPlay++;

    if(str[2] == 'X') xPlay++;
    else if(str[2] == 'O') oPlay++;
}


bool winner(char s)
{
    return
        // row
        (line1[0] == s && line1[1] == s && line1[2] == s)||
        (line2[0] == s && line2[1] == s && line2[2] == s)||
        (line3[0] == s && line3[1] == s && line3[2] == s)||

        // column
        (line1[0] == s && line2[0] == s && line3[0] == s)||
        (line1[1] == s && line2[1] == s && line3[1] == s)||
        (line1[2] == s && line2[2] == s && line3[2] == s)||

        // diagonal
        (line1[0] == s && line2[1] == s && line3[2] == s)||
        (line1[2] == s && line2[1] == s && line3[0] == s);
}


int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i)
    {
        cin >> line1; cntXO(line1);
        cin >> line2; cntXO(line2);
        cin >> line3; cntXO(line3);

        if(i != n) cin.ignore();


        bool xWin = winner('X');
        bool oWin = winner('O');

        if((xWin && oWin) || (oWin && (xPlay > oPlay)) || (xWin && (oPlay == xPlay)))
        {
            cout << "no" << endl;
            xPlay = 0; oPlay = 0;
            continue;
        }


        if(xPlay == oPlay +1 || xPlay == oPlay)
            cout << "yes" << endl;

        else
            cout << "no" << endl;


        xPlay = 0; oPlay = 0;

    }

    return 0;
}
