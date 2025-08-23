#include <memory>
#include <iostream>

int main() {
    // unique_ptr for array of integers
    std::unique_ptr<int[]> arr(new int[5]{10, 20, 30, 40, 50});

    //std::unique_ptr<int[]> arr = std::make_unique<int[]>(5); // C++14 and later

    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";  // operator[] works
    }
}