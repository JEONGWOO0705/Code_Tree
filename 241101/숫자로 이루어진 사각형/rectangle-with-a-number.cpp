#include <iostream>
using namespace std;

void Maa(int n){
    int number = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j<n; j++){
            if(number >9){
                number = 1;
            }
            cout<< number++<<" ";
        }
        cout<<endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Maa(n);
    return 0;
}