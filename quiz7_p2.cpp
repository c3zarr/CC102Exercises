#include <iostream>
#include <fstream>
using namespace std;

bool isPerfect(int n) {
    if (n <= 1) return false;

    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i)
                sum += n / i;
        }
    }
    return sum == n;
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int num;

    while (in >> num) {
        if (isPerfect(num)) {
            out << num << endl;
        }
    }

    in.close();
    out.close();

    return 0;
}
