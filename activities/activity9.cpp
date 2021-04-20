#include <iostream>
using namespace std;

int main()
{
  int arraySize, max, min, sum, carry;

  cin >> arraySize;
  int input[arraySize];

  for (int i = 0; i < arraySize; i++)
  {
    cin >> input[i];
    sum += input[i];
    if (i == 0)
    {
      max = input[i];
      min = input[i];
    }
    else
    {
      max = max > input[i] ? max : input[i];
      min = min > input[i] ? input[i] : min;
    }
  }

  cout << "maior: " << max << endl;
  cout << "menor: " << min << endl;
  cout << "media: " << sum * 1.0 / arraySize << endl;
  
  for (int i = arraySize; i > 0; i--)
  {
    cout << input[i - 1] << " ";
  }

  return 0;
}
