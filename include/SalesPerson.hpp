#ifndef SALESPERSON_HPP
#define SALESPERSON_HPP


#include "Employee.hpp"
#include "ISalary.hpp"


class SalesPerson : public Employee, public ISalary {
    public:
        SalesPerson(const std::string& n, double s = 0) : Employee(n), salary{s} {}
        virtual ~SalesPerson() = default;

        virtual void getInfo() override;

        virtual void calcSalary() override;
    private:
        double salary;
};

#endif