#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;
map < char > Map;
vector<char> v;

bool comp(char A, char B)
{
	if (Map[A] != Map[B])
		return Map[A] > Map[B];
	return A < B;
}


int main()
{
    int n;
    scanf("%d",&n);
    cin.ignore();

    for( int i = 1; i <= n; i++ )
    {
        string line;
        getline(cin.line);

        for( int k = 0; k < line.size(); k++ )
        {
            char x = line[k];
            if( isalpha(x))
            {
                x = toupper(x);
                if( Map[x] == 0 ) v.push_back(x);
                Map[x]++;
            }
        }
    }

    sort(v.begin(), v.end(), comp);
    for( int i = 0; i < v.size(); i++ )
    {
        cout << v[i] << " " << Map[v[i]] << endl;
    }

    return 0;
}
