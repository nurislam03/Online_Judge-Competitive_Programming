#include<bits/stdc++.h>
using namespace std;
#define SIZE 25
#define pp pair < int ,int >
int visited[SIZE][SIZE];
int dist[SIZE][SIZE];
char str[SIZE][SIZE];
int m,n,flag = 0;

int fx[] = {-1,1,0,0};
int fy[] = {0,0,-1,1};

void init()
{
    flag = 0 ;
    for( int i = 0 ; i < m ; i++ )
    {
       for( int j = 0 ; j < n ; j++)
       {
           visited[i][j] = 0;
           dist[i][j] = 0;
       }
    }
}

bool IsValid( int i, int j )
{
    return (i > -1 && i < m && j >-1 && j<n && str[i][j] !='#' && str[i][j]!= 'm') ? true:false;
}

int BFS( int i, int j )
{
    queue < pp >q;
    q.push( make_pair(i,j) );
    visited[i][j] = 1;
    dist[i][j] = 0;

    while( !q.empty() )
    {
        int u = q.front().first;
        int v = q.front().second;

        q.pop();

        for( int k = 0 ; k < 4 ; k++ )
        {
            i = u + fx[k];
            j = v + fy[k];
            if( IsValid(i,j) )
            {
                if(visited[i][j] == 0)
                {
                    dist[i][j] = dist[u][v] + 1;
                    visited[i][j] = 1;
                    q.push( make_pair(i,j) );
                    if( str[i][j] == 'a' || str[i][j] == 'b' || str[i][j] == 'c' ) flag++;
                    if( flag == 3 ) return dist[i][j];
                }
            }
        }
    }
}

int main()
{
    int t,xx,yy; cin>>t;
    for( int i = 1 ; i <= t ; i++ )
    {
        cin>>m>>n;
        for( int ii = 0 ; ii < m ; ii++ )
        {
            for( int jj = 0 ; jj < n ; jj++ )
            {
                cin>> str[ii][jj];
                if(str[ii][jj] == 'h')
                {
                    xx = ii;
                    yy = jj;
                }

            }
        }
        init();
        int res = BFS(xx,yy);
        cout<<"Case "<<i<<": "<<res<<endl;

    }
}
