#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double p;
    int t,v;
    cin>>p>>t>>v;
    double price;
    price =(p+((t*p)/100)+((p*v)/100));
    price= int (price+0.5);
    cout<<"The final price of the meal is $"<<price<<"."<<endl;

    return 0;
}
