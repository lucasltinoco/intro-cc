#include <iostream>
using namespace std;

int main() 
{
  int N, factorial = 1;

  cin >> N;

  for (int i = 0; i < N; i++) {
    factorial *= (N - i);
  };
      
  cout << factorial << endl;

  return 0;
}
