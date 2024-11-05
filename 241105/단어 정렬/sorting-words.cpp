#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    string ss;
    string array_[n];

    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>ss;
        array_[i] = ss;
    }
    sort(array_,array_+n);
    for(int i = 0; i<n; i++){
        cout<<array_[i]<<endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}