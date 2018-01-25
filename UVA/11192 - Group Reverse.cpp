#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>
#include <sstream>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
string line;
int Group, length;

void Reverse(int begin, int end)
{
    for(int i = 0; i < length/2; i++)
    {
        swap(line[begin+i], line[end-i]);
    }
}


int main()
{
    //read("input.txt");
    //write("output.txt");

    while(scanf("%d",&Group) && Group)
    {
        cin >> line;
        length = line.size()/Group;
        for(int i=0;  i < line.size(); i += length)
        {
            Reverse(i, i+length-1);
        }
        cout << line << endl;
	}
}
