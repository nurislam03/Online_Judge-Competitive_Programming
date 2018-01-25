#include<bits/stdc++.h>
using namespace std;

#define qq pair<int ,int>
queue < qq >q;
queue < qq >p;

int stepF[1005][1005],stepJ[1005][1005];
char str[1005][1005];

int r,c,xJ,yJ,xF,yF;

int fx[] = {-1,1,0,0};
int fy[] = {0,0,-1,1};

void init()
{
    for( int i = 0 ; i < 1005 ; i++ )
    {
       for( int j = 0 ; j < 1005 ; j++)
       {
           while( !q.empty() ) q.pop();
           while( !p.empty() ) p.pop();
           stepF[i][j] = 12345678;
           stepJ[i][j] = 12345678;
       }
    }
}

bool IsValidF( int i, int j )
{
    return ( i > -1 && i < r && j > -1 && j < c && ( str[i][j] == '.' || str[i][j] == '.' )) ? true:false;
}

bool IsValidJ( int i, int j )
{
    return ( i > -1 && i < r && j > -1 && j < c && str[i][j] == '.' ) ? true:false;
}


void FireBFS()
{
    while( !q.empty() )
    {
        int u = q.front().first;
        int v = q.front().second;
        q.pop();

        for( int k = 0 ; k < 4 ; k++ )
        {
            xF = u + fx[k];
            yF = v + fy[k];

            if( IsValidF(xF,yF) )
            {
                if(stepF[u][v]+1 < stepF[xF][yF] )
                {
                    stepF[xF][yF] = stepF[u][v] + 1;
                    q.push( make_pair(xF,yF) );
                }
            }
        }
    }
}

int JaneBFS()
{
    p.push( make_pair(xJ,yJ) );
    stepJ[xJ][yJ] = 0;

    while( !p.empty() )
    {
        int m = p.front().first;
        int n = p.front().second;
        p.pop();

        if( m == 0 || m == r-1 ) return stepJ[m][n];
        else if( n == 0 || n == c-1 ) return stepJ[m][n];
        for( int k = 0 ; k < 4 ; k++ )
        {
            xJ = m + fx[k];
            yJ = n + fy[k];

            if( IsValidJ(xJ,yJ) )
            {
                if(  ((stepJ[m][n]+1) < (stepJ[xJ][yJ])) && ((stepJ[m][n]+1) < stepF[xJ][yJ]) )
                {
                    stepJ[xJ][yJ] = stepJ[m][n] + 1;
                    p.push( make_pair(xJ,yJ) );
                }
            }
        }
    }
    return -1;
}


int main()
{
    //freopen("input.txt","r",stdin);
    int t;
    scanf("%d",&t);
    for( int i = 1 ; i <= t ; i++ )
    {
        scanf("%d%d",&r,&c);
        init();
        for( int i = 0 ; i < r ; i++ )
        {
            for( int j = 0 ; j < c ; j++ )
            {
               scanf(" %c",&str[i][j]);
                if(str[i][j] == 'F')
                {
                    xF = i; yF = j;

                    q.push( make_pair(xF,yF) );
                    stepF[xF][yF] = 0;
                }
                else if(str[i][j] == 'J')
                {
                    xJ = i;
                    yJ = j;
                }
            }
        }
        FireBFS();
        int res = JaneBFS();
        if( res == -1 ) printf("IMPOSSIBLE\n");
        else printf("%d\n",res+1);
    }
    return 0;
}

