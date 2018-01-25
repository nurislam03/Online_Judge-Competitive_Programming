#include<iostream>
#include<cmath>
#include <iomanip>
const double pi = 2*acos(0.0);
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        double r;
        double result;
        cin>>r;
        result =((r+r)*(r+r))-((pi)*(r*r));
        cout<<"Case "<<i+1<<": "<<fixed << setprecision(2) <<result+0.000000000<<endl;
    }
    return 0;
}
