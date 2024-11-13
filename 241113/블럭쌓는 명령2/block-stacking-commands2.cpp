#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, A, B, K;
    cin >> N >> K;
    int* array = new int[N];
    for (int i = 0; i < K; i++) {
        cin >> A >> B;
        for (int j = 0; j <= B - A; j++)
            array[A + j] += 1;
    }
    sort(array, array + N);
    cout << array[N-1];
    


    // 여기에 코드를 작성해주세요.
    return 0;
}