

#include <cstdio>
#include <sstream>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <climits>
#include <iomanip>
#include <cassert>
#include <algorithm>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <iostream>
#include <fstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <iterator>
#include <functional>
using namespace std;

void test(int a,int b,int c)
{
       if( c%a==0 || c%b==0){
           cout<<"Yes"<<endl;
           return ;
        }
        else if(a>c && b>c){
            cout<<"No"<<endl;
            return ;
        }
        else if(a<=c && b>c){
            if(c%a==0){
               cout<<"Yes"<<endl;
               return ;
            }
            else{
                cout<<"No"<<endl;
                return ;
            }
        }

        else if(b<=c && a>c){
            if(c%b==0){
               cout<<"Yes"<<endl;
               return ;
            }
            else{
                cout<<"No"<<endl;
                return ;
            }
        }

        else if(a<c && b<c){
            if(c<(a+b)){
               cout<<"No"<<endl;
               return ;
            }
            else if(c==(a+b)){
               cout<<"Yes"<<endl;
               return ;
            }
            else if(c%a==0){
              cout<<"Yes"<<endl;
              return;
            }
            else if(c%b == 0){
                cout<<"Yes"<<endl;
                return ;
            }
        }

        int s = (c-(a+b));

        if(a>s && b>s){
            cout<<"No"<<endl;
            return ;
        }

        else if(s%a==0 || s%b==0){
             cout<<"Yes"<<endl;
             return ;
        }

        else if(a<s && b<s){
            if(s<(a+b)){
               cout<<"No"<<endl;
               return ;
            }
            else test(a,b,s);
        }

        else cout<<"No"<<endl;
}

int main()
{
    int a,b,c;

    cin>>a>>b>>c;
    test(a,b,c);

    return 0;
}
