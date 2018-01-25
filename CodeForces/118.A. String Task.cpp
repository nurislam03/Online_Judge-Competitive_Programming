#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;


bool Is_vowel(char p)
{
    if(p=='a'||p=='A'||p=='e'||p=='E'||p=='i'||p=='I'||p=='o'||p=='O'||p=='u'||p=='U'||p=='y'||p=='Y')
        return true;

    return false;
}



int main()
{
    string line,ans = "";
    cin >> line;

    for(int i = 0; line[i]; i++)
    {
        char ch = line[i];
        if(Is_vowel(ch)) continue;

        ans += '.';
        if(isupper(ch)) ch = tolower(ch);
        ans += ch;
    }

    cout << ans << endl;

    return 0;
}
