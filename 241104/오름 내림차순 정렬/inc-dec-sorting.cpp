#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

#define MAX 45
int array[MAX];
int main() {
    // 여기에 코드를 작성해주세요.
 
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin>>array[i];
    }
    sort(array,array+n);
    for(int i= 0; i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    sort(array,array+n,greater<int>());
    for(int i= 0; i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}