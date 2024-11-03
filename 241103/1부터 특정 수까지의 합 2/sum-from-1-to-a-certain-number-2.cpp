#include <iostream>
using namespace std;

int ReturnFunction(int n) {
    if (n == 1) return 1;
    return ReturnFunction(n - 1) + n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, answer;
    cin >> n;
    answer = ReturnFunction(n);
    cout << answer;
    return 0;
}