#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

int res,len;

struct node
{
    int Repeat;
    node *Next[26+2];

    node()
    {
        Repeat = 0;
        for( int i = 0 ; i < 26 ; i++ ) Next[i] = NULL;
    }
}*root;

void Insert(char *str, int len )
{
    node *curr = root;
    for( int i = 0 ; i < len ; i++ )
    {
        int id = str[i] - 'a';
        if( curr->Next[id] == NULL ) curr->Next[id] = new node();
        curr = curr->Next[id];
        curr->Repeat++;
    }
}

int Search(char *str, int len )
{
    node *curr = root;
    for( int i = 0 ; i < len ; i++ )
    {
        int id = str[i] - 'a';
        if( curr->Next[id] == NULL ) return -1;
        curr = curr->Next[id];
    }
    return curr->Repeat;
}


int main()
{
    int n;
    cin >> n;
    root = new node();

    for( int i = 1 ; i <= n ; i++ )
    {
        char command[30],str[21+2];
        scanf("%s %s",command,str);
        len = (int) strlen(str);

        if( command[0] == 'a' ) Insert( str, len );
        else
        {
            res = Search( str , len );
            if( res == -1 ) cout << 0 << endl;
            else cout << res << endl;
        }
    }
    return 0;
}
