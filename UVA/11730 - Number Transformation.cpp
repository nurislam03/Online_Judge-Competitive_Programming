
#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
#include <cmath>

using namespace std;
#define SIZE 1010
int primes[SIZE];
vector<int>factors;
vector<int> arr[SIZE];


void Factorial()
{
    int d = sqrt(1000);
    memset(primes, 0, sizeof(primes));

    for (int i = 2; i <= d; i++) {
        if(primes[i] == 0) {
            for (int j = i * i; j <= 1000; j = j + i) {
                primes[j] = 1;
            }
        }
    }

    for(int i = 2 ; i < 1001 ; i++) {
        if( primes[i] == 0 ) factors.push_back(i);
    }

    for ( int i = 0; i < factors.size(); i++ ) {
        int p = factors[i];

        for ( int j = 2*p; j <= 1000; j += p ) arr[j].push_back ( p );
    }
}

int BFS(int first, int last)
{
    int distance[1010];
    memset(distance , -1 , sizeof(distance) );
    distance[first] = 0;

    queue< int > q;
    q.push(first);
    int u,v;
    while( !q.empty() ){
        u = q.front();
        q.pop();
        for( int i = 0 ; i < arr[u].size() ; i++ ){
            int p = arr[u][i];

            v = u + p;
            if( v <= last && distance[v] == -1 ){
                q.push(v);
                distance[v] = distance[u] + 1;
                if( v == last ) return distance[v];
            }
        }
    }

    return -1;
}



int main()
{
    int t = 1;
    Factorial();

    while(1)
    {
        int x,y;
        cin >> x >> y;
        if(x == 0 && y == 0) break;

        if(x > y) cout << "Case " << t++ << ": " << -1 << endl;
        else if(x == y) cout << "Case " << t++ << ": " << 0 <<endl;
        else cout << "Case " << t++ << ": " << BFS(x,y) << endl;
    }
    return 0;
}
