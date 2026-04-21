#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ofstream outFile("color.txt");

    if (!outFile) {
        cout << "Error: Unable to create color.txt file." << endl;
        return 1;
    }

    outFile << "Red" << endl;
    outFile << "Blue" << endl;
    outFile << "Green" << endl;
    outFile << "Yellow" << endl;
    outFile << "Purple" << endl;

    outFile.close();

    ifstream inFile("color.txt");

    ofstream copyFile("color_copy.txt");

    if (!inFile) {
        cout << "Error: Unable to open color.txt for reading." << endl;
        return 1;
    }

    if (!copyFile) {
        cout << "Error: Unable to create color_copy.txt file." << endl;
        return 1;
    }

    string line;

    while (getline(inFile, line)) {
        copyFile << line << endl; 
    }

    inFile.close();
    copyFile.close();

    cout << "File created and copied successfully!" << endl;

    return 0;
}
