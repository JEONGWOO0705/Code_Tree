#include <iostream>
using namespace std;

void max_number(int n, int m){
    int answer;
    
    for(int i = 1; i<= n; i++){
        if(n % i ==0 && m%i == 0){
            answer = i;
        }
    }

    cout<<answer;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    max_number(n,m);
    return 0;
}