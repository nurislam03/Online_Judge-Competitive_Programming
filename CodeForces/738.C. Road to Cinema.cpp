#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
#define sz 200000



struct cars
{
    int price;
    int fuel;

    cars(){
    }
};

bool cmp(cars a, cars b)
{
    if(a.price == b.price)
        return (a.fuel > b.fuel);
    return (a.price < b.price);
}


int carsNum,station,dis,Time;
int totCar;
cars CarsList[sz+10],newCarList[sz+10];
vector < int > staList;



void UpdateCarList()
{
    int prevFuel = 0;
    totCar = 0;

    for(int i = 0; i < carsNum; i++)
    {
        if(CarsList[i].fuel > prevFuel)
        {
            prevFuel = CarsList[i].fuel;
            newCarList[totCar++] = CarsList[i];
        }
    }
}



bool isPossible(int n)
{
    int currFuel = newCarList[n].fuel;
    int prevDis = 0;
    int totTime = 0;

    for(int i = 0; i < staList.size(); i++)
    {
        int currDis = staList[i] - prevDis;
        if(currDis > currFuel) return false;

        int fuelNeed = (currDis*2); // for 1km/hr
        if(fuelNeed <= currFuel)
            totTime += currDis;
        else
        {
            int extraFuel = fuelNeed - currFuel;

            int oneMin = (currDis - extraFuel);  // 1km/hr
            int twoMin = (extraFuel*2);  // 2km/hr

            totTime += (oneMin + twoMin);
        }

        if(totTime > Time) return false;
        prevDis = staList[i];
    }

    if(totTime > Time) return false;
    return true;
}




void BinarySearch()
{
    int Min = 0,Max = totCar-1;
    int cnt = 0, res = -1;

    while((Min <= Max) && cnt < 50)
    {
        cnt++;
        int Mid = (Min + Max)/2;

        if(isPossible(Mid) == true)
        {
            Max = Mid;
            res = Mid;
        }
        else Min = (Mid+1);
    }

    if(res == -1) printf("%d\n",res);
    else printf("%d\n",newCarList[res].price);
}




int main()
{
    scanf("%d %d %d %d",&carsNum, &station, &dis, &Time);

    int c,v;
    for(int i = 0; i < carsNum; i++)
    {
        scanf("%d %d",&CarsList[i].price, &CarsList[i].fuel);
    }

    int g;
    for(int i = 1; i <= station; i++)
    {
        scanf("%d",&g);
        staList.push_back(g);
    }
    staList.push_back(dis);
    station++;

    sort(staList.begin(), staList.end());
    sort(CarsList, CarsList+carsNum, cmp);

    UpdateCarList();
    BinarySearch();

    return 0;
}
