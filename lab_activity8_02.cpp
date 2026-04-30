#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("TEXT.TXT");
    char ch;
    int upper = 0, lower = 0;

    while (file.get(ch)) {
        if (ch >= 'A' && ch <= 'Z')
            upper++;
        else if (ch >= 'a' && ch <= 'z')
            lower++;
    }

    cout << "Uppercase letters: " << upper << endl;
    cout << "Lowercase letters: " << lower << endl;

    return 0;
}
