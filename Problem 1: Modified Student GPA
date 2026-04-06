#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct student {
    int studentID;
    string name;
    string course;
    float gpa;
};

string getStanding(float gpa) {
    if (gpa >= 90) return "Excellent";
    else if (gpa >= 80) return "Very Good";
    else if (gpa >= 70) return "Good";
    else if (gpa >= 60) return "Passing";
    else return "Failed";
}

bool isUniqueID(vector<student>& s, int id) {
    for (auto& st : s)
        if (st.studentID == id)
            return false;
    return true;
}

void addStudent(vector<student>& s) {
    student st;
    
    cout << "Enter Student ID: ";
    cin >> st.studentID;

    while (!isUniqueID(s, st.studentID)) {
        cout << "ID already exists. Enter another: ";
        cin >> st.studentID;
    }

    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, st.name);

    cout << "Enter Course: ";
    getline(cin, st.course);

    cout << "Enter GPA: ";
    cin >> st.gpa;

    s.push_back(st);
}

void displayStudents(vector<student>& s) {
    if (s.empty()) {
        cout << "No records.\n";
        return;
    }

    cout << setw(10) << "ID"
         << setw(20) << "Name"
         << setw(15) << "Course"
         << setw(10) << "GPA"
         << setw(15) << "Standing\n";

    for (auto& st : s) {
        cout << setw(10) << st.studentID
             << setw(20) << st.name
             << setw(15) << st.course
             << setw(10) << st.gpa
             << setw(15) << getStanding(st.gpa)
             << endl;
    }
}

void editStudent(vector<student>& s) {
    int id;
    cout << "Enter ID to edit: ";
    cin >> id;

    for (auto& st : s) {
        if (st.studentID == id) {
            cin.ignore();
            cout << "Enter new name: ";
            getline(cin, st.name);

            cout << "Enter new course: ";
            getline(cin, st.course);

            cout << "Enter new GPA: ";
            cin >> st.gpa;
            return;
        }
    }

    cout << "Student not found.\n";
}

void deleteStudent(vector<student>& s) {
    int id;
    cout << "Enter ID to delete: ";
    cin >> id;

    for (int i = 0; i < s.size(); i++) {
        if (s[i].studentID == id) {
            s.erase(s.begin() + i);
            cout << "Deleted.\n";
            return;
        }
    }

    cout << "Student not found.\n";
}

int main() {
    vector<student> students;
    int choice;

    do {
        cout << "\n1. Add Student\n";
        cout << "2. Edit Student\n";
        cout << "3. Delete Student\n";
        cout << "4. Display Students\n";
        cout << "5. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(students); break;
            case 2: editStudent(students); break;
            case 3: deleteStudent(students); break;
            case 4: displayStudents(students); break;
        }

    } while (choice != 5);

    return 0;
}
