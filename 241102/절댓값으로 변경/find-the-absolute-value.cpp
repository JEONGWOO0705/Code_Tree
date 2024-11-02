#include <iostream>

#define MAX_N 50

using namespace std;

int n;
int arr[MAX_N];

// 배열의 값들을 그 값의 절대값으로 변경합니다.
// call by reference로 구현합니다.
void AbsoluteValue(int *arr) {
    for(int i = 0; i < n; i++)
        if(arr[i] < 0)
            arr[i] = -arr[i];
    
    return;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];


    AbsoluteValue(arr);

    
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}