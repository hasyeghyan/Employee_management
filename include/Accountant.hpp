#ifndef ACCOUNTANT_HPP
#define ACCOUNTANT_HPP

#include "Employee.hpp"
#include "ISalary.hpp"
#include <iostream>

class Accountant : public Employee, public ISalary {
    public:
        Accountant(const std::string& n, double s = 0) : Employee(n), salary{s} {}
        virtual ~Accountant() = default;

        virtual void getInfo() override;
        
        virtual void calcSalary() override;
    private:
        double salary;
};

#endif