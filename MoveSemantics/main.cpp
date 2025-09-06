#include <iostream>
#include <vector>
using namespace std;

class MyClass {
    int* data;
    size_t size;

public:
    // Constructor
    MyClass(size_t n) : size(n) {
        data = new int[n];
        cout << "Constructed\n";
    }

    // Destructor
    ~MyClass() {
        delete[] data;
        cout << "Destroyed\n";
    }

    // Copy Constructor
    MyClass(const MyClass& other) : size(other.size) {
        data = new int[size];
        std::copy(other.data, other.data + size, data);
        cout << "Copied\n";
    }

    // Copy Assignement
    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            delete[] data;
            size = other.size;
            data = new int[size];
            std::copy(other.data, other.data + size, data);
            cout << "Copy Assigned\n";
        }
        return *this;
    } 

    // Move Constructor
    MyClass(MyClass&& other) noexcept : data(nullptr), size(0) {
        data = other.data;
        size = other.size;

        // leave other in valid state
        other.data = nullptr;
        other.size = 0;

        cout << "Moved\n";
    }

    // Move Assignment
    MyClass& operator=(MyClass&& other) noexcept {
        if (this != &other) {
            delete[] data;

            data = other.data;
            size = other.size;

            other.data = nullptr;
            other.size = 0;

            cout << "Move Assigned\n";
        }
        return *this;
    }
};
