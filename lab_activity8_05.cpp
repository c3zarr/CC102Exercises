#include <iostream>
#include <fstream>
#include <set>
using namespace std;

int main() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");

    set<string> words;
    string word;

    while (inFile >> word) {
        if (words.find(word) == words.end()) {
            words.insert(word);
            outFile << word << " ";
        }
    }

    cout << "Duplicate words removed.";

    return 0;
}
