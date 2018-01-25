#include<stdio.h>
#include<cstring>
#include<iostream>
#include<vector>

using namespace std;
vector<string>V;
bool flag[103];

string song[] =
{
    "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you",  "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"

};

int main()
{
    int NumOfPeople;
    scanf("%d",&NumOfPeople);

    string x;
    for( int t = 1 ; t <= NumOfPeople ; t++ )
    {
        cin >> x;
        V.push_back(x);
    }

    int i = 0,j = 0;
    while(1)
    {
        cout << V[i++]<< ": " << song[j++] << "\n";
        flag[i-1] = 1;

        if( flag[NumOfPeople - 1] == 1 && j == 16 ) break;
        if( i == NumOfPeople ) i = 0;
        if( j == 16 ) j = 0;
    }

    return 0;
}
