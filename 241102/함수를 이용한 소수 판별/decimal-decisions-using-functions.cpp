#include <iostream>
using namespace std;

bool Find_(int n){
    for(int i = 2; i<n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int Answer_Sum(int n, int m){
    int sum = 0;
    for(int i = n; i<=m; i++){
        if(Find_(i) == true){
            sum += i;
        }
    }
    return sum;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n,m, answer;
    cin>> n>>m;
    answer = Answer_Sum(n,m);
    cout<<answer;

    return 0;
}