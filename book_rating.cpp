#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct book {
    int barcode;
    string title;
    int year;
    int rating;
};

string getCategory(int rating) {
    if (rating == 5) return "Excellent";
    else if (rating == 4) return "Very Good";
    else if (rating == 3) return "Good";
    else if (rating == 2) return "Fair";
    else if (rating == 1) return "Poor";
    else return "No Rating";
}

bool isUniqueBarcode(vector<book>& b, int code) {
    for (auto& bk : b)
        if (bk.barcode == code)
            return false;
    return true;
}

void addBook(vector<book>& b) {
    book bk;

    cout << "Enter Barcode: ";
    cin >> bk.barcode;

    while (!isUniqueBarcode(b, bk.barcode)) {
        cout << "Barcode exists. Enter another: ";
        cin >> bk.barcode;
    }

    cin.ignore();
    cout << "Enter Title: ";
    getline(cin, bk.title);

    cout << "Enter Year: ";
    cin >> bk.year;

    cout << "Enter Rating (0-5): ";
    cin >> bk.rating;

    b.push_back(bk);
}

void displayBooks(vector<book>& b) {
    if (b.empty()) {
        cout << "No records.\n";
        return;
    }

    cout << setw(10) << "Barcode"
         << setw(25) << "Title"
         << setw(10) << "Year"
         << setw(10) << "Rating"
         << setw(15) << "Category\n";

    for (auto& bk : b) {
        cout << setw(10) << bk.barcode
             << setw(25) << bk.title
             << setw(10) << bk.year
             << setw(10) << bk.rating
             << setw(15) << getCategory(bk.rating)
             << endl;
    }
}

void editBook(vector<book>& b) {
    int code;
    cout << "Enter Barcode to edit: ";
    cin >> code;

    for (auto& bk : b) {
        if (bk.barcode == code) {
            cin.ignore();
            cout << "Enter new title: ";
            getline(cin, bk.title);

            cout << "Enter new year: ";
            cin >> bk.year;

            cout << "Enter new rating: ";
            cin >> bk.rating;
            return;
        }
    }

    cout << "Book not found.\n";
}

void deleteBook(vector<book>& b) {
    int code;
    cout << "Enter Barcode to delete: ";
    cin >> code;

    for (int i = 0; i < b.size(); i++) {
        if (b[i].barcode == code) {
            b.erase(b.begin() + i);
            cout << "Deleted.\n";
            return;
        }
    }

    cout << "Book not found.\n";
}

int main() {
    vector<book> books;
    int choice;

    do {
        cout << "\n1. Add Book\n";
        cout << "2. Edit Book\n";
        cout << "3. Delete Book\n";
        cout << "4. Display Books\n";
        cout << "5. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(books); break;
            case 2: editBook(books); break;
            case 3: deleteBook(books); break;
            case 4: displayBooks(books); break;
        }

    } while (choice != 5);

    return 0;
}
