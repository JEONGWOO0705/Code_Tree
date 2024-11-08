#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
public:
    string Name;
    int Korea;
    int English;
    int Math;

    Student(string name, int korea, int english, int math) {
        this->Name = name;
        this->Korea = korea;
        this->English = english;
        this->Math = math;
    }

};

bool cmp(Student a, Student b) {
    return a.Korea + a.English + a.Math < b.Korea + b.English + b.Math;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string name;
    int korea;
    int english;
    int math;
    int n;
    

    cin >> n;
    vector<Student>student;
    for (int i = 0; i < n; i++) {
        cin >> name >> korea >> english >> math;
        student.push_back(Student(name, korea, english, math));
    }
    sort(student.begin(), student.end(), cmp);

    for (int i = 0; i < n; i++) {
        cout << student[i].Name << " " << student[i].Korea << " " << student[i].English << " " << student[i].Math<<endl;
    }


    return 0;
}