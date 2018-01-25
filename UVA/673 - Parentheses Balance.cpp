#include<bits/stdc++.h>
using namespace std;
//int flag = 0, N = 0;
int main()
{
    int t;
    cin>>t;
    string a;
    getline(cin,a);
    for( int i = 1 ; i <= t ; i++ )
    {
        int flag = 0,NO = 0;
        getline(cin,a);
        if( a.size() == 0 )
        {
            cout<<"Yes"<<endl;
            NO++;
        }
        stack<char>s;

        for( int j = 0 ; j < a.size() ; j++ )
        {
            if( a[j] == '(' || a[j] == '[' )
            {
                s.push(a[j]);
                flag++;
            }
            if( a[j] == ')' )
            {
                if( flag == 0 && NO == 0 )
                {
                    cout<<"No"<<endl;
                    NO++;
                }
                else if( flag != 0 && s.top() == '(' )
                {
                    s.pop();
                    flag--;
                }
                else if( NO == 0 && s.top() != '(' )
                {
                    cout<<"No"<<endl;
                    NO++;
                }
              }

            else if( a[j] == ']' )
            {
                if( flag == 0 && NO == 0 )
                {
                    cout<<"No"<<endl;
                    NO++;
                }
                else if( flag != 0 && s.top() == '[' )
                {
                    s.pop();
                    flag --;
                }
                else if( NO == 0 && s.top() != '[' )
                {
                    cout<<"No"<<endl;
                    NO++;
                }
            }
        }
        if( s.empty() && NO == 0 ) cout<<"Yes"<<endl;
        else if( NO == 0 ) cout<<"No"<<endl;
    }
    return 0;
}
