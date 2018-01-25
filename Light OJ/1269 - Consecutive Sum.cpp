#include <iostream>
#include <cstdio>

using namespace std;

struct node
{
    node *Next[2];
    node()
    {
        Next[0] = NULL;
        Next[1] = NULL;
    }
} *root;


void Insert( int n )
{
    node *curr = root;
    for( int i = 31 ; i >= 0 ; i-- )
    {
        int x = (n >> i) & 1;
        if( curr->Next[x] == NULL ) curr->Next[x] = new node();
        curr = curr->Next[x];
    }
}

int FindMaXor( int n )
{
    node *curr = root;
    int ans = 0;
    for( int i = 31 ; i >= 0 ; i-- )
    {
        int x = (n >> i) & 1;
        int y = x ^ 1;
        ans = ans << 1;

        if( curr->Next[x] == NULL && curr->Next[y] == NULL ) return 0;
        if( curr->Next[y] != NULL )
        {
            curr = curr->Next[y];
            ans += 1;
        }
        else curr = curr->Next[x];
    }
    return ans;
}

int FindMinXor( int n )
{
    node *curr = root;
    int ans = 0;
    for( int i = 31 ; i >= 0 ; i-- )
    {
        int x = (n >> i) & 1;
        int y = x ^ 1;
        ans = ans << 1;

        if( curr->Next[x] == NULL && curr->Next[y] == NULL ) return 1000000000;
        if( curr->Next[x] != NULL ) curr = curr->Next[x];
        else
        {
            curr = curr->Next[y];
            ans += 1;
        }
    }
    return ans;
}


void del(node *curr)
{
      for( int i = 0; i < 2; i++ )
      {
      	if( curr->Next[i] != NULL ) del(curr->Next[i]);
      }
      delete(curr);
}

int main()
{
     int T;
     scanf("%d",&T);

     for( int t = 1 ; t <= T ; t++ )
     {
         int n,prevXor,curNum;
         root = new node();
         scanf("%d",&n);

         scanf("%d",&prevXor);
         Insert(prevXor);
         int Max = prevXor,Min = prevXor;

         for( int i = 2 ; i <= n ; i++ )
         {
             scanf("%d",&curNum);
             curNum = curNum ^ prevXor;

             Max = max( Max , curNum );
             Min = min( Min , curNum );
             //int  k = FindMaXor(curNum); cout << "  k   = " << k << endl;
             Max = max( Max , FindMaXor(curNum) );
             Min = min( Min , FindMinXor(curNum) );
             Insert(curNum);
             prevXor = curNum;
         }
         cout << "Case " << t << ": " << Max << " " << Min << endl;
         del(root);
     }
    return 0;
}
