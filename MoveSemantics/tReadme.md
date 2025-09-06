std::unique_ptr<int> p1(new int(10));

// ❌ ERROR: unique_ptr cannot be copied
std::unique_ptr<int> p2 = p1;

std::unique_ptr<int> p1(new int(10));

// ✅ Ownership transfer using move
std::unique_ptr<int> p2 = std::move(p1);

if (!p1) {
    std::cout << "p1 is empty after move\n";
}


// Function that takes ownership of unique_ptr to array
void processArray(std::unique_ptr<int[]> arr, size_t size) {
    std::cout << "Processing array: ";
    for (size_t i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    // arr will automatically delete[] memory when function ends
}

// Function that creates unique_ptr array and passes it to processArray
void createAndProcessArray(size_t size) {
    std::unique_ptr<int[]> arr(new int[size]);  // allocate dynamic array

    for (size_t i = 0; i < size; i++) {
        arr[i] = static_cast<int>(i * 10);  // fill with some values
    }   

    // Transfer ownership to processArray
    processArray(std::move(arr), size);

    if (!arr) {
        std::cout << "Array pointer is null after move in caller\n";
    }
}

void createAndProcessArray(size_t size) {
    std::unique_ptr<int[]> arr(new int[size]);  // allocate dynamic array

    for (size_t i = 0; i < size; i++) {
        arr[i] = static_cast<int>(i * 10);  // fill with some values
    }

    // Transfer ownership to processArray
    processArray(arr, size);    
}