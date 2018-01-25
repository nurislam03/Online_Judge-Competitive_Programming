#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);

    while(T--)
    {
        int N;
        double res = 0.0;
        scanf("%d",&N);

        while(N--)
        {
            double farmyard,animals,environment;
            scanf("%lf %lf %lf",&farmyard, &animals, &environment);

            double avrgSpace,Cost;
            avrgSpace = farmyard / animals;
            Cost = avrgSpace * environment;
            res += (Cost * animals);
        }
        printf("%0.lf\n",res);
    }
    return 0;
}
