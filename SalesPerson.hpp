#ifndef SALESPERSON_HPP
#define SALESPERSON_HPP


#include "Employee.hpp"
#include "ISalary.hpp"


class SalesPerson : public Employee, public ISalary {
    public:
        SalesPerson(const std::string& n, double s = 0) : Employee(n), salary{s} {}
        virtual ~SalesPerson() = default;

        virtual void print() override { std::cout << "ID is " << id << ", Name is " << name << ", Role is SalesPerson " << ", Salary is " << salary << std::endl; }

        virtual void calcSalary() override;
    private:
        double salary;
};

#endif