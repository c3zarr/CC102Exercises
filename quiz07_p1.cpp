#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int num;

    while (in >> num) {
        if (num % 2 != 0 && isPrime(num)) {
            out << num << endl;
        }
    }

    in.close();
    out.close();

    return 0;
}
