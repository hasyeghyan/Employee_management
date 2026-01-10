#ifndef ACCOUNTANT_HPP
#define ACCOUNTANT_HPP

#include "Employee.hpp"
#include "ISalary.hpp"
#include <iostream>

class Accountant : public Employee, public ISalary {
    public:
        Accountant(const std::string& n, double s = 0) : Employee(n), salary{s} {}
        virtual ~Accountant() = default;

        virtual void print() override { std::cout << "ID is " << id << ", Name is " << name << ", Role is Accountant " <<  ", Salary is " << salary << std::endl; }
        
        virtual void calcSalary() override;
    private:
        double salary;
};

#endif