#include <iostream>
using namespace std;

int number = 10;
void Print_Star(int number){
    for(int i = 0; i < number; i++){
        cout<<"*";
    }
    cout<<endl;
}


int main() {

    for(int i = 0; i<5; i++){
        Print_Star(number);
    }


    return 0;
}