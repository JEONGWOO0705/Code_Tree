#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string first,second;
    cin>>first>>second;
    sort(first.begin(),first.end());
    sort(second.begin(),second.end());

    int cnt = 0;
    for(int i = 0 ; i<first.length(); i++){
        if(first[i] == second[i]) cnt++;
    }
    if(cnt>= 2) cout<<"Yes";
    else cout <<"NO";
    // 여기에 코드를 작성해주세요.
    return 0;
}