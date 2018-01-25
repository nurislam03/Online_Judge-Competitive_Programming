#include <iostream>

using namespace std;

struct node
{
    int Count;
    node *Next[2];

    node()
    {
        Count = 0;
        for( int i = 0 ; i < 2 ; i++ ) Next[i] = NULL;
    }
} *root;

/*
int  Search( int n )
{

    node *curr = root;
    for( int i = 31 ; i >= 0 ; i-- )
    {
        int x = ( n >> i ) & 1;
        if( curr->Next[x] == NULL ) return -1;
        else
        {
            curr = curr->Next[x];
        }
    }
    return curr->Count;
}
*/

void Insert( int n )
{
    node *curr = root;
    for( int i = 31 ; i >= 0 ; i-- )
    {
        int x = ( n >> i ) & 1;
        if( curr->Next[x] == NULL ) curr->Next[x] = new node();
        curr = curr->Next[x];
        curr->Count++;
    }
}

void Erase( int n )
{
    node *curr = root;
    for( int i = 31 ; i >= 0 ; i-- )
    {
        int x = ( n >> i ) & 1;
        curr = curr->Next[x];
        curr->Count--;
    }
}

int findMaXor( int n )
{
    node *curr = root;
    int ans = 0;

    for( int i = 31 ; i >= 0 ; i-- )
    {
        int x = ( n >> i ) & 1;
        int y = x ^ 1;
        ans = ans << 1;

        if( curr->Next[y] != NULL && curr->Next[y]->Count > 0 )
        {
            curr = curr->Next[y];
            ans += 1;
        }
        else curr = curr->Next[x];
    }
    return ans;
}


int main()
{
    int q;
    scanf("%d",&q);
    root = new node();
    Insert(0);

    for( int i = 1 ; i <= q ; i++ )
    {
        char c; int n;
        scanf(" %c %d",&c, &n);

        if( c == '+' ) Insert(n);
        else if( c == '-' ) Erase(n);
        else printf( "%d\n", findMaXor(n) );
    }
    return 0;
}
