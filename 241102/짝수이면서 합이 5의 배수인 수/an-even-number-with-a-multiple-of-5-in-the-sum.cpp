#include <iostream>
using namespace std;

bool hi(int n){
    return n%2 == 0 && (n/10 + n%10) % 5 == 0;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    if(hi(n)){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
    return 0;
}