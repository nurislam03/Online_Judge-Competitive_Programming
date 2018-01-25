#include<iostream>
using namespace std;

int main(void)
{
    int x,n,m,k,a;

    while(1)
    {
        int tot,a,b,res;
        cin >> tot >> a >> b;

        if(!tot && !a && !b)
            break;

        int tmp = (tot / 2) + 1;

        if(tmp + b > tot) res = -1;
        else if(a >= tmp) res = 0;
        else res = tmp - a;

        cout << res << endl;
    }

    return 0;
}
