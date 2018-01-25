# include <iostream>
# include <cstdio>
# include <cstring>
# include <cstdlib>
# include <cmath>
# include <string>
# include <sstream>
# include <algorithm>

using namespace std;



bool isPrime(int n)
{
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}


int sumLetterValues(char word[30])
{
    int sum = 0;
    char c;

    for(int i = 0; word[i]; i++)
    {
        c = word[i];

        if(c >= 'a' && c <= 'z')
            sum += (c - 'a') + 1;

        else
            sum += (c - 'A') + 27;
    }
    return sum;
}



int main()
{
    char word[30];

    while(scanf("%s",word) != EOF)
    {
        int sum = sumLetterValues(word);

        if(isPrime(sum))
            printf("It is a prime word.\n");

        else
            printf("It is not a prime word.\n");
    }

    return 0;
}
