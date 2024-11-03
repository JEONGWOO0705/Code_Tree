#include <iostream>
using namespace std;
#define MAX_N 100

using namespace std;

int arr[MAX_N];


int Sum_(int a, int b) {
    int answer = 0;
    for (int i = a - 1; i < b; i++) {
        answer += arr[i];
    }
    return answer;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int sum;
    int n, m;
    int a, b;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        int answer= Sum_(a, b);
        cout << answer << endl;
    }
    return 0;
}