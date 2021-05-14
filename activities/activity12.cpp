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

void somaMatrizes(int matrizA[LIN][COL], int matrizB[LIN][COL], int result[LIN][COL])
{
  for (int l = 0; l < LIN; l++)
  {
    for (int c = 0; c < COL; c++)
    {
      result[l][c] = matrizA[l][c] + matrizB[l][c];
    }
  }
}

void subtraiMatrizes(int matrizA[LIN][COL], int matrizB[LIN][COL], int result[LIN][COL])
{
  for (int l = 0; l < LIN; l++)
  {
    for (int c = 0; c < COL; c++)
    {
      result[l][c] = matrizA[l][c] - matrizB[l][c];
    }
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
  int matrizA[LIN][COL], matrizB[LIN][COL], result[LIN][COL], operation, det, r1, r2, r3, l1, l2, l3;

  cin >> operation;
  iniciaMatriz(matrizA);
  if (operation != 4)
    iniciaMatriz(matrizB);

  switch (operation)
  {
  case 1:
    somaMatrizes(matrizA, matrizB, result);
    break;
  case 2:
    subtraiMatrizes(matrizA, matrizB, result);
    break;
  case 3:
    multiplicaMatrizes(matrizA, matrizB, result);
    break;
  case 4:
    r1 = (matrizA[0][0] * matrizA[1][1] * matrizA[2][2]);
    r2 = (matrizA[1][0] * matrizA[2][1] * matrizA[0][2]);
    r3 = (matrizA[2][0] * matrizA[0][1] * matrizA[1][2]);

    l1 = (matrizA[2][0] * matrizA[1][1] * matrizA[0][2]);
    l2 = (matrizA[0][0] * matrizA[2][1] * matrizA[1][2]);
    l3 = (matrizA[1][0] * matrizA[0][1] * matrizA[2][2]);

    det = r1 + r2 + r3 - l1 - l2 - l3;
    break;

  default:
    break;
  }

  if (operation != 4)
    printaMatriz(result);
  else
    cout << det << endl;

  return 0;
}
