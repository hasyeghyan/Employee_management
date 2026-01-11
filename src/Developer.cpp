#include "Developer.hpp"

void Developer::getInfo() {
    std::cout << "ID is " << id << 
    ", Name is " << name << 
    ", Role is Accountant " <<  
    ", Salary is " << salary << std::endl; 
}

void Developer::calcSalary() {
    salary = (id * 200000) + 50000; 
}