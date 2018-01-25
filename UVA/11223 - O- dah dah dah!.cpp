#include <iostream>
#include <sstream>
#include <string>
#include <map>

using namespace std;
map<string, char> Converter;


void MesasageConverter()
{
    Converter[".-"] = 'A';         Converter["-..."] = 'B';        Converter["-.-."] = 'C';
    Converter["-.."] = 'D';        Converter["."] = 'E';           Converter["..-."] = 'F';
    Converter["--."] = 'G';        Converter["...."] = 'H';        Converter[".."] = 'I';
    Converter[".---"] = 'J';       Converter["-.-"] = 'K';         Converter[".-.."] = 'L';
    Converter["--"] = 'M';         Converter["-."] = 'N';          Converter["---"] = 'O';
    Converter[".--."] = 'P';       Converter["--.-"] = 'Q';        Converter[".-."] = 'R';
    Converter["..."] = 'S';        Converter["-"] = 'T';           Converter["..-"] = 'U';
    Converter["...-"] = 'V';       Converter[".--"] = 'W';         Converter["-..-"] = 'X';
    Converter["-.--"] = 'Y';       Converter["--.."] = 'Z';
    Converter["-----"] = '0';      Converter[".----"] = '1';       Converter["..---"] = '2';
    Converter["...--"] = '3';      Converter["....-"] = '4';       Converter["....."] = '5';
    Converter["-...."] = '6';      Converter["--..."] = '7';       Converter["---.."] = '8';
    Converter["----."] = '9';
    Converter[".-.-.-"] = '.';     Converter["--..--"] = ',';      Converter["..--.."] = '?';
    Converter[".----."] = '\'';    Converter["-.-.--"] = '!';      Converter["-..-."] = '/';
    Converter["-.--."] = '(';      Converter["-.--.-"] = ')';      Converter[".-..."] = '&';
    Converter["---..."] = ':';     Converter["-.-.-."] = ';';      Converter["-...-"] = '=';
    Converter[".-.-."] = '+';      Converter["-....-"] = '-';      Converter["..--.-"] = '_';
    Converter[".-..-."] = '"';     Converter[".--.-."] = '@';
}

int main()
{

    MesasageConverter();

    int T;
    cin >> T;
    cin.ignore();

    string line, word, phrase;

    for (int t = 1; t <= T; ++t)
    {
        getline(cin, line);

        stringstream ss(line);
        int pos = 0;

        phrase = "";

        while (ss >> word)
        {
            phrase += Converter[word];
            pos += word.size() + 1;

            while (pos < line.size() && line[pos] == ' ')
            {
                phrase += ' ';
                ++pos;
            }
        }

        cout << "Message #" << t << '\n';
        cout << phrase << '\n';

        if (t != T)
            cout << '\n';
    }

    return 0;
}
