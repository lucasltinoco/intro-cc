#include <iostream>
using namespace std;
int main()
{
  int number;
  bool result;
  cout << "Number: ";
  cin >> number;
  cout << endl;
  result = number % 2 != 0; 
  cout << result << endl;
  return 0;
}