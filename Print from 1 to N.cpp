#include <iostream>
using namespace std;

void solve(int n) {
    if (n == 0) return;
    solve(n - 1);
    cout << n << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    solve(n);

    return 0;
}
