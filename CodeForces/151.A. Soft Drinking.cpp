#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink,totalSlice,solt,NumOfToasts,EachFriendMake;

    totalDrink = k * l;
    totalDrink = totalDrink / nl;

    totalSlice = c * d;
    solt = p / np;
    NumOfToasts = min( min( totalDrink,totalSlice ) , solt );

    EachFriendMake = NumOfToasts / n;
    cout << EachFriendMake << endl;

    return 0;
}
