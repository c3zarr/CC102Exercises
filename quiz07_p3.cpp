#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

bool isEvenPerfectSquare(int n) {
    if (n % 2 != 0) return false;

    int root = sqrt(n);
    return root * root == n;
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int num;

    while (in >> num) {
        if (isEvenPerfectSquare(num)) {
            out << num << endl;
        }
    }

    in.close();
    out.close();

    return 0;
}
