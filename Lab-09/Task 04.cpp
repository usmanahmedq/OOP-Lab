#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Stack {
private:
    T* items;
    int capacity;
    int top;

public:
    Stack(int cap) {
        capacity = cap;
        top = 0;
        items = new T[capacity];
    }

    ~Stack() {
        delete[] items;
    }

    bool isEmpty() {
        return top == 0;
    }

    bool isFull() {
        return top == capacity;
    }

    int size() {
        return top;
    }

    void push(T value) {
        if (isFull()) {
            cout << "Stack is full, cannot push " << value << endl;
            return;
        }
        items[top] = value;
        top = top + 1;
    }

    T pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return T();
        }
        top = top - 1;
        return items[top];
    }

    T peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return T();
        }
        return items[top - 1];
    }
};

int main() {
    Stack<int> s1(3);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);

    cout << "Popping:";
    while (!s1.isEmpty()) {
        cout << " " << s1.pop();
    }
    cout << endl;

    string word = "LAHORE";
    Stack<char> s2(word.length());
    for (int i = 0; i < (int)word.length(); i++) {
        s2.push(word[i]);
    }

    cout << "LAHORE reversed: ";
    while (!s2.isEmpty()) {
        cout << s2.pop();
    }
    cout << endl;

    Stack<string> browser(5);
    browser.push("google.com");
    browser.push("github.com");
    browser.push("gutech.edu.pk");

    cout << "Current page: " << browser.peek() << endl;
    browser.pop();
    cout << "After Back: " << browser.peek() << endl;

    return 0;
}
