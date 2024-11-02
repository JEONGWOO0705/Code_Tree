#include <iostream>
using namespace std;


void Swap(int &n, int &m) {
    int temp = n;
    n = m;
    m = temp;
}

int main() {
    // 변수 선언 및 입력:
    int n, m;
    cin >> n >> m;

    Swap(n, m);
    cout << n << " " << m;
    return 0;
}