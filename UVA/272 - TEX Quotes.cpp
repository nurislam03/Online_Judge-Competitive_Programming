#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;


int main()
{
    char c;
    bool flag = true;

    while( scanf("%c",&c) != EOF )
    {
        if( c == '"' )
        {
            if(flag) printf("``");
            else printf("''");

            flag = (!flag);
        }
        else printf("%c",c);
    }

    return 0;
}
