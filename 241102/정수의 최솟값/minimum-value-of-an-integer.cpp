#include <iostream>
using namespace std;

int Min_Number(int a, int b, int c){
    int answer;
    answer = min(a,b);
    answer = min(answer,c);
    return answer;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,answer;
    cin>> a>>b>>c;
    answer = Min_Number(a,b,c);
    cout<<answer;
    return 0;
}