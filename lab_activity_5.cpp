#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main (){
  char ans;
  do {
    int students, days;
    cout << "Enter number of students: ";
    cin >> students;
    cout << "Enter number of days: ";
    cin >> days;
    
    vector <vector<int>> attendance (students, vector <int>(days));
    for (int i = 0; i < students; i++){
      cout << "\nStudent " << i + 1 << " attendance:\n";
      for (int j = 0; j < days; j++){
        cout << "Day " << j + 1 << "(1 = Present, 0 = Absent)";
        cin >> attendance [i][j];
      }
    }

    cout << "\n\nStudent ";
    for (int d = 0; d < days; d++){
      cout << "D" << d + 1 << " ";
    }
    cout << "Total Percentage Remarks\n";

    for (int i = 0; i < students; i++){
      int total = 0;

      cout << i + 1 << "       ";

      for (int j = 0; j << days; j++){
        cout << attendance[i][j] << " ";
        total += attendance[i][j];
      }

      double p = (double)total/days*100;

      string Remarks;
      if (p < 50)
        Remarks = "DRP";
      else
        Remarks = "OK";

      cout << total << "     ";
      cout << fixed << setprecision(0) << p << "%     ";
      cout << Remarks << endl;
    }
      cout << "repeat? (Y/N): ";
      cin >> ans;
  } while (ans == 'y'|| ans == 'Y');
  return 0;
}
