#include <cstdio>
using namespace std;
char line[100000];

bool is_word (char a)
{
    if((a <= 'z' && a >= 'a') || (a <= 'Z' && a >= 'A'))
        return true;

    return false;
}


int main()
{
    while(gets(line))
    {
        int cnt = 0;
        bool wordCompleted = true;

        for(int i = 0; line[i]; i++)
        {
            if (is_word(line[i]))
            {
                if(wordCompleted)
                    cnt++;
                wordCompleted = false;
            }
            else
                wordCompleted = true;
        }

        printf("%d\n",cnt);
    }
    return 0;
}
