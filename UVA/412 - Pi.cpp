#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <iomanip> // for setprecision.

using namespace std;

#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define all(ar) ar.begin(), ar.end()
#define LL long long
#define Size 100005
#define INF (1<<30)
#define MOD 131071


vector<int> v;

int GCD(int a , int b)
{
    if(b == 0) return a;
    return GCD(b, a%b);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //read("input.txt");
    //write("output.txt");

    int N;
    while(true)
    {
        scanf("%d",&N);
        if(N<=1 || N>=50) break;

        v.clear();
        int x;
        for(int i=0; i<N; i++)
        {
            scanf("%d",&x);
            v.push_back(x);
        }

        int cnt = 0;
        int tot = N*(N-1)/2;

        for(int i=0; i < N-1; i++)
        {
            for(int j=i+1; j<N; j++)
                if(GCD(v[i], v[j]) ==1 ) cnt++;
        }

        if(cnt==0) cout << "No estimate for this data set." << endl;
        else cout << fixed << setprecision (6) << sqrt(6.0*tot/cnt) << endl;
}


    return 0;
}
