
#include <iostream>
using namespace std;

class Assessment {
public:
    virtual void calculateMarks() = 0;
};

class Quiz : public Assessment {
    int marks;

public:
    Quiz(int m) {
        marks = m;
    }

    void calculateMarks() {
        cout << "Quiz Marks: " << marks << endl;
    }
};

class Assignment : public Assessment {
    int marks;

public:
    Assignment(int m) {
        marks = m;
    }

    void calculateMarks() {
        cout << "Assignment Marks: " << marks << endl;
    }
};

class Marks {
private:
    int value;

public:
    Marks(int v) {
        value = v;
    }

    Marks operator+(Marks m) {
        return Marks(value + m.value);
    }

    void display() {
        cout << "Total Assessment Marks: "
             << value << endl;
    }
};

int main() {
    Quiz q(15);
    Assignment a(25);

    q.calculateMarks();
    a.calculateMarks();

    Marks m1(15);
    Marks m2(25);

    Marks total = m1 + m2;
    total.display();

    return 0;
}
