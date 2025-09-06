template <typename T>
class unique_ptr {
private:
    T* ptr_; // Raw pointer to the managed object
public:
    // Constructor: Takes ownership of a raw pointer
    explicit unique_ptr(T* ptr = nullptr) : ptr_(ptr) {}

    // Destructor: Deletes the managed object when 
    // unique_ptr goes out of scope
    ~unique_ptr() {
        delete ptr_;
    }

    // Deleted copy constructor and assignment operator 
    // to enforce exclusive ownership
    unique_ptr(const unique_ptr&) = delete;
    unique_ptr& operator=(const unique_ptr&) = delete;

    // Move constructor: Transfers ownership from another unique_ptr
    unique_ptr(unique_ptr&& other) noexcept : ptr_(other.ptr_) {
        other.ptr_ = nullptr; // Nullify the source pointer
    }

    // Move assignment operator: Transfers ownership from another unique_ptr
    unique_ptr& operator=(unique_ptr&& other) noexcept {
        if (this != &other) { // Avoid self-assignment
            delete ptr_;      // Delete current managed object
            ptr_ = other.ptr_;
            other.ptr_ = nullptr; // Nullify the source pointer
        }
        return *this;
    }

    // Dereference operator: Accesses the managed object
    T& operator*() const noexcept {
        return *ptr_;
    }

    // Arrow operator: Accesses members of the managed object
    T* operator->() const noexcept {
        return ptr_;
    }

    // Subscript operator: Accesses elements if T is an array type
    T& operator[](std::size_t i) const { 
        return ptr[i]; 
    }

    // get(): Returns the raw pointer
    T* get() const noexcept {
        return ptr_;
    }

    // ✅ operator bool to check nullness
    explicit operator bool() const noexcept {
        return ptr != nullptr;
    }

    // release(): Releases ownership and returns the raw pointer, 
    // setting unique_ptr to nullptr
    T* release() noexcept {
        T* temp = ptr_;
        ptr_ = nullptr;
        return temp;
    }

    // reset(): Deletes the current managed object 
    // and takes ownership of a new raw pointer
    void reset(T* ptr = nullptr) noexcept {
        if (ptr_ != ptr) { // Avoid deleting and re-assigning the same pointer
            delete ptr_;
            ptr_ = ptr;
        }
    }

    // Explicit conversion to bool: Checks if the unique_ptr owns an object
    explicit operator bool() const noexcept {
        return ptr_ != nullptr;
    }

     // move constructor
    unique_ptr(unique_ptr&& other) noexcept 
        : ptr(other.ptr)   // steal resource from rvalue reference
    {
        other.ptr = nullptr; // release old pointer of rvalue reference
    }

    // move assignment
    unique_ptr& operator=(unique_ptr&& other) noexcept {
        if (this != &other) {
            delete ptr;          // delete current resource
            ptr = other.ptr;     // steal resource from rvalue reference
            other.ptr = nullptr; // release pointer of rvalue reference
        }
        return *this;
    }
};