#include <iostream>
#include <cstdio>
#include <sstream>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <climits>
#include <iomanip>
#include <cassert>
#include <algorithm>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <fstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <iterator>
#include <functional>


using namespace std;


int main()
{
    int tCase,x;
    scanf("%d",&tCase);

    for(int t = 1; t <= tCase; t++)
    {
        int Godzilla, MechaGodzilla;
        scanf("%d %d",&Godzilla, &MechaGodzilla);
        priority_queue<long long , vector<long long> , greater<long long > > A, B;

        while(!A.empty()) A.pop();
        while(!B.empty()) B.pop();

        for(int i = 0; i < Godzilla; i++)
        {
            scanf("%d",&x);
            A.push(x);
        }
        for(int i = 0; i < MechaGodzilla; i++)
        {
            scanf("%d",&x);
            B.push(x);
        }

        while(!A.empty() && !B.empty())
        {
            //cout << "a top = " << A.top() << " b top = " << B.top() << endl;
            if(A.top() < B.top())
            {
                A.pop();
            }
            else B.pop();
        }
        //cout << "not  " << A.size() << " " << B.size() << endl;

        if(A.empty() && B.empty())
            printf("uncertain\n");
        else if(A.empty())
            printf("MechaGodzilla\n");
        else
            printf("Godzilla\n");
    }

    return 0;
}
