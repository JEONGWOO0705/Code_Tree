#include <iostream>
using namespace std;

void GG(int n) {
    for (int j = n; j > 0; j--) {
        cout << j << " ";
    }
}
void HH(int n) {
    for (int i = 0; i < n; i++) {
        cout << i + 1<<" ";
    }
    cout<<endl;
    GG(n);
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    HH(n);
    return 0;
}