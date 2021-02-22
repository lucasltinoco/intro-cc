#include <iostream>
using namespace std;

int main()
{
  int input, d1, d2, d3, d4, sum, prod, sub, digit;
  cin >> input;
  cout << endl;

  d1 = input / 1000;
  d2 = input / 100 % 10;
  d3 = input / 10 % 10;
  d4 = input % 10;

  sum = d1 + d2 + d3 + d4;
  prod = d1 * d2 * d3 * d4;
  sub = prod - sum;

  digit = sub % 9;
  cout << digit << endl;
  return 0;
}
