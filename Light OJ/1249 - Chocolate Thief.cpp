#include<bits/stdc++.h>
using namespace std;

int main()
{
     int tt;
     string name,Thief,Victim;
     cin >> tt;

     for( int t = 1 ; t <= tt ; t++ )
     {
         int n,length,width,height;
         long long Volume,MaxVolume = 0,MinVolume = 999999;
         cin >> n;

         for( int i = 0 ; i < n ; i++ )
         {
             cin>>name>>length>>width>>height;
             Volume = ( length * width * height );

             if( MaxVolume <= Volume )
             {
                 MaxVolume = Volume;
                 Thief = name;
             }

             if( MinVolume >= Volume )
             {
                 MinVolume = Volume;
                 Victim = name;
             }
         }

         if( MaxVolume == MinVolume ) cout<<"Case "<<t<<": no thief"<<endl;
         else cout<<"Case "<<t<<": "<<Thief<<" took chocolate from "<<Victim<<endl;
     }
     return 0;
}
