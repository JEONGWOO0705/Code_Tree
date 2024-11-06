#include <iostream>
using namespace std;

class Need{
    public:
        string Code;
        int Second;

        void HH(){
            cout<<"product "<<this->Second<<" is "<<this->Code<<endl;
        }


        Need(string code = "codetree", int Second = 50){
            this -> Code = code;
            this -> Second = Second;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string Code;
    int Second;
    cin>>Code>>Second;

    Need need = Need(Code,Second);
    Need need2 = Need();
    need2.HH();
    need.HH();

    return 0;
}