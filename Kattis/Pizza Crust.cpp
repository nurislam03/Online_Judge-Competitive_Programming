#include <iostream>
#include <cstdio>

using namespace std;
#define pi 3.1416

int main()
{
    int r,c;
    double ans;

    scanf("%d %d",&r,&c);
    
    c = r - c;
    double totArea = pi*r*r;
    double totCrust = pi*c*c;
    ans = (double) (totCrust * 100)/totArea;

    printf("%.6lf\n",ans);
    return 0;
}
