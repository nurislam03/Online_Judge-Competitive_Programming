#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int T,n;
    cin>>T;

    for(int t = 1; t <= T; t++)
    {
        cin >> n;
        vector <int> v(n);

        for(int i = 0; i < n; i++)
            cin >> v[i];

        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            for(int k = i+1; k < n; k++)
            {
                if(v[i] > v[k])
                {
                    cnt++;
                    swap(v[i],v[k]);
                }
            }
        }
        cout <<"Optimal train swapping takes "<< cnt <<" swaps."<< endl;
    }

    return 0;
}
