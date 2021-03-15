#include <iostream>
using namespace std;

int main() 
{
  int N, n, even = 0, odd = 0;

  cin >> N;

  while (true) {
    cin >> n;
    if (n % 2 == 0) even++;
    else odd++;
    if (cin.peek() == '\n') break;
  }
      
  cout << even << " pares" << endl;
  cout << odd << " impares" << endl;

  return 0;
}
