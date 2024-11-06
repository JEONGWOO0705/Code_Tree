#include <iostream>
using namespace std;

class Code{
    public:
        string Secret;
        string MPoint;
        int Time;

        Code(string Secret_Code, string Meeting_Point, int time){
            this->Secret = Secret_Code;
            this->MPoint = Meeting_Point;
            this->Time = time;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string ss,aa;
    int bb;
    cin>>ss>>aa>>bb;
    Code code = Code(ss,aa,bb);
    cout<<"secret code : "<<code.Secret<<endl;
    cout<<"meeting point : "<<code.MPoint<<endl;
    cout<<"time : "<<code.Time<<endl;
    return 0;
}