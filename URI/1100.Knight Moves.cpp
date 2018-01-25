#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

#define qq pair < int , int >
string a,b;
int visited[9][9];
queue < qq > q;

int fx[10] = { 1,-1,1,-1,2,2,-2,-2 };
int fy[10] = { 2,2,-2,-2,1,-1,1,-1 };

bool IsValid( int a, int b )
{
    return ( ( a < 8 && a >= 0 ) && ( b < 8 && b >= 0 ) ) ? true:false;
}


int BFS(int x1, int y1, int x2, int y2)
{
    //qq source ( x1 , y1 );
    q = queue <qq> ();
    for(int k = 0;k<9;k++)
        for(int l = 0;l<9;l++)visited[k][l]=0;


    q.push( qq(x1,y1) );
    visited[x1][y1] = 0;

    while( !q.empty() )
    {
        qq top = q.front();
        q.pop();

        if(top.first == x2 && top.second == y2)
            return visited[x2][y2];

        for( int i = 0 ; i < 8 ; i++ )
        {
            int f = top.first  + fx[i];
            int s = top.second + fy[i];

            if( IsValid(f,s) )
            {
                if( visited[f][s] == 0 )
                {
                    visited[f][s] = visited[top.first][top.second]+1;
                    //qq New(f,s);
                    q.push( qq(f,s) );
                }
            }
        }
    }
}

int main()
{
    while( cin >> a >> b )
    {
        int x1 = a[0] - 'a';
        int y1 = a[1] - '0';
        y1--;
        int x2 = b[0] - 'a';
        int y2 = b[1] - '0';
        y2--;
        int result = BFS( x1 , y1 , x2 , y2 );
        cout<<"To get from "<<a<<" to "<<b<<" takes "<<result<<" knight moves."<<endl;
    }
    return 0;
}
