
#include<bits/stdc++.h>
using namespace std;
string s;
map < char,int > node;

void DFS()
{
    stack < char > stk;
    stk.push(s[0]);
    int l = s.size();

    for(int k = 1; k < l ; k++ )
    {
        if( stk.top() != s[k] )
        {
            node[stk.top()]++;
            stk.push(s[k]);
            node[stk.top()]++;
        }
        else stk.pop(); //because, now stk.top == s[i]
    }
}

int main()
{
    int test;
    scanf("%d",&test);
    for( int i = 1 ; i <= test ; i++ )
    {
        string a;
        cin >> a;
        s = a;
        DFS();
        sort( s.begin(),s.end() );
        s.erase( unique( s.begin(),s.end() ),s.end() );
        printf("Case %d\n",i);
        for( int i = 0; i < s.size() ; i++ )
        {
            printf( "%c = %d\n",s[i],node[s[i]] );
        }
        node.clear();
    }
    return 0;
}
