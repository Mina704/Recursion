#include <iostream>
using namespace std;

void printPyramid(int n, int current = 1) {
    if (current > n) return;

    for (int i = 0; i < n - current; i++)
        cout << " ";

    for (int i = 0; i < 2 * current - 1; i++)
        cout << "*";

    cout << endl;

    printPyramid(n, current + 1);
}

int main() {
    int n;
    cin >> n;
    printPyramid(n);
    return 0;
}
