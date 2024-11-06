#include <iostream>
using namespace std;

class Need{
    public:
        string Code;
        string Color;
        int Second;

        void HH(){
            cout<<"code : "<<this->Code<<endl;
            cout<<"color : "<<this -> Color<<endl;
            cout<<"second : "<<this->Second;
        }

        Need(){}
        Need(string code, string color, int Second){
            this -> Code = code;
            this -> Color = color;
            this -> Second = Second;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string Code;
    string Color;
    int Second;
    cin>>Code>>Color>>Second;

    Need need = Need(Code,Color,Second);
    need.HH();

    return 0;
}