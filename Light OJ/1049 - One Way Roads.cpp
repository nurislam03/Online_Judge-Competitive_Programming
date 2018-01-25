

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define MAX 10000000
#define SZ 100
bool IncomingRoad[SZ+10];
bool OutgoingRoad[SZ+10];



int main()
{
    //ios_base::sync_with_stdio(false); //use only cin/cout
    //cin.tie(NULL); cout.tie(NULL);    //use  only cin/cout
    //read("input.txt");
    //write("output.txt");

    int tCase,n;
    scanf("%d",&tCase);

    for(int t = 1; t <= tCase; t++)
    {
        int n, x, y, cost;
        scanf("%d",&n);

        memset(IncomingRoad, false, sizeof IncomingRoad);
        memset(OutgoingRoad, false, sizeof OutgoingRoad);

        int clockWiseCost = 0;
        int antiClockWiseCost = 0;

        for(int i = 1; i <= n; i++)
        {
            scanf("%d %d %d",&x,&y,&cost);

            if(!OutgoingRoad[x] && !IncomingRoad[y])
            {
                OutgoingRoad[x] = true;
                IncomingRoad[y] = true;
                antiClockWiseCost += cost;
            }
            else
            {
                OutgoingRoad[y] = true;
                IncomingRoad[x] = true;
                clockWiseCost += cost;
            }
        }

        int ans = min(clockWiseCost, antiClockWiseCost);
        printf("Case %d: %d\n", t, ans);
    }

    return 0;
}

/*
NOTE : The graph is a ring. Consider the third test case:
6
1 5 4
5 3 8
2 4 15
1 6 16
2 3 23
4 6 42
If we make a graph from these data, it will be look like the following:
1 --> 5 --> 3 <-- 2 --> 4 --> 6 <-- 1
and 2, 4 connected together.

so, you have to follow either clock wise path or the anti clock wise path.
You can easily decompose the edges in the two different directions:
1. Edges which goes to the left:
3 <-- 2 	23
6 <-- 1		16
Total cost: 39 (for colcoke wise travarsal)

2. Edges which goes to the left:
1 --> 5		 4
5 --> 3		 8
2 --> 4		15
4 --> 6		42
Total cost: 69 (for anti closck wise travarsal)

Remember, 'left' or 'right' is not important here, you can easily build a graph with left
and right altered. All we care is the two different direction of the edges.
Choose the direction in which cost is minimum (here, left, cost is 39). And build
roads in the opposite direction. So in this case you have to built two roads,
3 --> 2
6 --> 1
Look, now you can go from any city to another city!
The question is now, how to build this graph?
Again, look at the test case. The first edge is 1 --> 5. You can place 5 either left or right of 1.
1 --> 5 or
5 <-- 1
Both left and right of 1 & 5 is empty, so it's entirely up to you what will you choose.
Say, you choose the first option, you place 5 to the right of 1 (1 --> 5).
Now the second edge, 5 --> 3. You must place 3 right of 5, because left of 5 is already filled
by 1.
1 --> 5 --> 3
So all you need to do is keep track of whether the right or left of a node has already been filled,
and adding new edges accordingly.


//
Credit : Rafi Kamal.
https://github.com/rafi-kamal/ACM-Solutions/blob/master/LightOj/Graph%20Theory/1049%20-%20One%20Way%20Roads.cpp
*/
