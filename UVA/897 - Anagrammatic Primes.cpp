
//
//  Problem Name : 897 - Anagrammatic Primes
//  Online judge : UVa
//  Created by Nur Islam.
//

/*
    NOTE:
    * anagrammatic primes can only contain 1 3 7 9 in it.
    * any other number will result in one of the permutations
      to be divisible by something

*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)


int anagramic[] = {2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, 97, 113, 131, 199, 311, 337, 373, 733, 919, 991};
//size 22

int main()
{
    ios_base::sync_with_stdio(false);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //read("lazy_loading.txt");
    //write("solutions.txt");

    int n;
    while(scanf("%d",&n) && n)
    {
        int tmp = n, nextPower = 1;
        while(tmp)
        {
            nextPower *= 10;
            tmp /= 10;
        }

        int ans = 0;
        for(int i = 0; i < 22; i++)
        {
            if(anagramic[i] > n && anagramic[i] < nextPower)
            {
                ans = anagramic[i];
                break;
            }
        }

        printf("%d\n",ans);
    }

    return 0;
}
