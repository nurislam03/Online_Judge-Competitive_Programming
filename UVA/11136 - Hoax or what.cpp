#include <iostream>
#include <queue>
#include <cstdio>
#include <vector>

using namespace std;


int main()
{
    int n, k;
    while(scanf("%d", &n))
    {

        if( n == 0 ) break;
        priority_queue<int , vector<int> , greater<int > > LowestBill;
        priority_queue<int , vector<int> , less<int > > HighestBill;

        int Repeat[1000000+10];
        for( int i = 0 ; i <= 1000005 ; i++ ) Repeat[i] = 0;

        long long m,sum = 0;
        for(int i = 1; i <= n; i++)
        {
            scanf("%d", &k);
            for(int j = 0; j < k; j++)
            {
                scanf("%lld", &m);
                Repeat[m]++;
                LowestBill.push(m);
                HighestBill.push(m);
            }

            if( LowestBill.empty() || HighestBill.empty() ) sum += 0;
            else
            {
                while( Repeat[HighestBill.top()] == 0 ) HighestBill.pop();
                Repeat[HighestBill.top()]--;

                while( Repeat[LowestBill.top()] == 0 ) LowestBill.pop();
                Repeat[LowestBill.top()]--;

                sum +=  ( HighestBill.top() - LowestBill.top() );
                LowestBill.pop(); HighestBill.pop();
            }
        }
        printf("%lld\n", sum);
    }
}
