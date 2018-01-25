/*
 		status : incompleted :P
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
#include <vector>>
using namespace std;

#define sz 1000005
#define MAXN 100002
int DP[sz][sz];


//Time Cmpxty O(n*k) , Space Cmpxty O(n*k)
void binomialCoeff_1()
{

	for (int i = 0; i <= n; i++)
    {
		for (int j = 0; j <= min(i, k); j++)
         {
			if (j == 0 || j == i)
                DP[i][j] = 1;
			else
				DP[i][j] = DP[i - 1][j - 1] + DP[i - 1][j];
		}
	}

}








int main()
{
    int n;
    cin >> n;
    binomialCoeff_1();

    for(int i = 1; i <= n; ++i)
    {
        cin >> m;


    }

    return 0;
}
