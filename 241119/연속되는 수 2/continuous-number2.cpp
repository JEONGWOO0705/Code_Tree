#include <iostream>
using namespace std;

#define MAX 50
int _array[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int ab;
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        cin >> ab;
        _array[i] = ab;
    }
    for (int j = 0; j <= n - 1; j++) {
        if (_array[j] == _array[j + 1]) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}