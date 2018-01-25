
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <iterator>
#include <functional>

using namespace std;

map < string , int > Map;
vector < string > V;


int main()
{
    string GroupMemName;
    bool extraENDL = false;
    int NumOfGroupMem,InitBalance,NumOfReceiver;

    while( scanf("%d",&NumOfGroupMem) == 1 )
    {
        Map.clear();
        V.clear();

        for( int i = 1 ; i <= NumOfGroupMem ; i++ )
        {
            cin >> GroupMemName;
            V.push_back(GroupMemName);
            Map[GroupMemName] = 0;
        }

        for( int i = 1 ; i <= NumOfGroupMem ; i++ )
        {
            cin >> GroupMemName >> InitBalance >> NumOfReceiver;
            //if( InitBalance == 0 && NumOfReceiver == 0 ) break;

            int AmountOfGift = 0,Rem = 0;
            if( NumOfReceiver)
            {
                AmountOfGift = InitBalance/NumOfReceiver;
                Rem = (InitBalance-((InitBalance/NumOfReceiver)*NumOfReceiver));

                Map[GroupMemName] -= InitBalance;
                Map[GroupMemName] += Rem;
            }

            while(NumOfReceiver--)
            {
                cin >> GroupMemName;
                Map[GroupMemName] += AmountOfGift;
            }
        }
        if( extraENDL ) printf("\n");
        extraENDL = true;
        for( int i = 0 ; i < V.size() ; i++ )
        {
            int res = Map[V[i]];
            cout << V[i] << " " << res <<endl;
        }
    }

    return 0;
}
