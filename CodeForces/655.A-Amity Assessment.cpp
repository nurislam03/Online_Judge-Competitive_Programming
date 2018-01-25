#include<bits/stdc++.h>
using namespace std;
char x[5],y[5],m[5],n[5],id = 0,id2 = 0;
char p[20],q[10];
int tang1=0,ponk=0;
void Do()
{
        if( x[0] != 'X' )
        {
            p[id] = x[0];id++;
        }

        if( x[1] != 'X' )
        {
            p[id] = x[1];id++;
        }
        if( y[0] != 'X' )
        {
            p[id] = y[0];id++;
        }
        if( y[1] != 'X' )
        {
            p[id] = y[1];id++;
        }
        ////////////
        if( m[0] != 'X' )
        {
            q[id2] = m[0];id2++;
        }

        if( m[1] != 'X' )
        {
            q[id2] = m[1];id2++;
        }
        if( n[0] != 'X' )
        {
            q[id2] = n[0];id2++;
        }
        if( n[1] != 'X' )
        {
            q[id2] = n[1];id2++;
        }
}
void work()
{
    p[3] = p[0];
    p[4] = p[1];
    p[5] = p[2];
    p[6] = p[0];
    p[7] = p[1];
    p[8] = p[2];

}

int main()
{

    cin>>x;
    cin>>y;
    cin>>m;
    cin>>n;
    Do();
    work();
    for(int i = 0; i< 6; i++ )
    {
        if( p[i] == q[0] ) tang1++;
        if( p[i] == q[0] && tang1 == 2 )
        {
            if( p[i+1] ==q[1] && p[i+2] == q[2] )
            {
                cout<<"YES"<<endl; ponk++;
            }
            else if( p[i-1] ==q[1] && p[i-2] == q[2] )
            {
                cout<<"YES"<<endl;ponk++;
            }
        }
    }
    if( ponk == 0 ) cout<<"NO"<<endl;
    return 0;
}
