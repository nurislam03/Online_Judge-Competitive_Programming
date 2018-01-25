#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

/*
qwertyuiop
asdfghjkl;
zxcvbnm,.
*/

char keyboard[] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};

int main()
{
    char ch;
    cin >> ch;

    string s,New = "";
    cin >> s;

    for(int i = 0; s[i]; i++)
     {
        int p = 0; char tmp;
        while(keyboard[p] != s[i]) p++;

        if(ch == 'R') p--;
        else p++;

        tmp = keyboard[p] ;
        cout << tmp ;
     }

     cout << endl;
    return 0;
}
