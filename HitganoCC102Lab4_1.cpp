#include <iostream>
#include <iomanip>
using namespace std;

int main (){
  char ans;

do {
  int s, q;
  cout << "enter number of students: ";
  cin >> s;
  cout << "enter number of quizzes: ";
  cin >> q;
    float scores [100][100];
    float average [100];
 for (int i = 0; i < students; i++) {
 cout << "\nEnter scores for Student " << i + 1 << ":\n";
    float sum = 0;
for (int j = 0; j < q; j++) {
    cout << "Quiz " << j + 1 << ": ";
    cin >> scores[i][j];
    sum += scores[i][j];
}
    average[i] = sum / q;
    }
    cout << "\nStudent\t";
        for (int j = 0; j < q; j++) {
        cout << "Q" << j + 1 << "\t";
      }
        cout << "Average\n";
        for (int i = 0; i < s; i++) {
            cout << i + 1 << "\t";
            for (int j = 0; j < q; j++) {
                cout << scores[i][j] << "\t";
            }
            cout << fixed << setprecision(2) << average[i] << endl;
        }
        cout << "\nAgain? (y/n): ";
        cin >> ans;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
