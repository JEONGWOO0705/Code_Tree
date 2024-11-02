#include <iostream>
using namespace std;


bool Find_(int n){
    if(n%100 == 0 && n%400 != 0) return false;
    if(n %  4 != 0) return false;

    return true;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout<<boolalpha<<Find_(n);
    return 0;
}