#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
     string number;

     while(getline(cin,number))
     {
         if(number == "0")
            break;

         int len = number.size();
         int exp = len;

         long long Decimal_Value = 0;
         for(int i = 0; i < len; i++)
         {
             int num = int(number[i] - 48);
             Decimal_Value += int (num * ( pow(2,exp) - 1 ));
             exp--;
         }
         cout << Decimal_Value << endl;
     }

 return 0;
}
