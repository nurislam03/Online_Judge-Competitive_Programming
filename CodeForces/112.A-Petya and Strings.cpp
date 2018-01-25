#include<bits/stdc++.h>
using namespace std;
string a,b;
int compare = 0;
int CaseConvert()
{
    for( int i= 0; i < a.size() ; i++ )
    {

        if( tolower(a[i]) > tolower(b[i]) )
        {
            compare = 1;break;
        }
        if( tolower(a[i]) < tolower(b[i]) )
        {
            compare = -1;break;
        }
    }

}

int main()
{
    getline(cin,a);
    getline(cin,b);
    CaseConvert();

    cout<<compare<<endl;
    return 0;
}
