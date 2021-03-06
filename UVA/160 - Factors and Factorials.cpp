/*
N! for N = 100 will not fit into any integral type,
So, you must determine divisibility in another manner.
Since the upper limit for N is 100, then the largest prime that can divide N! is 97.


NOTE: And also be cautious that you are not printing a newline when factors size in 15.
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <utility>
#include <set>
#include <math.h>
using namespace std;

int main ()
{
        long n, i, flag, count, j;
        long b[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

        while (scanf ("%ld", &n))
        {
                if (n == 0) return 0;
                long save = n;
                long a [25] = {0};

                while (n != 1)
                {
                        i = n;
                        j = 0;

                        while (i > 1)
                        {
                                count = 0;
                                while (i % b [j] == 0)
                                {
                                        i /= b [j];
                                        count++;
                                }
                                a [j] += count;
                                j++;
                        }

                        n--;
                }


                for (i = 24; i >= 0; i--)
                    if (a [i] != 0) break;

                j = i;

                printf("%3ld! =", save);
                if (j >= 15) flag = 0;
                else flag = 15;

                for (i = 0; i <= j; i++)
                {
                        printf("%3ld", a [i]);
                        flag++;
                        if (flag == 15) printf("\n%6c",' ');
                }
                printf("\n");
        }
        return 0;
}
