#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int T;
  float C, d, F;
  while( scanf( "%d", &T ) != EOF ){
    for( int i = 1 ; i <= T ; i++ ){
      scanf( "%f%f", &C, &d );
      F = (9*C)/5 + 32;
      F += d;
      C = (F-32)*5/9;
      printf( "Case %d: %.2f\n", i, C );
    }
  }
  return 0;
}
