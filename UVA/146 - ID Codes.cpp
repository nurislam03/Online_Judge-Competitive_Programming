#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    string line;
    while( getline( cin, line) )
    {
        if(line == "#") break;

        if( next_permutation(line.begin(), line.end()) )
            cout << line << endl;

        else
            cout << "No Successor" << endl;
    }
    return 0;
}
