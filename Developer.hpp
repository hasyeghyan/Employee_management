#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include "Employee.hpp"
#include "ISalary.hpp"


class Developer : public Employee, public ISalary {
    public:
        Developer(const std::string& n, double s = 0) : Employee(n), salary{s} {}
        virtual ~Developer() = default;
        
        virtual void print() override { std::cout <<"ID is " << id << ", Name is " << name  << ", Role is Developer " << ", Salary is " << salary <<  std::endl; }
        
        virtual void calcSalary() override;
    private:
        double salary;
};

#endif