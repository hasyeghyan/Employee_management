#include "SalesPerson.hpp"

void SalesPerson::getInfo() {
    std::cout << "ID is " << id << 
    ", Name is " << name << 
    ", Role is Accountant " <<  
    ", Salary is " << salary << std::endl; 
}

void SalesPerson::calcSalary() {
    salary = (id * 50000) + (name.size() * 100000); 
}