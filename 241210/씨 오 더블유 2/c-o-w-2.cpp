#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
#define MAXNUM 40
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int count = 0;
    cin >> n;
    string values;
    cin >> values;
    for (int i = 0; i < n; i++) {
        if (values[i] == 'C') {
            for (int j = i + 1; j < n; j++) {
                if (values[j] == 'O') {
                    for (int a = j + 1; a < n; a++) {
                        if (values[a] == 'W') {
                            count++;
                        }
                    }
                }
            }
        }
    }
    cout << count;
    
    return 0;
}