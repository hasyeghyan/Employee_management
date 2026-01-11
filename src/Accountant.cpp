#include "Accountant.hpp"

void Accountant::getInfo() {
    std::cout << "ID is " << id << 
    ", Name is " << name << 
    ", Role is Accountant " <<  
    ", Salary is " << salary << std::endl; 
}

void Accountant::calcSalary() {
    salary = id * 100000;
}