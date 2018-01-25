#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>


using namespace std;
#define LL long long


int main()
{
    string a,b,c;
    cin >> a;
    cin >> b;

    int len1,len2,i=0,j=0;
    len1 = a.size();
    len2 = b.size();

    while(a[i] == '0' && i < len1) i++;
    while(b[j] == '0' && j < len2) j++;

    if((len1-i) > (len2-j))
        cout << ">" << endl;
    else if((len1-i) < (len2-j))
        cout << "<" << endl;
    else
    {
        while(i < len1 && j < len2)
        {
            if(a[i] > b[j])
            {
                cout << ">" << endl;
                return 0;
            }
            else if(a[i] < b[j])
            {
                cout << "<" << endl;
                return 0;
            }

            i++; j++;
        }
        cout << "=" << endl;
    }

    return 0;
}
