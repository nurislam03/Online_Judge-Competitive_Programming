#include<bits/stdc++.h>
using namespace std;
#define SIZE 1002
vector < int > node[SIZE];
int cost[1002];
int visited[SIZE];
queue < int > q;
int u, v,Tcost = 0,koijon_asey=0;

void init(int n){
    for(int k = 0;k<=n;k++){
        cost[k] = 0;
        visited[k] = 0;
        node[k].clear();
    }
}

void BFS(int src)
{
    q = queue<int> ();
    q.push(src);
    visited[src] = 1;

    while( !(q.empty()) )
    {
        u = q.front();
        q.pop();

        koijon_asey++;
        Tcost += cost[u];

        for(int k = 0;k<node[u].size();k++){
            if(!visited[node[u][k]]){
                q.push(node[u][k]);
                visited[node[u][k]]=1;
            }
        }

    }
}

int main()
{

    int n,m,x,y,sum = 0;
    int t; cin >> t;
    for( int i = 1 ; i <= t ; i++ )
    {
        sum = 0;
        cin >> n >> m;
        init(n);
        for( int j = 1 ; j <= n ; j++ )
        {
            cin>>cost[j];
            sum = sum + cost[j];
        }


            int avrg = ( sum / n );
           // cout << "tt: " << n << endl;
            for( int k = 1 ; k <= m ; k++ )
            {
                cin >> x >> y;
                node[x].push_back(y);
                node[y].push_back(x);
            }

            int flag = 0;
            if( (sum%n) != 0){
            	cout << "Case " << i << ": No" << endl;
            	continue;
        	}
        	else{
	            for(int k = 1;k<=n;k++){
	                if(!visited[k]){
	                    Tcost = 0;
	                    koijon_asey=0;
	                    BFS(k);
	                   // cout << Tcost << " " << koijon_asey << " " << avrg << endl;
	                    if(Tcost/koijon_asey != avrg){
	                        flag = 1;
	                        break;
	                    }
	                }
	            }
	            cout << "Case " << i << ": ";
	            flag == 0 ? cout << "Yes"<<endl:cout << "No"<< endl;

        	}


    }
    return 0;
}
