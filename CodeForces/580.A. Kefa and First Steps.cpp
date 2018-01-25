#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int arr[100010],n,Max = 0,length = 0,T=0,flag = 0;
    cin>>n;
    for( int i = 0 ; i < n ; i++ )
    {
        cin>>arr[i];
        if(arr[i] >= T )
        {
            length++;
            T = arr[i];
            if( Max < length ) Max = length;
        }
        else
        {
            length = 1;
            T = arr[i];
            flag++;
        }
    }
    cout<<Max<<endl;
    return 0;
}
