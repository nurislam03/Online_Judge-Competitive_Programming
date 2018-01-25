#include<iostream>
#include<sstream>
#include<cstdio>
using namespace std;

int main()
{
  string s, word;
  bool space;

  while(getline(cin, s))
  {
      stringstream ss(s);
      space = false;

      while(ss >> word)
      {
        if(space) printf( " " );
        space = true;

        for(int i = word.length()-1 ; i >= 0 ; i--)
          printf("%c", word[i]);
      }
      printf( "\n" );
  }

  return 0;
}
