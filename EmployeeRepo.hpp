#ifndef EMPLOYEEREPO_HPP
#define EMPLOYEEREPO_HPP

#include "Employee.hpp"
#include <memory>
#include <iostream>
#include <vector>

class EmployeeRepo {
    private:
        std::vector<std::shared_ptr<Employee>> employees;
    public:
        void addEmployee(std::shared_ptr<Employee> e);
        void removeEmployee(size_t index);
        
        void list();

        std::vector<std::shared_ptr<Employee>> getEmployees() const noexcept { return employees; }
};

#endif