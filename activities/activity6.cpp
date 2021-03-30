#include <iostream>
using namespace std;

double soma(float n1, float n2) {
  return n1 + n2;
}

double subtracao(float n1, float n2) {
  return n1 - n2;
}

int restoDivisao(int n1, int n2) {
  return n1 % n2;
}

double multiplicacao(float n1, float n2) {
  return n1 * n2;
}

int fatorial(int n) {
  int factorial = 1;
  for (int i = 0; i < n; i++) {
    factorial *= (n - i);
  };
  return factorial;
}

int main() {
  float input[2];
  int op;
  for (int i = 0; i < 2; i++) {
    cin >> input[i];
  }
  cin >> op;
  
  switch (op) {
    case 1:
      cout << soma(input[0], input[1]) << endl;
      break;
    case 2:
      cout << subtracao(input[0], input[1]) << endl;
      break;
    case 3:
      cout << restoDivisao(input[0], input[1]) << endl;
      break;
    case 4:
      cout << multiplicacao(input[0], input[1]) << endl;
      break;
    case 5:
      cout << fatorial(input[0]) << " " << fatorial(input[1]) << endl;
      break;
  } 
}
