#include <iostream>
#include <string>      
#include <math.h>
using namespace std;

string bhaskara(int a, int b, int c)
{
  int delta = b * b - 4 * a * c;
  if (delta < 0)
    return "Nao tem raizes reais";
  int x1 = (-b + sqrt(delta)) / (2 * a);
  int x2 = (-b - sqrt(delta)) / (2 * a);
  string result = to_string(x1) + " " + to_string(x2);
  return result;
}

int main()
{
  int input[3];
  for (int i = 0; i < 3; i++)
  {
    cin >> input[i];
  }
  cout << bhaskara(input[0], input[1], input[2]) << endl;
}
