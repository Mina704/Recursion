#include <iostream>
using namespace std;

void inverted(int n, int current = 1) {
    if (current > n) return;

    for (int i = 0; i < current - 1; i++)
        cout << " ";

    for (int i = 0; i < 2 * (n - current + 1) - 1; i++)
        cout << "*";

    cout << endl;

    inverted(n, current + 1);
}

int main() {
    int n;
    cin >> n;
    inverted(n);
    return 0;
}
