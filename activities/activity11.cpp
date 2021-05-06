#include <iostream>
using namespace std;

#define LIN 3
#define COL 3

void iniciaMatriz(int matriz[LIN][COL])
{
  for (int l = 0; l < LIN; l++)
  {
    for (int c = 0; c < COL; c++)
    {
      cin >> matriz[l][c];
    }
  }
}

void printaMatriz(int matriz[LIN][COL])
{
  for (int l = 0; l < LIN; l++)
  {
    for (int c = 0; c < COL; c++)
    {
      cout << matriz[l][c] << " ";
    }
    cout << endl;
  }
}

void multiplicaMatrizes(int matrizA[LIN][COL], int matrizB[LIN][COL], int result[LIN][COL])
{
  for (int l = 0; l < LIN; l++)
  {
    for (int c = 0; c < COL; c++)
    {
      result[l][c] = 0;
      for (int i = 0; i < LIN; i++)
      {
        result[l][c] += matrizA[l][i] * matrizB[i][c];
      }
    }
  }
}

int main()
{
  int matrizA[LIN][COL], matrizB[LIN][COL], result[LIN][COL];

  iniciaMatriz(matrizA);
  iniciaMatriz(matrizB);
  multiplicaMatrizes(matrizA, matrizB, result);
  printaMatriz(result);

  return 0;
}
