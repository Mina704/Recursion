#include <iostream>
#include <vector>
using namespace std;

vector<long long> a;

void printEven(int i){
    if(i < 0) return;
    if(i % 2 == 0)
        cout << a[i] << " ";
    printEven(i - 1);
}

int main(){
    int n;
    cin >> n;
    a.resize(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    printEven(n - 1);
    return 0;
}
