#include "Manager.hpp"

void Manager::getInfo() {
    std::cout << "ID is " << id << 
    ", Name is " << name << 
    ", Role is Accountant " <<  
    ", Salary is " << salary << std::endl; 
}

void Manager::calcSalary() {
    salary = 500000; 
}