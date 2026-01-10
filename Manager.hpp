#ifndef MANAGER_HPP
#define MANAGER_HPP

#include "Employee.hpp"
#include "ISalary.hpp"


class Manager : public Employee, public ISalary {
    public:
        Manager(const std::string& n, double s = 0) : Employee(n), salary{s} {}
        virtual ~Manager() = default;

        virtual void print() override { std::cout << "ID is " << id << ", Name is " << name << ", Role is Manager "  << ", Salary is " << salary <<  std::endl; }

        virtual void calcSalary() override;
    private:
        double salary;
};

#endif