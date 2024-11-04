#include <iostream>
using namespace std;

int cnt = 0;
void HH(int n) {
    if (n == 1) {
        cout << cnt;
        return;
    }

    if (n % 2 == 0) {
        cnt++;
        return HH(n / 2);
    }
    else {
        cnt++;
        return HH(n / 3);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    HH(n);
    return 0;
}