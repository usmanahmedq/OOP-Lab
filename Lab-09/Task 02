#include <iostream>
using namespace std;

class IntList {
private:
    int* data;
    int count;
    int capacity;

    void grow() {
        int newCapacity = capacity * 2;
        int* bigger = new int[newCapacity];

        for (int i = 0; i < count; i++) {
            bigger[i] = data[i];
        }

        delete[] data;
        data = bigger;

        cout << "Resizing: " << capacity << " -> " << newCapacity << endl;
        capacity = newCapacity;
    }

public:
    IntList() {
        capacity = 2;
        count = 0;
        data = new int[capacity];
    }

    ~IntList() {
        delete[] data;
        cout << "IntList memory freed" << endl;
    }

    void add(int value) {
        if (count == capacity) {
            grow();
        }
        data[count] = value;
        count = count + 1;
    }

    int get(int index) {
        if (index < 0 || index >= count) {
            cout << "Invalid index " << index << endl;
            return -1;
        }
        return data[index];
    }

    int size() {
        return count;
    }

    void print() {
        cout << "List (" << count << "/" << capacity << "): ";
        for (int i = 0; i < count; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    IntList list;

    for (int value = 10; value <= 60; value = value + 10) {
        list.add(value);
    }

    list.print();
    cout << "Item at 3: " << list.get(3) << endl;
    cout << "Item at 10: " << list.get(10) << endl;
    cout << "Size: " << list.size() << endl;

    return 0;
}
