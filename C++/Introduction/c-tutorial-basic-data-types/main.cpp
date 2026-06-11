#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  // Complete the code.
  int integer;
  long long_integer;
  char character;
  float float_decimal;
  double double_decimal;
  scanf("%d %ld %c %f %lf", &integer, &long_integer, &character, &float_decimal, &double_decimal);
  printf("%d\n%ld\n%c\n%f\n%lf", integer, long_integer, character, float_decimal, double_decimal);
  return 0;
}