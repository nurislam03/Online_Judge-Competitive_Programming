#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int a[10005];
int b[10005];


int main()
{
    int n,q,t,tc=0;
    while(1){
        tc++;
        int s = 0,c = 0 ;
        cin >> n >> q;
        if( n ==0 && q == 0) return 0;
        memset( a , 0 , sizeof( a ) ) ;

        for( int i = 0; i < n; i++){
            cin>>t;
            a[t]++;
        }
        for( int i = 0; i < 10005; i++ ){
            for( int j = 0; j < a[i]; j++ ){
               b[s]=i;
               s++;
            }
        }
        for( int i = 0; i < q; i++ ){
            int check = 0;
            int l;
            cin>>l;
            if ( c == 0 ) {
                cout<<"CASE# "<<tc<<":"<<endl;
                c++;
            }
            for( int j = 0 ; j < n ; j++ ) {
                if( l == b[j] && check == 0) {
                    cout<<l<<" found at "<<j+1<<endl;
                    check++;
                }
            }
            if(check == 0){
                    cout<<l<<" not found"<<endl;
                    check++;
            }
        }
     }
    return 0;
}
