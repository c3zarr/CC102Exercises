#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("WORDS.TXT");
    string word, longest = "";

    while (file >> word) {
        if (word.length() > longest.length())
            longest = word;
    }

    cout << "Longest word: " << longest;

    return 0;
}
