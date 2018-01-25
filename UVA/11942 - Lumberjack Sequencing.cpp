#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int N;
    cin >> N;

    cout << "Lumberjacks:" << endl;
    for( int t = 1 ; t <= N ; t++ )
    {
        int previous,curr,Inc = 1,Dec = 1;
        
        cin >> previous;
        for( int i = 2 ; i <= 10 ; i++ )
        {
            cin >> curr;
            if( curr > previous ) Inc++;
            else Dec++;
            previous = curr;
        }
        if( Inc == 10  || Dec == 10 ) cout << "Ordered" << endl;
        else cout << "Unordered" << endl;
    }
    return 0;
}
