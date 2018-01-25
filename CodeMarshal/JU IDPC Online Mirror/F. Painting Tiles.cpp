#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    for(int i=1;i<=t;i++){
        long long n,res,c;
        cin>>n;
          if(n<=6) cout<<"Case "<<i<<": No eggs for you! :D"<<endl;
          else if(n>=7){
                  res = ceil(n % 5);
                  cout<<"ceil="<<res<<endl;//
                  c=n/5;
                  cout<<"c   ="<<c<<endl;//


                  if(c==1){
                    cout<<"Case "<<i<<": Oh no, my eggs! :("<<endl;
                    continue;
                  }
                  else if(c%2 != 0){
                    if(res>2) cout<<"Case "<<i<<": No eggs for you! :D"<<endl;
                    else if(res>=2 && res<5) cout<<"Case "<<i<<": Oh no, my eggs! :("<<endl;
                  }
                  else if(c%2 == 0){
                    if(res>2) cout<<"Case "<<i<<": Oh no, my eggs! :("<<endl;
                    else if(res>=2 && res<5) cout<<"Case "<<i<<": No eggs for you! :D"<<endl;
                  }
        }

    }
    return 0;
}
