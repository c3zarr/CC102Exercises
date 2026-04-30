#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void countLines() {
    ifstream file("STORY.TXT");
    string line;
    int count = 0;

    while (getline(file, line)) {
        if (!line.empty() && line[0] != 'A')
            count++;
    }

    cout << "Lines not starting with A: " << count;
}

int main() {
    countLines();
    return 0;
}
