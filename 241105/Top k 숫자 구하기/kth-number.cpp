#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int Array[n];
    for(int i = 0; i<n; i++){
        cin>>Array[i];
    }
    sort(Array,Array+n);
    cout<<Array[k-1];



    // 여기에 코드를 작성해주세요.
    return 0;
}