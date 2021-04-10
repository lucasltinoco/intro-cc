#include <iostream>
using namespace std;

int calcMaior(int n1, int n2) {
  if (n1 == n2) return n1;
  return n1 > n2 ? n1 : n2;
}

int calcMenor(int n1, int n2) {
  if (n1 == n2) return n1;
  return n1 > n2 ? n2 : n1;
}

void mostraTela(int max, int min) {
  cout << "Menor: " << min << endl;
  cout << "Maior: " << max << endl;
}

int main() {
  int c = 0, n, max, min;

  while (true) {
    cin >> n;

    if (c == 0) {
      max = n;
      min = n;
      c++;
    }

    if (n != 0) {
      max = calcMaior(max, n);
      min = calcMenor(min, n);
    } else {
      mostraTela(max, min);
      break;
    }
  }
}
