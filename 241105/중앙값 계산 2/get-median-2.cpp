#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> Array(n); // n 크기의 벡터 선언
    for (int i = 0; i < n; i++) {
        cin >> Array[i];
    }

    vector<int> temp; // 중앙값을 구할 임시 벡터
    for (int i = 0; i < n; i++) {
        temp.push_back(Array[i]); // 현재 값 추가
        if (i % 2 == 0) { // 홀수 번째 요소마다
            sort(temp.begin(), temp.end()); // 정렬하여 중앙값 찾기
            cout << temp[i / 2] << " ";
        }
    }

    return 0;
}