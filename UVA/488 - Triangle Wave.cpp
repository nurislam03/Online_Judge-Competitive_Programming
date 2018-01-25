#include<iostream>
using namespace std;


void printWave(int amplitude)
{
       for(int i = 1; i <= amplitude; i++)
       {
               for(int k = 1; k <= i; k++)
                    cout << i;

               cout << endl;
       }

       for(int j = amplitude-1; j >= 1; j--)
       {
               for(int k = 1; k <= j; k++)
                    cout << j;

               cout << endl;
       }
}


int main ()
{
       int cases , amp , freq;
       cin >> cases;

       for(int i = 0; i < cases; i++)
       {
               if(i) cout << endl;
               cin >> amp >> freq;

               for(int j = 0; j < freq; j++)
               {
                       if(j) cout << endl;
                       printWave(amp);
               }
       }
       return 0;
}
