
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    int marks;

public:
    Student(int r, int m) {
        rollNo = r;
        marks = m;
    }

    bool operator>(Student s) {
        return marks > s.marks;
    }
};

int main() {
    Student s1(101, 85);
    Student s2(102, 75);

    if (s1 > s2) {
        cout << "Student 1 has obtained higher marks.";
    }
    else {
        cout << "Student 2 has obtained higher marks.";
    }

    return 0;
}
