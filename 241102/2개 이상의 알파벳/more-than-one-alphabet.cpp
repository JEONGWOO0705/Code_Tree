#include <iostream>
using namespace std;

bool Check_(string *s) {
    int cnt = 0;
    int size_ = s->size(); // 포인터로 접근할 때 s->size()로 변경
    for (int i = 0; i < size_ - 1; i++) { // 마지막 문자에 도달하지 않도록 size_ - 1까지 반복
        if ((*s)[i] != (*s)[i + 1]) { // 포인터에서 배열 요소에 접근할 때 (*s)[i]로 사용
            cnt++;
        }
        if (cnt >= 2) return true;
    }
    return false;
}

int main() {
    string ss;
    cin >> ss;
    if (Check_(&ss) == true) // Check_ 함수에 주소를 전달
        cout << "Yes";
    else
        cout << "No";
    return 0;
}