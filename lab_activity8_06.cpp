#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isPalindrome(string word) {
    int i = 0;
    int j = word.length() - 1;

    while (i < j) {
        if (word[i] != word[j])
            return false;
        i++;
        j--;
    }

    return true;
}

int main() {
    ifstream file("WORDS.TXT");
    string word;
    int count = 0;

    while (file >> word) {
        if (isPalindrome(word))
            count++;
    }

    cout << "Palindrome words: " << count;

    return 0;
}
