#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string first;
    string second;
    string values; 
    int count = 0;
    cin >> values;
    for (int i = 0; i < values.size(); i++) {
        if (values[i] == '(') {
            for (int j = i + 1; j < values.size(); j++) {
                if (values[j] == ')') {
                    count++;
                }
            }
        }
    }
    cout << count;
    
    return 0;
}