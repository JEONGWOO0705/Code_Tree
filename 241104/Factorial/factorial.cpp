#include <iostream>
using namespace std;

int Fac(int n) {
    if (n == 1) {
        return n;
    }
    return n * Fac(n - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << Fac(n);
    return 0;
}