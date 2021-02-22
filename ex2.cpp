#include <iostream>
using namespace std;
int main()
{
  int number1;
  int number2;
  int number3;
  cout << "Number1: ";
  cin >> number1;
  cout << endl;
  cout << "Number2: ";
  cin >> number2;
  cout << endl;
  cout << "Number3: ";
  cin >> number3;
  cout << endl;

  int sum = number1 + number2 + number3; 
  cout << "Sum: " << sum << endl;
  int average = sum/3; 
  cout << "Average: " << average << endl;
  int product = number1 * number2 * number3; 
  cout << "Product: " << product << endl;
  return 0;
}