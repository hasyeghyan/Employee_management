#include "EmployeeRepo.hpp"

void EmployeeRepo::addEmployee(std::shared_ptr<Employee> e) {
    employees.push_back(e);
}

void EmployeeRepo::removeEmployee(size_t index) {
    for (size_t i{}; i < employees.size(); ++i) {
        if (employees[i]->getId() == index) {
            employees.erase(employees.begin() + i);
            return;
        }
    }
}

void EmployeeRepo::list() {
    for (size_t i{}; i < employees.size(); ++i) {
        employees[i]->getInfo();
    }
}

