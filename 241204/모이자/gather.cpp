#include <iostream>
#include <cmath>
using namespace std;
#define MAXNUM 40
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int people[MAXNUM];
    int minroot = 5000;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int inp;
        cin >> inp;
        people[i] = inp;
    }
    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int x = 0; x < n; x++) {
            sum += people[x] * abs((x - j));
        }
        minroot = min(minroot, sum);
    }
    cout << minroot;
    return 0;
}