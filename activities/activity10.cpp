#include <iostream>
using namespace std;

void leVetores(int ages[], char sex[], int subjects[], int grades[], int arrayLength)
{
  for (int i = 0; i < arrayLength; i++)
  {
    cin >> ages[i];
    cin >> sex[i];
    cin >> subjects[i];
    cin >> grades[i];
  }
}

int maiorIdade(int ages[], int arrayLength)
{
  int max;
  for (int i = 0; i < arrayLength; i++)
  {
    if (i == 0)
      max = ages[i];
    else
      max = max > ages[i] ? max : ages[i];
  }
  return max;
}

int menorIdade(int ages[], int arrayLength)
{
  int min;
  for (int i = 0; i < arrayLength; i++)
  {
    if (i == 0)
      min = ages[i];
    else
      min = min > ages[i] ? ages[i] : min;
  }
  return min;
}

int menoresDezoito(int ages[], int arrayLength)
{
  int count = 0;
  for (int i = 0; i < arrayLength; i++)
  {
    if (ages[i] < 18)
      count++;
  }
  return count;
}

double mediaIA(int grades[], int arrayLength)
{
  double sum = 0;
  for (int i = 0; i < arrayLength; i++)
  {
    sum += grades[i];
  }
  return sum / arrayLength;
}

int alunasMais5(char sex[], int subjects[], int arrayLength)
{
  int sum = 0;
  for (int i = 0; i < arrayLength; i++)
  {
    if (sex[i] == 'F' && subjects[i] > 5)
      sum++;
  }
  return sum;
}

int main()
{
  int arrayLength;
  cin >> arrayLength;

  int ages[arrayLength], subjects[arrayLength], grades[arrayLength];
  char sex[arrayLength];
  leVetores(ages, sex, subjects, grades, arrayLength);

  cout << "Media IA: " << mediaIA(grades, arrayLength) << endl;
  cout << "Maior idade: " << maiorIdade(ages, arrayLength) << endl;
  cout << "Menor idade: " << menorIdade(ages, arrayLength) << endl;
  cout << "Menores de 18: " << menoresDezoito(ages, arrayLength) << endl;
  cout << "Alunas com mais de 5 disciplinas: " << alunasMais5(sex, subjects, arrayLength) << endl;

  return 0;
}
