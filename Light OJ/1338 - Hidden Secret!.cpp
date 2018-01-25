#include<bits/stdc++.h>
using namespace std;

string Name1,Name2;
int Missing = 0,ara1[200];

int HiddenName()
{
    char temp;
    for( int i = 0 ; i < Name1.size() ; i++ )
    {
        temp = Name1[i];
        if( temp >= 'A' && temp <= 'Z' || temp >= 'a' && temp <= 'z' )
        {
            if( islower(temp) ) temp = toupper(temp);
            ara1[temp]++;
        }
    }

    for( int i = 0 ; i < Name2.size() ; i++ )
    {
        temp = Name2[i];
        if( temp >= 'A' && temp <= 'Z' || temp >= 'a' && temp <= 'z' )
        {
            if( islower(temp) ) temp = toupper(temp);
            if( ara1[temp] != 0 ) ara1[temp]--;
            else Missing++;
        }
    }

    if( Missing == 0 ) return 1;
    else
    {
        for( int i = 0 ; i < 200 ; i++ )
        {
            if( ara1[i] != 0 ) return -1;
        }
        return 1;
    }
}


int main()
{
   int tt; cin >> tt;
   for( int t = 1 ; t <= tt ; t++ )
   {
    memset( ara1, 0 , sizeof(ara1) );
    int res,x;

    scanf("%d",&x);
    getline(cin,Name1);
    scanf("%d",&x);
    getline(cin,Name2);

    res = HiddenName();
    if( res == 1 )cout <<"Case "<<t<<": "<<"Yes"<< endl;
    else cout <<"Case "<<t<<": "<<"No"<< endl;
   }
    return 0;
}
