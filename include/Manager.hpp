#ifndef MANAGER_HPP
#define MANAGER_HPP

#include "Employee.hpp"
#include "ISalary.hpp"


class Manager : public Employee, public ISalary {
    public:
        Manager(const std::string& n, double s = 0) : Employee(n), salary{s} {}
        virtual ~Manager() = default;

        virtual void getInfo() override;

        virtual void calcSalary() override;
    private:
        double salary;
};

#endif