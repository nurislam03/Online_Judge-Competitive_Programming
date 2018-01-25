/*
    HackerRank  : The Maximum Subarray
    Problem Link: https://www.hackerrank.com/challenges/maxsubarray/copy-from/29966935
*/
#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
#define LL long long
LL a[100000+10];



LL maxSubArraySum(LL size)
{
    LL max_so_far = 0, max_ending_here = 0;

    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_ending_here < 0)
            max_ending_here = 0;

        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}



int main()
{
    LL tc,n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;

        LL maximum_contiguous,non_contiguous = 0;
        for(int i = 0; i < n; ++i)
        {
            //scanf("%lld",&a[i]);
            cin >> a[i];
            if(a[i] > 0) non_contiguous += a[i];
        }

        if(non_contiguous == 0)
        {
            sort(a, a+n);
            cout << a[n-1] << " " << a[n-1] << endl;
            continue;
        }
        maximum_contiguous = maxSubArraySum(n);
        cout << maximum_contiguous << " " << non_contiguous << endl;
    }

    return 0;
}
