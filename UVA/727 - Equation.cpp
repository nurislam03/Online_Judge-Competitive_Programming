#include <iostream>
#include <cstdio>
#include <cstring>
#include <stack>

using namespace std;

int Priority(char c)
{
    if(c == '(') return 1;
    else if(c == '+' || c == '-') return 2;
    else if(c == '*' || c == '/') return 3;
}


int main()
{
    int tC;
    scanf("%d",&tC);

    (void)getchar();
    (void)getchar();

    while (tC--)
    {
        stack <char> st;
        char c;

        while(c = getchar())
        {
            if(c == '\n' || c == EOF) break;

            if(isdigit(c))
                printf("%c", c);

            else if (c == '(')
                st.push(c);

            else if (c == '+' || c == '-' || c == '*' || c == '/')
            {
                while (!st.empty() && Priority(c) <= Priority(st.top()))
                {
                    printf("%c", st.top());
                    st.pop();
                }
                st.push(c);
            }

            else if (c == ')')
            {
                while (st.top() != '(')
                {
                    printf("%c", st.top());
                    st.pop();
                }
                st.pop();
            }

            (void)getchar(); // for newline;
        }

        while (!st.empty())
        {
            printf("%c", st.top());
            st.pop();
        }

        cout << endl;
        if (tC) cout << endl;
    }
}
