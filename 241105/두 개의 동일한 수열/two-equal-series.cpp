#include <iostream>
#include <algorithm>
using namespace std;

bool Check(int a[], int b[], int c){
    for(int i = 0; i<c; i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int First[n], Second[n];
    for(int i = 0; i<n; i++){
        cin>>First[i];
    }
    for(int i = 0; i<n; i++){
        cin>>Second[i];
    }
    sort(First,First+n);
    sort(Second,Second+n);
    if(Check(First,Second,n)){
        cout<<"Yes";
    }
    else{cout<<"No";}


    return 0;
}