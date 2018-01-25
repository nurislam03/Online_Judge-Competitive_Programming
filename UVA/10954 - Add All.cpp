#include <iostream>
#include <queue>
#include <cstdio>
using namespace std ;

int main()
{
    int n,d;
    while(scanf("%d",&n))
    {
        if( n == 0 ) break;
        priority_queue<int, vector<int>, greater<int> > q ;
        for( int i = 1 ; i <= n ; i++ )
        {
            scanf("%d",&d);
            q.push(d);
        }
        int x,y,res = 0,temp;
        while(q.size() != 1)
        {
            x = q.top();
            q.pop();
            y = q.top();
            q.pop();

            temp = x + y;
            q.push(temp);

            res += temp;
        }
        printf("%d\n",res);
    }
    return 0 ;
}
