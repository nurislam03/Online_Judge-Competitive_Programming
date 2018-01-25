#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <cctype>
#include <sstream>

using namespace std;

int main()
{
    string line,word;
    char temp;

    while(getline(cin, line))
    {
        if( line == "*" ) break;
        stringstream ss (line);
        bool flag = true,res = true;

        while( ss >> word )
        {
            if(flag)
            {
                temp = word[0];
                temp = toupper(temp);
                flag = false;
            }
            else
            {
                if( toupper(word[0]) != temp )
                {
                    printf("N\n");
                    res = false;
                    break;
                }
            }
        }
        if(res) printf("Y\n");
    }
    return 0;
}
