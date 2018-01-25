#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>

using namespace std;
long long ara[30] = {0};



int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        string s;
        cin >> s;
        memset(ara,0,sizeof(ara));

        long long p,q,k;
        for(int i= 0; s[i]; i++)
        {
            k = (s[i] - 'a') + 1; //cout << "debug " << k << endl;
            ara[k]++;
        }

       // cin >> p >> q;
        scanf("%lld %lld",&p,&q);

        for(int i = 1; i <= 26; i++)
        {
            ara[i] *= p;
        }

        for(int i = 1; i <= q; i++)
        {
            //cin >> k;
            scanf("%lld",&k);
            //V.push_back(k);
            bool flag = false;

            for(int kk = 1; kk <= 26; kk++)
            {
                if(ara[kk] >= k)
                {
                    char ch = ('a' + kk) - 1;
                    //cout << ch << endl;
                    printf("%c\n",ch);
                    flag = true;
                    break;
                }
                else
                {
                    k -= ara[kk];
                }
            }
            if(flag == false) printf("-1\n");
        }
    }
    return 0;
}
