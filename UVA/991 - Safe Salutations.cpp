//
//  Problem Name : 991 - Safe Salutations
//  Online judge : UVa
//  Idea : Catalan Numbers
//  resourse : http://nsups.herokuapp.com/notebook/view-note/catalan-numbers
//


#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>

using namespace std;
#define LL long long
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)



int Catalan_Numbers(int n)
{
    if(n == 0) return 1;
    if(n == 1) return 1;
    return (((4*(n-1)+2) * Catalan_Numbers(n-1))/((n-1)+2));
}


int main()
{
    //read("input.txt");
    //write("output.txt");

    int n,cnt = 0;
    while(scanf("%d",&n) != EOF)
    {
        int ans = Catalan_Numbers(n);

        if(cnt) printf("\n");
        printf("%d\n",ans);
        cnt++;
    }

    return 0;
}

/*
    Catalan_Numbers(n = 0, 1, 2, ....) ==  1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786, 208012, .....

*/
