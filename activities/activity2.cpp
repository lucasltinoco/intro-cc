#include <iostream>
using namespace std;

int main()
{
  int classesTotal, classesWatched;
  float grade1, grade2, averageGrade, frequency;
  string situation;
  
  cin >> grade1;
  cin >> grade2;
  cin >> classesTotal;
  cin >> classesWatched;

  averageGrade = (grade1 + grade2) / 2;

  frequency = (classesWatched * 100) / classesTotal;

  if (averageGrade >= 6 && frequency >= 75) situation = "aprovado";
  else situation = "reprovado";

  cout << averageGrade << endl;
  cout << situation << endl;
  return 0;
}
