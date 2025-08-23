#include <iostream>
#include <memory>
#include <string>

class Employee {
    std::string name;
    int salary;   // dynamically allocated to simulate complex resource mgmt
public:
    Employee(const std::string& n, int s) : name(n), salary(s) {
        std::cout << "Employee " << name << " created with salary " << salary << "\n";
    }

    ~Employee() {
        std::cout << "Employee " << name << " destroyed\n";        
    }

    void promote(int increment) {
        salary += increment;
        std::cout << name << " got promoted! New salary: " << salary << "\n";
    }

    void display() const {
        std::cout << "Employee: " << name << ", Salary: " << salary << "\n";
    }
};

int main() {
    std::unique_ptr<Employee> emp2 = std::make_unique<Employee>("Bob", 50000);
    // create a unique_ptr managing Employee
    std::unique_ptr<Employee> emp1 = std::make_unique<Employee>("Alice", 50000);
    //use Arrow operator to access members
    emp1->display();
    emp1->promote(10000);

     // Dereference to get the Employee object
    Employee emp = *emp1;
    emp.display();

    //check nullness using operator bool
    if (!emp1) {
        std::cout << "emp1 no longer owns the resource.\n";
    }    
    return 0;  // emp1 goes out of scope -> Employee destructor called
}
