#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
public:
    int height;
    int weight;
    int number;
    Student(int height, int weight, int number) {
        this->height = height;
        this->weight = weight;
        this->number = number;
    }
};

bool cmp(Student a, Student b) {
    if (a.height == b.height) { return a.weight > b.weight; }
    return a.height < b.height;
}


int main() {
    int height;
    int weight;
    int n;
    cin >> n;
    vector<Student> student;

    for (int i = 0; i < n; i++) {
        cin >> height >> weight;
        student.push_back(Student(height, weight, i + 1));
    }

    sort(student.begin(), student.end(), cmp);

    for (int i = 0; i < n; i++) {
        cout << student[i].height << " " << student[i].weight << " " << student[i].number << endl;
    }

    return 0;
}