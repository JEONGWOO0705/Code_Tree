#include <iostream>
using namespace std;

void Hello(int n) {
    if (n == 0) return;
    cout << "HelloWorld" << endl;
    Hello(n - 1);

}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Hello(n);
    return 0;
}