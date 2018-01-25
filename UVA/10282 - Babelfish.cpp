#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

map <string, string> dictionary;


int main()
{
    dictionary.clear();
    string line, foreignWord, englishWord;
    while(getline(cin, line) && line != "")
    {
        stringstream ss(line);
        ss >> englishWord >> foreignWord;

        dictionary[foreignWord] = englishWord;
    }

    while(getline(cin, line))
    {
        if(dictionary.find(line) != dictionary.end())
            cout << dictionary[line] << endl;
        else cout << "eh" << endl;
    }
    return 0;
}
