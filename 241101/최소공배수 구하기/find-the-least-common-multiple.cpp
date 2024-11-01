#include <iostream>
using namespace std;

void max(int n, int m) {
    int answer;
    int small;
    for (int i = 2; i < min(n, m); i++) {
        if (n % i == 0 && m % i == 0) {
            small = i;
            break;
        }
    }
    for (int i = 1; i <100000; i++) {
        int before = small * i;
        if (before % n == 0 && before % m == 0) {
            answer = before;
            break;
        }
    }
    cout << answer;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    max(n, m);
    return 0;
}