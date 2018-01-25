#include<bits/stdc++.h>

using namespace std;
int main()
{
    string a;
    cin>>a;
    sort( a.begin(),a.end() );
    a.erase( unique( a.begin(),a.end() ),a.end() );
    int k = a.size();
    if( k % 2 == 0 ) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}
