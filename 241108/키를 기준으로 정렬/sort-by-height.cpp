#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Person {
public:
    string name;
    int height;
    int weight;

    Person(string name, int height, int weight) {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }
};

bool cmp(Person a, Person b) {
    return a.height < b.height;
}

int main() {
    string name;
    int height;
    int weight;
    int n;

    // n 입력 받기
    cin >> n;
    
    // 동적 배열로 Person 객체 저장
    vector<Person> persons;
    for (int i = 0; i < n; i++) {
        cin >> name >> height >> weight;
        persons.push_back(Person(name, height, weight));
    }

    // height 기준으로 정렬
    sort(persons.begin(), persons.end(), cmp);

    // 정렬된 결과 출력
    for (int i = 0; i < n; i++) {
        cout << persons[i].name << " " << persons[i].height << " " << persons[i].weight << endl;
    }

    return 0;
}