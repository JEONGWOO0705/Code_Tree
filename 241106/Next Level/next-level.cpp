#include <iostream>
using namespace std;

class Game{
    public:
        string ID;
        int Level;

        void Hello(){
            cout<<"user "<<this->ID<<" lv "<<this->Level<<endl;
        }

        Game(string id = "codetree", int level = 10){
            this -> ID = id;
            this -> Level = level;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string Id;
    cin>>Id>>n;

    Game AA = Game();
    Game BB = Game(Id,n);
    AA.Hello();
    BB.Hello();

    return 0;
}