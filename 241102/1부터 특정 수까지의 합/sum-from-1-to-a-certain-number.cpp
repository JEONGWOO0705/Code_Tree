#include <iostream>
using namespace std;

int Divide(int n){
    int answer =0;
    for(int i = 0; i<=n; i++){
        answer += i;
    }
    answer  = answer/10;


    return answer;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, answer;
    cin>> n;
    answer = Divide(n);
    cout<<answer;
    return 0;
}