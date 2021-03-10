#include <iostream>
using namespace std;

int main()
{
  float a1, a2, a3;
  
  cin >> a1;
  cin >> a2;
  cin >> a3;

  if ((a1 + a2 + a3) != 180) 
    cout << "Nao e triangulo" << endl;
  
  else if (a1 < 90 && a2 < 90 && a3 < 90) 
    cout << "Triangulo Acutangulo" << endl;
  
  else if (a1 == 90 || a2 == 90 || a3 == 90) 
    cout << "Triangulo Retangulo" << endl;
  
  else if (a1 > 90 || a2 > 90 || a3 > 90) 
    cout << "Triangulo Obtusangulo" << endl;

  return 0;
}
